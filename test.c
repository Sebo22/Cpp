#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int test,projekt;
    printf("unesi sto god znacilo test i projekt");
    scanf("%d %d",&test,&projekt);


    else if (test > 90 || projekt > 10) printf("100");
    else if (test > 75 || projekt >= 5) printf("90");
    else if (test > 50 || projekt >= 2) printf("75");

    return 0;


}

