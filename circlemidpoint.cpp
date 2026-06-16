#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
  int  x=0,y,r,p,xc,yc;
  intgd =DETECT,gm;
  initgraph(&gd,&gm,(char*)"");
  printf("Enter the center of the circle:");
  scanf("%d%d",&xc,&yc);
  printf("Enter the radius of the circle:");
  scanf("%d",&r);
  y = r;
  p = 1-r;
  while(x<y){
    putpixel(xc+x,yc+y,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+y,yc+x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc-y,yc-x,RED);
    if(p<0){
      x+1;
      p=p+2*x+1;
    }
    else{
      x+1;
      y-1;
      p=p+2*x-2*y+1;
    }
  }
  getch();
closegraph();
  return 0;
   
}  
   
