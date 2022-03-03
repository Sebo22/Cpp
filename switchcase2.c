#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("----------------------------------\n");
    printf ("|                                 |\n");
    printf ("|        1. kvadrat               |\n");
    printf ("|        2. pravokutnik           |\n");
    printf ("|        3. pravokutni trokut     |\n");
    printf ("|                                 |\n");
    printf ("----------------------------------\n");

    float a;
    float b;
    float P;
    int opcija;

    printf ("Izaberi opciju: \n");
    scanf("%d", &opcija);




    switch(opcija)
    {
    case 1:
        printf ("Unesi broj a: \n");
        scanf("%f",&a);

        opcija = a*a;
        printf ("Povrsina kvadrata je %.2f", opcija);
        break;
    case 2:
        printf ("Unesi broj a: \n");
        scanf ("%f",&a);
        printf ("Unesi broj b: \n");
        scanf ("%f",&b);
        printf ("Povrsina pravokutnika je %.2f\n", (float) a*b);
        break;
    case 3:
        printf ("Unesi stranicu pravokutnog trokuta: \n");
        scanf("%f %f",&a,&b);
        printf ("Povrsina pravokutnog trokuta je %.2f", (float) (a*b)/2);
        break;
    default:
        printf("Krivo");
    }

    return 0;



}
