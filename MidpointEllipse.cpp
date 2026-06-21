#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

void ellipsepoint(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
}

void midellipse(int xc,int yc,int rx,int ry)
{
    double rx2=rx*rx;
    double ry2=ry*ry;
    int x=0,y=ry;

    double p=ry2-rx2*ry+0.25*rx2;

    while((2*ry2*x)<(2*rx2*y))
    {
        ellipsepoint(xc,yc,x,y);

        if(p<0)
            p=p+2*ry2*x+ry2;
        else
        {
            p=p+2*ry2*x-2*rx2*y+ry2;
            y--;
        }
        x++;
    }

    p=ry2*(x*x+x+0.25)+rx2*(y*y-2*y+1)-rx2*ry2;

    while(y>=0)
    {
        ellipsepoint(xc,yc,x,y);

        if(p>0)
            p=p-2*rx2*y+rx2;
        else
        {
            p=p+2*ry2*x-2*rx2*y+rx2;
            x++;
        }
        y--;
    }
}

int main()
{
    int gd=DETECT,gm;
    int xc,yc,rx,ry;

    initgraph(&gd,&gm,"");

    printf("Enter xc yc rx ry: ");
    scanf("%d%d%d%d",&xc,&yc,&rx,&ry);

    midellipse(xc,yc,rx,ry);

    getch();
    closegraph();
    return 0;
}