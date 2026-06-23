#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Background color
    setbkcolor(WHITE);
    cleardevice();

    // Draw only circle (face)
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(300, 200, 100);
    floodfill(300, 200, YELLOW);

    getch();
    closegraph();

    return 0;
}