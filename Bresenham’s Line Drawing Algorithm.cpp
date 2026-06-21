#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2;

    printf("Enter starting coordinates: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter ending coordinates: ");
    scanf("%d%d", &x2, &y2);

    int x = x1;
    int y = y1;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;

    while(x <= x2)
    {
        putpixel(x, y, BLUE);

        x++;

        if(p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y++;
            p = p + 2 * dy - 2 * dx;
        }
    }

    getch();
    closegraph();
    return 0;
}