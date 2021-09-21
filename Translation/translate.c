 #include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;

int x2=600,y2=700,x1=100,y1=50,x=100,y=50;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
line(x1,y1,x2,y2);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;

printf("Line after translation");
delay(100);
line(x1,y1,x2,y2);
getch();
closegraph();
}
