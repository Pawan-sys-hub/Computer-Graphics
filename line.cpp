#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // 1. Draw a basic Horizontal Line (Yellow)
    // Syntax: line(x1, y1, x2, y2);
    setcolor(YELLOW);
    line(100, 100, 400, 100);

    // 2. Draw a Vertical Line (Red)
    setcolor(RED);
    line(100, 100, 100, 300);

    // 3. Draw a Diagonal Line connecting them (Green)
    setcolor(GREEN);
    line(100, 300, 400, 100);

    // 4. Change Line Thickness and Style (Dashed Cyan Line)
    // Syntax: setlinestyle(style, pattern, thickness);
    setcolor(CYAN);
    setlinestyle(DASHED_LINE, 0, 3); // DASHED_LINE style, thickness 3
    line(100, 350, 400, 350);

    // Reset the line style back to normal for the next drawing
    setlinestyle(SOLID_LINE, 0, 1);

    // 5. Draw a 5-pointed Star using 5 lines (Magenta)
    setcolor(MAGENTA);
    line(500, 100, 550, 250); // Line 1
    line(550, 250, 430, 150); // Line 2
    line(430, 150, 570, 150); // Line 3
    line(570, 150, 450, 250); // Line 4
    line(450, 250, 500, 100); // Line 5

    // Wait for the user to press a key before closing
    getch();
    closegraph();
    
    return 0;
}