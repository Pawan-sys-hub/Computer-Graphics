#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    // Draw a line from (100,100) to (300,200)
    line(100, 100, 300, 200);

    getch();
    closegraph();

    return 0;
}

// Program to draw a line between two end points using DDA Algorithm 

#include <graphics.h>
#include <math.h>
#include <conio.h>

int main ()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float xInc = dx / steps;
    float yInc = dy / steps;

    float x = x1;
    float y = y1;

    for(int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x += xInc;
        y += yInc;
    }

    getch();
    closegraph();

    return 0;
}

// Program to draw a line between two end points using DDA Algorithm asking for end points.

#include <graphics.h>
#include <math.h>
#include <conio.h>

int main ()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x1,y1,x2,y2,dx,dy,xn,yn,i,steps;
    printf(" Enter the starting coordinates :");
    scanf("%d%d",&x1,&y1);
    printf(" Enter the ending coordinates :");
    scanf("%d%d",&x2,&y2);
    

    dx = x2 - x1;
    dy = y2 - y1;

     if( abs(dx)>abs(dy))
    {
     steps = abs(dx);
    }
  else {
     steps = abs(dy);
      }
   xn = dx/steps;
   yn = dy/steps;

  for(int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x1= x1+xn;
        y1= y1+yn;
    }

    getch();
    closegraph();

    return 0;
}

/ Program to implement Bresenham line Drawing Algorithm 

#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

int main ()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x,y,x1,y1,x2,y2,dx,dy,p;
    printf(" Enter the starting coordinates :");
    scanf("%d%d",&x1,&y1);
    printf(" Enter the ending coordinates :");
    scanf("%d%d",&x2,&y2);
    x=x1;
    y=y1;
    putpixel(x,y,BLUE);

    dx = x2 - x1;
    dy = y2 - y1;
    p= 2*dy - dx;
    while(x!=x2 && y!=y2)
    {
    	if ( p<0)
    	{ 
    	x=x+1;
    	y= y;
    	p=p+(2*dy);
    	putpixel(x,y,BLUE);
		}
		else {
			x=x+1;
			y=y+1;
			p=p+(2*dy)-(2*dx);
			putpixel(x,y,BLUE);
			
		}
	}

    

  
     getch();
    
    closegraph();
    return 0 ;


}