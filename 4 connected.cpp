#include <graphics.h>
#include <conio.h>
#include <dos.h>

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if(getpixel(x, y) != bcolor && getpixel(x, y) != fcolor)
    {
        putpixel(x, y, fcolor);

        boundary_fill(x + 1, y, fcolor, bcolor);
        boundary_fill(x - 1, y, fcolor, bcolor);
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
    }
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* White boundary */
    setcolor(WHITE);
    circle(200, 200, 45);

    /* Fill inside with RED */
    boundary_fill(200, 200, RED, WHITE);

    getch();
    closegraph();
    return 0;
}