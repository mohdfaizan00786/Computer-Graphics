
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>

void main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;

	int x,y,r,s,p,linex,liney;

	/* initialize graphics, local variables */
	initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
	x=getmaxx()/4,y=getmaxy()/2;
	r=40;

	s=1;

	p=0;
	setbkcolor(WHITE);
	linex=getmaxx()/4;
	liney=y+r+1;
	while(!kbhit())
	{
		setcolor(RED);
		line(linex,liney,3*linex,liney);

		circle(x,y,r);
		if(s==1)
		{
			setcolor(GREEN);
		  if(x>=(3*linex+r))
			 {
				s=0;
				p=2;
			 }

		}
		else if(s==-1)
		{
			setcolor(BLUE);
			if(x<=linex-r)
			  {
				s=0;
				p=-2;
			  }
		}
		else if(p==2)
		{
			setcolor(RED);
			y=y+4;
			if(y>=liney+r)
			{
				s=-1;
				p=0;
			}
		}
		else if(p==-2)
		{
			setcolor(BLACK);
			y=y-4;
			if(y<=liney-r)
			{
				s=1;
				p=0;
			}
		}


		x=x+10*s;
		delay(150);
		cleardevice();

	}
	getch();
	closegraph();

}

