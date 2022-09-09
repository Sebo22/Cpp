#include <stdio.h>

int main(){

int n;
int m;
int k;

printf("unesi koliko se prijatelja zeli upisati na tecaj \n");
printf("unesi maksimalan kapacitet broja ucenika koji se mogu upisati na tecaj \n");
printf("unesi broj ucenika koji su se vec upisali na tecaj \n");
scanf("%d %d %d",&n ,&m ,&k);

if (m<n){
	printf("ne mogu se svi prijatelji upisati u tecaj");
}
if (m<n+k){
	printf("ne mogu se svi prijatelji upisati u tecaj");
}
if (m>k+n){
	printf("svi prijatelji se mogu upisati u tecaj");
}

}
