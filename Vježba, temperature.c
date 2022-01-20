#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    float y;

    printf("temperatura ujutro\n");
    scanf("%f",&x);
    printf("temperatura poslijepodne\n");
    scanf("%f",&y);
    float rt=abs(x-y);
    printf(" razlika tepmerature je %2.f\n", rt);




    return 0;
}
