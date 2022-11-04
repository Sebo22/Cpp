#include <stdio.h>
#include <stdlib.h>

int trazi(int x[],int y){

int i;

for (i=0;i<y;i++)
    if(x[i]%3==0) return i;
    return -1;
}
int traziti(int x[],int y, int start){
    int i;

 for (i=start;i<y;i++)
    if(x[i]%5==0) return i;

return -1;

}


int main () {
    int i;
     int A[50];
     int n;


    time_t t;
    srand((unsigned)time (&t));

    printf("koliko elemenata?");
    scanf("%d",&n);

//for koja sprema u A[i] generirane brojeve
for(i=0;i<n;i++)
    A[i]=rand()%21+5;

    for(i=0;i<n;i++)
    printf("%d  ",A[i]);

    printf("\n\n");

    int index=trazi(A,n);
    int index2=traziti(A,n, index);
    for(i=index;i<=index2;i++)
    printf("%d  ",A[i]);

}
