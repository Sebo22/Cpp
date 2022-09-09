#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

 int x;
 int y;


 printf("Unesi cijenu prve tvrtke");
 scanf("%d", &x);

 printf("Unesi cijenu druge tvrtke");
 scanf("%d", &y);

 if (x>y){
	printf("Marko ce ici tvrtkom y");
}
else {
	printf("Marko ce ici tvrtom x");
}

}
