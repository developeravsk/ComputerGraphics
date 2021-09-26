#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;

double x1=150,y1=150, x2=450,y2=150;
int angle=45;
double s, c,x11,y11,x22,y22;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
//c = cos(angle *3.14/180);  
//s = sin(angle *3.14/180);
line(x1,y1,x2,y2);
c=cos(angle*3.14/180);
s=sin(angle*3.14/180);
x11 =x1 * c - y1 * s;
y11 =x1 * s + y1 * c;
x22 =x2 * c - y2 * s;
y22 =x2 * s + y2 * c;  
printf("%lf\n", x11);
printf("%lf\n", y11);
printf("%lf\n", x22);
printf("%lf\n", y22);
line(x11,y11,x22,y22);
getch();
closegraph();
}
