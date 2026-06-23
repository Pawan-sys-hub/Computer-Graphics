#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    float shx = 1;   // 🔥 fixed input (shear factor)

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* Original Rectangle */
    setcolor(7);
    line(100, 0, 200, 0);
    line(200, 0, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 0);

    /* Sheared Rectangle (X-Shear) */
    setcolor(12);

    line((int)(100 + 0 * shx), 0,
         (int)(200 + 0 * shx), 0);

    line((int)(200 + 0 * shx), 0,
         (int)(200 + 200 * shx), 200);

    line((int)(200 + 200 * shx), 200,
         (int)(100 + 200 * shx), 200);

    line((int)(100 + 200 * shx), 200,
         (int)(100 + 0 * shx), 0);

    outtextxy(10, 10, "X-Shear Transformation");

    getch();
    closegraph();
    return 0;
}