#include <stdio.h>

    void ovisi(int a, int b, int n, int* jeli, float* ab){

        jeli=n>0?a>b?1:a<b?-1:0:n==0?0;
            a>b?-1:a==b?0:1;

            if(n>0){
            if(a>b){
                *jeli=1;
                *ab=a*b;}
            else if(a<b){
                *jeli=-1;
                *ab(float)a/b;}
            else {
                *jeli=0;
                *ab=(float)a/b;
            }}
            else if (n==0){
                *jeli=0;
                *ab=(folat)a/b;
            }
            else{
                if(a<b){
                    *jeli=1;
                    *ab=a*b;
                }
                else if(a>b){
                    *jeli=-1;
                    *ab=(float)a/b;
                }
                else{
                    *jeli=0;
                    *ab=(float)a/b;
                }
            }

    }

int main(){

    int x, y;

    printf("Unesi nasumicni broj: \n");
    scanf("%d %d", &x, &y);








}
