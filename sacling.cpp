#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    /* Sample Input Values */
    float x1 = 100, y1 = 100;
    float x2 = 200, y2 = 100;
    float sx = 2, sy = 2;

    float x3, y3, x4, y4;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* Original Line */
    setcolor(7);
    line((int)x1, (int)y1, (int)x2, (int)y2);
    outtextxy((int)x2 + 5, (int)y2, "Object");

    /* Scaling Calculation */
    x3 = x1 * sx;
    y3 = y1 * sy;
    x4 = x2 * sx;
    y4 = y2 * sy;

    /* Scaled Line */
    setcolor(15);
    line((int)x3, (int)y3, (int)x4, (int)y4);
    outtextxy((int)x4 + 5, (int)y4, "Image");

    getch();
    closegraph();
    return 0;
}