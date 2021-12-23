#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Unesi a, b, c i d\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=b==d?a+c:c*b+a*d;
    int y=b==d?d:d*b;
    printf("Rezultat zbrajanja je: %d / %d\n",x,y);
    printf("Rezultat zbrajanja je: %.2f\n",(float)x/y);


    return 0;
}
