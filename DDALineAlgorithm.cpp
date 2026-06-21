#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1;
    float y = y1;

    for(int i = 0; i <= steps; i++)
    {
        putpixel((int)x, (int)y, WHITE);
        x += xInc;
        y += yInc;
    }

    getch();
    closegraph();
    return 0;
}