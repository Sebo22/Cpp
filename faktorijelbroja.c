#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()

{

    int n, i, fac=1, br=0;

    do{
    printf("Unesi broj n\n");
    scanf("%d", &n);
    if(n<0){ printf("Err\n");
    if(br>3) printf("De glup si, vec si %d puta upisao negativan broj\n", br);}
    br++;



    }while (n<0);

    i=n;

    while(i)
        fac*=i--;

    printf("Faktorijel broja %d je %d",n,fac);



    return 0;

}
