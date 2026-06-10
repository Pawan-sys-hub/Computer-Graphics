#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    // Initialize graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Change background color to white
    setbkcolor(WHITE);
    cleardevice();

    // 1. Draw the face (Yellow Circle)
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(300, 200, 100);
    floodfill(300, 200, YELLOW);

    // 2. Draw the eyes (Black Circles)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(260, 160, 15);
    floodfill(260, 160, BLACK); // Left eye
    circle(340, 160, 15);
    floodfill(340, 160, BLACK); // Right eye

    // 3. Draw the smile (Arc)
    setcolor(BLACK);
    arc(300, 200, 200, 340, 50);

    // 4. Print a success message
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(160, 330, (char*)"Graphics is Working!");

    // Wait for the user to press any key before closing
    getch();
    closegraph();
    
    return 0;
}