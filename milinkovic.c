#include <graphics.h>
#include <conio.h>


int main(void){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	char kretnja;
	int xp = 100, yp = 100;
	while(kretnja !='q'){
	circle(100,100,50);
	line(100,250,100,148);
	line(100,160,50,175);
	line(100,160,150,175);
	line(100,250,160,300);
	line(100,250,70,300);
	kretnja = getch();
	if(kretnja == 72)
		yp = yp-2;
	if(kretnja == 75)
		xp = xp-2;
	if(kretnja == 77)
		xp = xp+2;
	if(kretnja == 80)
		yp = yp+2;
		cleardevice();
}
	getch();
	closegraph();
	return 0;
}
