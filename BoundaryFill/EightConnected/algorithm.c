#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
// Function for 8 connected Pixels
void boundaryFill8(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill8(x + 1, y, fill_color, boundary_color);
        boundaryFill8(x, y + 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y, fill_color, boundary_color);
        boundaryFill8(x, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
        delay(1000);
    }
}

void main()
{
int graphdriver=DETECT,graphmode,errorcode;
int x = 250, y = 200, radius = 50;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
    // Rectangle function
    rectangle(50, 50, 450, 300);
  
    // Function calling
    boundaryFill8(55, 55, 4, 15);

getch();
closegraph();
}
