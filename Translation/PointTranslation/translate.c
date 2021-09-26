 #include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;

int x1=100,y1=50,x=100,y=50;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
putpixel(x1,y1,1);
x1=x1+x;
y1=y1+y;

printf("Line after translation");
delay(100);
putpixel(x1,y1,2);
getch();
closegraph();
}
