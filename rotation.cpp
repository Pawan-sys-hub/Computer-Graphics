#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    float theta = 90;
    float t = theta * (3.1416 / 180.0);

    int cx = (x1 + x2 + x3) / 3;
    int cy = (y1 + y2 + y3) / 3;

    int rx1, ry1, rx2, ry2, rx3, ry3;

    // 🔵 Original triangle
    setcolor(BLUE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    // 🔥 Translate → rotate → translate back
    rx1 = cx + ((x1 - cx) * cos(t) - (y1 - cy) * sin(t));
    ry1 = cy + ((x1 - cx) * sin(t) + (y1 - cy) * cos(t));

    rx2 = cx + ((x2 - cx) * cos(t) - (y2 - cy) * sin(t));
    ry2 = cy + ((x2 - cx) * sin(t) + (y2 - cy) * cos(t));

    rx3 = cx + ((x3 - cx) * cos(t) - (y3 - cy) * sin(t));
    ry3 = cy + ((x3 - cx) * sin(t) + (y3 - cy) * cos(t));

    // 🔴 Rotated triangle
    setcolor(RED);
    line(rx1,ry1,rx2,ry2);
    line(rx2,ry2,rx3,ry3);
    line(rx3,ry3,rx1,ry1);

    getch();
    closegraph();
    return 0;
}