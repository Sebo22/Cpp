#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{

    int n, brSanduka=1;
    int x, sum=0;

    printf("Unesi broj n\n");
    scanf("%d", &n);

    while (n){
    printf("Unesi masu\n");
    scanf("%d", &x);
    n--;
    printf("%d",sum+x);
    if(sum+x>1000){

        sum=x;

        brSanduka++;

    }else sum+=x;




    }

    printf("potrebno je %d sanduka",brSanduka);

    return 0;

}
