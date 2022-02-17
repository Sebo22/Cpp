#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main()

{

    float cijena;
    float popust;
    float clj;

    printf("Unesi pocetnu cijenu cokoladica\n", cijena);
    scanf(" %f", &cijena);

    printf("Unesi postotak popusta\n", popust);
    scanf("%f",&popust);

    printf ("Unesi cijenu ljetovanja", clj);
    scanf("%f", &clj);

    printf("Treba kupiti cokoladica: %.0f\n", clj/(cijena-cijena*(popust/100)));


    return 0;




}
