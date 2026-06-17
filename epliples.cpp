// Midpoint Ellipse Algorithm
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

void midellipse(int xc, int yc, int rx, int ry);
void ellipsepoint(int xc, int yc, int x, int y);

int main()
{
    int gd = DETECT, gm;
    int xc, yc, rx, ry;

    clrscr();

    printf("Enter center of ellipse (xc yc): ");
    scanf("%d%d", &xc, &yc);

    printf("Enter x-radius and y-radius (rx ry): ");
    scanf("%d%d", &rx, &ry);

    initgraph(&gd, &gm, "");

    midellipse(xc, yc, rx, ry);

    outtextxy(10, 10, "Press any key to exit...");
    getch();

    closegraph();
    return 0;
}

void midellipse(int xc, int yc, int rx, int ry)
{
    double rx2 = rx * rx;
    double ry2 = ry * ry;
    double p;
    int x = 0;
    int y = ry;

    // Plot initial points
    ellipsepoint(xc, yc, x, y);

    // Region 1
    p = ry2 - rx2 * ry + 0.25 * rx2;

    while (2 * ry2 * x < 2 * rx2 * y)
    {
        x++;

        if (p < 0)
        {
            p = p + 2 * ry2 * x + ry2;
        }
        else
        {
            y--;
            p = p + 2 * ry2 * x - 2 * rx2 * y + ry2;
        }

        ellipsepoint(xc, yc, x, y);
    }

    // Region 2
    p = ry2 * (x + 0.5) * (x + 0.5)
        + rx2 * (y - 1) * (y - 1)
        - rx2 * ry2;

    while (y > 0)
    {
        y--;

        if (p > 0)
        {
            p = p - 2 * rx2 * y + rx2;
        }
        else
        {
            x++;
            p = p + 2 * ry2 * x - 2 * rx2 * y + rx2;
        }

        ellipsepoint(xc, yc, x, y);
    }
}

void ellipsepoint(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}