
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<math.h>

void main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	int cx,cy,r,sec=0,min=0;
	int mx,my,hx,hy,degree=1,deg;
	/* initialize graphics, local variables */
	initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
	r=50;
	cx=getmaxx()/2;
	cy=getmaxy()/2;
	mx=cx;
	my=cy-r;
	hx=cx;
	hy=cy-r;


	while(!kbhit())
	{
	 setcolor(YELLOW);
	 circle(cx,cy,r);
	 setcolor(RED);
	 line(cx,cy,mx,my);
	 setcolor(GREEN);
	 //line(cx,cy,hx,hy);

	 sleep(1);



	 //if(sec==60)
	 //{
	 //	 sec=0;
	 //	 min++;
	 //
	 sec++;
	 degree = sec * 90 ;
	 degree = (degree * (22/7) ) /180;
	 mx=cx+r*sin(degree);
	 my=cy-r*cos(degree);

	 deg = degree /60;
	 //hx=cx+r*sin(deg);
	 //hy=cy+r*cos(deg);



	 cleardevice();


	}

	getch();
	closegraph();

}

