#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x;

   printf("Unesi broj promjera\n");
   scanf("%f", &x);
   float O=(x*3.1415);
   float n=(400000/O);
   printf("broj okretaja je %.0f\n",n);
   return 0;
}
