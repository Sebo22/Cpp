#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main ()

{
    int i;
    int x[6];

    for(i=0;i<6;i++){

        printf("Unesi broj:");
        scanf("%d", &x[i]);

    }

    printf("\n");

    for(i=0;i<6;i++){

        printf("%d\n", x[i]);
    }

}
