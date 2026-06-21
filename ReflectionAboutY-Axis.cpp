#include <graphics.h>
#include <conio.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int midx=getmaxx()/2;
    int midy=getmaxy()/2;

    line(0,midy,getmaxx(),midy);
    line(midx,0,midx,getmaxy());

    int x1=50,y1=50;
    int x2=100,y2=100;
    int x3=150,y3=50;

    setcolor(WHITE);
    line(midx+x1,midy-y1,midx+x2,midy-y2);
    line(midx+x2,midy-y2,midx+x3,midy-y3);
    line(midx+x3,midy-y3,midx+x1,midy-y1);

    setcolor(RED);
    line(midx-x1,midy-y1,midx-x2,midy-y2);
    line(midx-x2,midy-y2,midx-x3,midy-y3);
    line(midx-x3,midy-y3,midx-x1,midy-y1);

    getch();
    closegraph();
    return 0;
}