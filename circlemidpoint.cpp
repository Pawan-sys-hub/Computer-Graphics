#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int x = 0, y, r, p;
    int xc, yc;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    printf("Enter the center of the circle (xc yc): ");
    scanf("%d%d", &xc, &yc);

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    y = r;
    p = 1 - r;

    while (x <= y)
    {
        // 8-way symmetry
        putpixel(xc + x, yc + y, RED);
        putpixel(xc - x, yc + y, RED);
        putpixel(xc + x, yc - y, RED);
        putpixel(xc - x, yc - y, RED);

        putpixel(xc + y, yc + x, RED);
        putpixel(xc - y, yc + x, RED);
        putpixel(xc + y, yc - x, RED);
        putpixel(xc - y, yc - x, RED);

        if (p < 0)
        {
            x++;
            p = p + 2 * x + 1;
        }
        else
        {
            x++;
            y--;
            p = p + 2 * x - 2 * y + 1;
        }
    }

    getch();
    closegraph();
    return 0;
}