#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int t;
    int s;
    printf("Unesi godine oca\n");
    printf("Unesi godine sina\n");
    scanf("%d %d", &t,&s);

    int x=t-(2*s);
    printf("Godine oca ce biti duplo vece\n %d",x);

    return 0;
}

