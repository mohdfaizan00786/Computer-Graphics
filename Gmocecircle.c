#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x=100,y=100,r=20;
	float c=.1;
	for(float i=0;i<100;i=i+.1)
	{
		delay(10);
		cleardevice();
		line(x+i,y,x+i+r*cos(i),y+r*sin(i));
		line(x+i,y,x+i+r*cos(90+i),y+r*sin(90+i));
		line(x+i,y,x+i+r*cos(135+i),y+r*sin(135+i));
		line(x+i,y,x+i+r*cos(180+i),y+r*sin(180+i));
		line(x+i,y,x+i+r*cos(225+i),y+r*sin(225+i));
		line(x+i,y,x+i+r*cos(315+i),y+r*sin(315+i));
		circle(x+i,y,r);
		if(kbhit())
		{
			if(getch())
			{
				printf("break");
				if(getch()){}
			 }

		}

	}
	getch();
}	
