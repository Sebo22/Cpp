#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()

{
    int sum=0, i=10, n;

    while(i){
    scanf("%d", &n);
    sum+=n;
    i--;
    }
    printf("ukupno:%d",sum);
    printf("prosjecno:%f", (float)sum/10);

    return 0;

}
