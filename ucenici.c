#include <stdlib.h>
#include <stdio.h>

struct ucenici{


    int godiste;
    int bodovi;
    char oib[20];
    char prezime[20];
};

    int main(void){

        int sum=0;
        int i;
        struct ucenici uc[10]={
        2041, 18, "98318724557", "kavsic",
        1985, 15, "98318724557", "kole",
        1952, 12, "98318724557", "dule",
        1523, 3, "98318724557", "savic",
        2841, 15, "98318724557", "dado",
        1085, 17, "98318724557", "prso",
        1552, 9, "98318724557", "markovc",
        1095, 2, "98318724557", "skckani",
        1956, 7, "98318724557", "sins",
        2006, 15, "98318724557", "krpa"};

    for(i=0;i<10;i++)
        sum+=uc[i].bodovi;
int avg =sum/10;
for(i=0;i<10;i++){

    printf("%d\t %s\n", uc[i].bodovi,uc[i].prezime);
}
 for(i=0;i<10;i++)
 if( uc[i].bodovi>avg){
    printf("\n%d",uc[i].bodovi);
 }










}




