#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
int lx,ly,cx,cy,flag=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
lx=60;
ly=getmaxy()/2;
cx=60;
cy= getmaxy()/2;
while(!kbhit())
{
line(lx,ly,lx+300,ly);
circle(cx,cy-40,40);
delay(100);
cleardevice();
if(cx>=lx+300&&flag==0)
{
cx=cx;
cy=cy+80;
flag=1;
}
else if(flag==1&&cx>=60)
{
cx=cx-10;
}
else if(cx<60&&flag==1)
{
cx=60;
cy=cy-80;
flag=0;
}
else
{
 cx=cx+10;
}

}
closegraph();
getch();
return 0;
}