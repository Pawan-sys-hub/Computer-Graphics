#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Change background color to a light blue sky
    setbkcolor(LIGHTCYAN);
    cleardevice();

    // 1. Draw the Main House Body (Light Gray Rectangle)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    rectangle(200, 250, 400, 400);
    floodfill(201, 251, BLACK);

    // 2. Draw the Roof (Red Triangle)
    setcolor(BLACK);
    setfillstyle(HATCH_FILL, RED); // Using a hatched pattern for roof tiles
    line(200, 250, 400, 250);      // Base of roof
    line(200, 250, 300, 150);      // Left slant
    line(400, 250, 300, 150);      // Right slant
    floodfill(300, 240, BLACK);    // Fill the roof

    // 3. Draw the Door (Brown Rectangle)
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(275, 330, 325, 400);
    floodfill(300, 350, BLACK);
    
    // Draw the Door Knob (Small Black Circle)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(315, 365, 3);
    floodfill(315, 365, BLACK);

    // 4. Draw the Windows (Light Blue Squares)
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    
    // Left Window
    rectangle(220, 270, 260, 310);
    floodfill(225, 275, BLACK);
    line(240, 270, 240, 310); // Vertical window pane
    line(220, 290, 260, 290); // Horizontal window pane
    
    // Right Window
    rectangle(340, 270, 380, 310);
    floodfill(345, 275, BLACK);
    line(360, 270, 360, 310); // Vertical window pane
    line(340, 290, 380, 290); // Horizontal window pane

    // 5. Draw a Sun in the sky (Yellow Circle)
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(100, 100, 40);
    floodfill(100, 100, YELLOW);

    // 6. Draw the Ground (Green Line)
    setcolor(GREEN);
    line(0, 400, 640, 400);

    // Wait for the user to press any key before closing
    getch();
    closegraph();
    
    return 0;
}