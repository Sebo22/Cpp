#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int F1;
    int F2;
    printf("Unesi F1 i F2\n");
    scanf("%d %d",&F1,&F2);

    printf("Kada sile djeluju u istom smjeru: %d N\n", F1+F2);
    printf("Kada sile djeluju u različitim smjerovima: %d N\n", F2-F1);
    printf("Kada su sile pod kutom od 90 stupnjeva: %.0F N\n", sqrt(F2*F2 + F1*F1) );

    return 0;
}
