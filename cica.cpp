#include <graphics.h>
#include <conio.h>


int main(void){

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");


	line(300,0,300,100);
	pieslice(300,100,0,180,50);
	line(265,110,245,150);
	line(290,110,275,150);
	line(310,110,325,150);
	line(335,110,355,150);
	line(250,450,250,330);
	line(250,330,450,330);
	line(450,330,450,450);
	line(150,450,150,270);
	line(150,375,230,375);
	line(230,375,230,450);
	line(235,440,235,360);
	line(235,360,170,360);
	line(170,360,170,300);
	line(170,325,200,325);
	circle()



	getch();
	cleardevice();
	closegraph();
	return 0;
}
