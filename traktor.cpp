#include <graphics.h>
#include <conio.h>


int main(void){
	
	int gd = DETECT, gm;
	int i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cleardevice();
	getch();
	setfillstyle(1, 2);
	for(;;){
	for(i = 0; 1<= 380; i +=15){
		
		bar(20 + i, 300, 150 + i, 390);
		bar(125 + i, 350, 200 + i, 390);
		bar(170 + i, 350, 175 + i, 310);
		
		
		
		circle (50 + i, 370, 30);
		circle (170 + i, 390, 10);
		
		delay(100);
		cleardevice();
       	}	
	}
	
	getch();
	closegraph();
	return 0;
}
