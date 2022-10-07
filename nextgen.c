#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int energija (int x, int y,int z,int u){
x=x*y;
if ((z*u)>x)
return printf("Nece moci podrzavati grad 1 god\n");
else
return printf("Moci ce podrzavat grad %d godina\n",u);

}

int main(){
int a,b,c,d;
printf("Unesi kilko grama Helija-3 ima mjesec \n");
scanf("%d",&d);
printf("Unesi kilko gram Helija-3 prozivodi jedinice energije\n");
scanf("%d",&c);
printf("Unesi jedinica energije treba da se grad napaja 1 godinu \n");
scanf("%d",&a);
printf("Unesi kilko godina se grad treba napajati \n");
scanf("%d",&b);
energija(d,c,a,b);

}
