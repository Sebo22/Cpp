#include <stdio.h>

int main(){


int x;
int a;
int b;
int suma;

printf("unesi broj za b:");
scanf("%d",&b);

b=x%10;

while (b>10){
	x/=10;
}
a=x;
suma=a+x;

printf("suma znamenki je %d", suma);

}
