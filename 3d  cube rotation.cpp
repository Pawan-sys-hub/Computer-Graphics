#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void draw_3d_rect(int x1, int y1, int x2, int y2, int dx, int dy)
{
    rectangle(x1, y1, x2, y2);
    rectangle(x1 + dx, y1 + dy, x2 + dx, y2 + dy);

    line(x1, y1, x1 + dx, y1 + dy);
    line(x2, y1, x2 + dx, y1 + dy);
    line(x1, y2, x1 + dx, y2 + dy);
    line(x2, y2, x2 + dx, y2 + dy);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;

    setcolor(LIGHTGRAY);
    line(0, midy, getmaxx(), midy);
    line(midx, 0, midx, getmaxy());

    setcolor(WHITE);
    outtextxy(50, 50, "Original 3D Object");
    draw_3d_rect(midx - 200, midy - 150, midx - 80, midy - 50, 40, -40);

    setcolor(YELLOW);
    outtextxy(midx + 50, midy + 150, "180 Deg Effect");
    draw_3d_rect(midx + 100, midy + 50, midx + 220, midy + 150, -40, 40);

    getch();
    closegraph();
    return 0;
}