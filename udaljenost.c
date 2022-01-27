#include <stdio.h>
#include <math.h>
int main()

{
    int brStup, udaljSt,debStup;

    printf("znas sta treba\n");
    scanf("%d %d %d",&brStup,&udaljSt,&debStup);

    udaljSt*=100;
    int udalj=brStup==1?0:(brStup-1)*udaljSt+(brStup-2)*debStup;

    printf("udaljenost je %d",udalj);

    return 0;

}
