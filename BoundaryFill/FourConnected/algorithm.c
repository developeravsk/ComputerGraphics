#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
// Function for 4 connected Pixels
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
     	delay(1000);
    }
}

void main()
{
int graphdriver=DETECT,graphmode,errorcode;
int x = 250, y = 200, radius = 50;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
circle(x, y, radius);
boundaryFill4(x, y, 6, 15);

getch();
closegraph();
}
