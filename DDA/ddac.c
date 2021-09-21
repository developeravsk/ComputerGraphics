#include <graphics.h>
#include <stdio.h>
#include <math.h>
 
void main( )
{
float x,y,x1=100,y1=100,x2=400,y2=365,dx,dy,step;
int i,gd=DETECT,gm;
 
initgraph(&gd,&gm,NULL);
 

 
dx=abs(x2-x1);
dy=abs(y2-y1);
 
if(dx>=dy)
step=dx;
else
step=dy;
 
dx=dx/step;
dy=dy/step;
 
x=x1;
y=y1;
 
i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
 
closegraph();
}
