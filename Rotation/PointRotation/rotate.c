#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;

double x1=600,y1=800;
int angle=45;
double s, c,x11,y11;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
//c = cos(angle *3.14/180);  
//s = sin(angle *3.14/180);
putpixel(x1,y1,RED);
c=cos(angle*3.14/180);
s=sin(angle*3.14/180);
x11 =x1 * c - y1 * s;
y11 =x1 * s + y1 * c;
printf("%lf\n", x11);
printf("%lf\n", y11);
putpixel(x11,y11,BLUE);
getch();
closegraph();
}
