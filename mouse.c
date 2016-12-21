#include<graphics.h>
#include<bios.h>
#include<dos.h>
 
void getxy();
 
int prevx,prevy,mousex,mousey,butt=1;
 
void main()
{
	int x=DETECT,y;
 
	initgraph(&x,&y,""); 
       // path to EGAVGA.BGI if this is not in your current directory
 
	_AX=0;
	asm int 33h
 
	setcolor(15);
 
	while(inportb(0x60)!=1)
	{
		getxy();
 
		if(butt==1)
		{
			_AX=2;
			asm int 33h
 
			line(mousex-1,mousey-1,prevx-1,prevy-1);
		}
		else
		{
			_AX=1;
			asm int 33h
		}
	}
 
	closegraph();
}
 
void getxy()
{
	_AX=3;
	asm int 33h;
 
	prevx=mousex;
	prevy=mousey;
 
	mousex=_CX;
	mousey=_DX;
	butt=_BX;
 
	gotoxy(2,2);
	printf("%3d   %3d   %2d",mousex,mousey,butt);
}