#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;

double x1=200,y1=50, x2=400,y2=70, x3=350, y3=100;
int sx=2,sy=2;
double x11,y11,x22,y22,x33,y33;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
x11 =x1 * sx;
y11 =y1 * sy;
x22 =x2 * sx;
y22 =y2 * sy;
x33 =x3 * sx;
y33 =y3 * sy;
printf("%lf\n", x11);
printf("%lf\n", y11);
printf("%lf\n", x22);
printf("%lf\n", y22);
printf("%lf\n", x33);
printf("%lf\n", y33);
line(x11,y11,x22,y22);
line(x22,y22,x33,y33);
line(x33,y33,x11,y11);
getch();
closegraph();
}
