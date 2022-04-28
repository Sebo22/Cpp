#include <math.h>
#include <stdlib.h>
#include <stdio.h>


main ()

{

    int n,sum=2,dist;

    printf("Unesi broj gradova\n");
    scanf("%d",&n);

    while(n-1){
    scanf("%d",&dist);
    sum+=dist;
    }
    printf("Udaljenost izmedu prvog i zadnjeg grada je %d",dist);






}
