#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm,x,y,r,xs,ys,rs,angle;
	char c;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	angle=0;
	r=100;
	while(1)
	{
		if(kbhit())
		{
			c = getch();
			if(c=='q')
				break;
				if(c=='a')
				{
				angle+=5;
				}
				if(c=='d')
				{
				angle-=5;
				}
		}
		circle(x,y,r);
		rs=r/10;
		xs=(r+rs)*cos(angle*3.141/180);
		ys=(r+rs)*sin(angle*3.141/180);
		xs=x+xs;
		ys=y-ys;
		circle(xs,ys,rs);
		cleardevice();
	}
	getch();
	closegraph();
}