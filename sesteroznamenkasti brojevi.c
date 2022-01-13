#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a;

   printf("unesi sesteroznamenkasti broj: ");
   scanf("%d, &a");

   printf("\zbroj znamenki je %d",a%10+(a/10)%10+(a/100)%10+(a/10000)%10+a/100000);

   return 0;
}
