
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<math.h>
/*
union REGS in,out;

int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}

void mouseposi(int &xpos,int &ypos,int &ckick)
{
 in.x.ax=3;
 int86(51,&in,&out);
 click=out.x.bx;
 xpos=out.x.cx;
 ypos=out.x.dx;
}

int mousehide()
{
 in.x.ax=2;
 int86(51,&n,&out);
 return 1;
}

void setposi(int &xpos,int &ypos)
{
	in.x.ax=4;
	in.x.cx=xpos;
	in.x.dx=ypos;
	int86(51,&in,&out;)
}
*/

union REGS in,out;

int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}

int mousehide()
{
	in.x.ax=2;
	int86(51,&in,&out);
	return 1;
}

void setposi(int &x,int &y)
{
	in.x.ax=4;
	in.x.cx=x;
	in.x.dx=y;
	int86(51,&in,&out);
}

void mouseposi(int &x,int &y,int &cl)
{
	in.x.ax=3;
	int86(51,&in,&out);
	x=out.x.cx;
	y=out.x.dx;
	cl=out.x.bx;

}

void main()
{
	int x,y,cl,a,b;
	char arr[50];
	clrscr();

	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	int cx,cy,r,sec=0,min=0;
	char z;
	int mx,my,hx,hy,degree=1,deg;
	/* initialize graphics, local variables */
	initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
	r=40;
	cx=getmaxx()/2;
	cy=getmaxy()/2;
	mx=cx;
	my=cy-r;
	hx=cx;
	hy=cy-r;
	a=400;b=400;
	setposi(a,b);
	callmouse();


	z='y';
	while(!kbhit())
	{
	 setcolor(YELLOW);
	 circle(cx,cy,r);
	 mouseposi(x,y,cl);
	 sprintf(arr,"mouse_pos x=%d,y=%d",&x,&y);
	 outtextxy(400,400,arr);
	 if(cl==1)
	 {
	  circle(x,y,2);
	 }


	}

	getch();
	closegraph();
	mousehide();
}

