#include <graphics.h>
#include <conio.h>

int main() {
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    int tx = 50, ty = 50;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Original triangle (BLUE)
    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Translated triangle (RED)
    setcolor(RED);
    line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    line(x2 + tx, y2 + ty, x3 + tx, y3 + ty);
    line(x3 + tx, y3 + ty, x1 + tx, y1 + ty);

    getch();
    closegraph();
    return 0;
}