#include <stdio.h>

int main(){

int x;
int y;
int z;

printf("unesi masu manga: \n");
printf("unesi masu kamiona: \n");
printf("unesi masu koju most moze podnijeti: \n");
scanf("%d %d %d",&x ,&y ,&z);

if (x+y<z){
	printf("most ce podrzati masu kamiona i manga");
}
else {
	printf("most nece moci podrzati masu kamiona i manga");
}


}
