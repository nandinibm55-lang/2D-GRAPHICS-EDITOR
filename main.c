#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROWS20
#define COLS40
char canvas[ROWS][COLS];
void initCanvas()
{
  for(int i=0;i<ROWS;i++;)
    for(int j=0;j<COLS;j++;)
      canvas[i][j]='_';
}
void displayCanvas()
{
  system("cls);
for(int i=0;i<ROWS;i++)
{
for(int j=0;j<COLS;j++)
printf("%c",canvas[i][j]);
printf("\n");
}
}
void drawPoint(int x,int y)
{
  if(x>=0 && x<ROWS && y>=0 && y<CLOS)
    canvas[x][y]='*';
}
void drawLine(int x1,int y1,int x2,int y2)
{
int dx=abs(x2-x1),sx=x1<x2?1:-1;
int dy=-abs(y2-y1),sy=y1<y2?1:-1;
int err=dx+dy,e2;
while(1)
{
drawPoint(x1,y1);
if(x1==x2 && y1==y2)
  break;
e2=2*err;
if(e2>=dy){err+=dy;x1 +=sx;}
if(e2<=dx){err+=dx;y1+=sy;}
}
}

void drawRectangle(int x1,inty1,intx2,inty2)
{
  drawLine(x1,y1,x1,y2);
  drawLine(x1,y2,x2,y2);
  drawLine(x2,y2,x2,y1);
  drawLine(x2,y1,x1,y1);
}
void drawCircle(int xc,int yc,int r)
{
int x=0,y=r,d=3-2*r;
while(y>=x)
{
drawPoint(xc+x,yc+y);
drawPoint(xc-x,yc-y);
drawPoint(xc+x,yc-y);
drawPoint(xc-x,yc-y);
drawPoint(xc+y,yc+x);
drawPoint(xc-y,yc+x);
drawPoint(xc+y,yc-x);
drawPoint(xc-y,yc-x);
x++;
if(d>0){y--;d=d+4*(x-y)+10;}
else d=d+4*x+6;
}
}
void drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
drawLine(x1,y1,x2,y2);
drawLine(x2,y2,x3,y3);
drawLine(x3,y3,x1,y1);
}(

int main()
{
  int choice,x1,y1,x2,y2,x3,y3,r;
initCanvas();
while(1)
{
displayCanvas();
printf("\n1,Line2.Rectangle 3.Cricle 4.Triangle 5.Clear 6.Exit\Choice:);
  switch(choice)
  {
  case 1;
printf("Enter x1 y1 x2 y2":);
scanf("%d %d %d",&x1,&y1,&x2,&y2);
drawLine(x1,y1,x2,y2);
break;
case2:
printf("Enter top-left x1 y1 and bottom-right x2 y2:");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
drawRectangle(x1,y1,x2,y2);
break;
case3:
printf("Enter center x y and radius:);
  scanf("%d %d %d",&x1,&y1,&r);
drawCircle(x1,y1,r);
break;
case 4:
printf("Enter 3 points x1 y1 x2 y2 x3 y3:");
scanf("%d %d %d %d:,&x1,&y1,&x2,&y2,&x3,&y3);
  drawTriangle(x1,y1,x2,y2,x3,y3);
braek;
case 5:
initCanvas();
break;
case 6:
exit(0);
}
}
return 0;
}
  
