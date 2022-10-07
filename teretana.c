#include <stdio.h>

int dominik (int x, int y, int z){
if(z<x)
    return printf("0");
if(z>=(x+y))
    return printf("1");
else
return printf("1");
}

int main() {

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("Unesi mjesecnu cijenu teretane");
    scanf("%d", &x);
    printf("Unesi cijenu osobnog trenera");
    scanf("%d", &y);
    printf("Unesi ukupni budzet Dominika");
    scanf("%d", &z);

    dominik (x,y,z);
}

