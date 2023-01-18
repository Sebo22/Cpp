#include <stdio.h>
#include <stdlib.h>

    struct zivotinja
    {
        char kakoSeGlasa[50];
        int bn;
        int visina;
        char spec[20];
    };


    int main(void)
{
       struct zivotinja z=("njiha njiha",4,230,"konj"
                           "uu aa uu aa",2,75,"majmun");


        printf("Unesi podatke o zivotinji:\n");
        printf("Unesi kako se glasa ta zivotinja\n");
        scanf("%s", &z.kakoSeGlasa);
        printf("Unesi koliko nogu ima ta životinja\n");
        scanf("%d", &z.bn);
        printf("Unesi kolika je visina te zivotinje\n");
        scanf("%d", &z.visina);
        printf("Unesi o kojoj se zivotinji govori:\n");
        scanf("%s", &z.spec);


        void bn(z);
        printf("ima %d noge\n", z.bn);

        void Glasanje(z);
        printf("Glasa se %s\n", z.kakoSeGlasa);



}
