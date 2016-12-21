#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
float x1,y1,x2,y2,x,y,x3,y3,x4,y4,a;
int ch;
int main(void)
{
	int gdriver = DETECT, gmode, errorcode;
	clrscr();
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	cout<<"enter coordinates of line1:\n";
	cin>>x1>>y1>>x2>>y2;
	cout<<"enter coordinates for relative line:\n";
	cin>>x3>>y3;
	cout<<"enter the angle of rotation:\n";cin>>a;
	cleardevice();
	line(x1,y1,x2,y2);
	moveto(x2,y2);
	lineto(x3,y3);
	moveto(x3,y3);
	lineto(x1,y1);
	a=a*(3.14/180);
	x1=(x1*cos(a))-(y1*sin(a));
	y1=(x1*sin(a))+(y1*cos(a));
	x2=(x2*cos(a))-(y2*sin(a));
	y2=(x2*sin(a))+(y2*cos(a));
	x3=(x3*cos(a))-(y3*sin(a));
	y3=(x3*sin(a))+(y3*cos(a));
	cout<<"now hit a key to see rotation:";
	getch();
	moveto(x1,y1);
	lineto(x2,y2);
	moveto(x2,y2);
	lineto(x3,y3);
	moveto(x3,y3);
	lineto(x1,y1);
	getch();
	closegraph();
}