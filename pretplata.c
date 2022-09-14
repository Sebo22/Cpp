#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int mnozenje (int x, int y){
 return x*y;
}




int main ()
{
 int a,b,c;
 printf("Unesi broj prijatelja\n");
 scanf("%d", &a);
 printf("Unesi cijenu pretplate\n");
 scanf("%d", &b);
 printf("Najmanja cijena iznosi %d eura\n", mnozenje (a,b));


return 0;
}
