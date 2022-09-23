#include <stdio.h>

int teke(float kg)
{
	int br = kg*1000/100;
	return br;
}

int main()
{
	float kile;
	int broj;
	printf("Unesi koliko kg pulpe: ");
	scanf("%f",&kile);
	broj=teke(kile);
	printf("od %.2f kg dobije se %d teki/biljeznica", kile, broj);
	return 0;	
	
	
}
