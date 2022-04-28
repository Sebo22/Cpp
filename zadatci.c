#include <math.h>
#include <stdlib.h>
#include <stdio.h>


main ()

{

    int n,k,A1,A2,A3,A4,A5,B,brBod=0;

    printf("Unesi broj zadataka\n");
    scanf("%d",&n);
    printf("Unesi koliko Josip zna zadataka\n");
    scanf("%d",&k);
    scanf("%d",&A1);
    scanf("%d",&A2);
    scanf("%d",&A3);
    scanf("%d",&A4);
    scanf("%d",&A5);

    while(k){
        k--;
        scanf("%d",B);

    if(B==A1||B==A2||B==A3||B==A4||B==A5) brBod++;
    }
     brBod=brBod==0?1:brBod;

     printf("Dobio je %d", brBod);


     return 0;

}
