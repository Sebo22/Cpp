#include<stdio.h>
#include<stdlib.h>

struct nosorog
{
    int masa;
    int max_brzina;
    int sila_udarca;
    char boja[20];
    char ime[20];
};

int main(void)
{
    struct nosorog p1 = {240,25, 500,"zelena","Robi"};
    struct nosorog p2 = {260,21,510,"sivi","Rogac"};
    struct nosorog p3;

    printf("Unesi masu nosoroga u kg\n");
    scanf("%d", &p3.masa);
    printf("Unesi max brzinu u km/h\n");
    scanf("%d", &p3.max_brzina);
    printf("Unesi silu udarca nosoroga\n");
    scanf("%d", &p3.sila_udarca);
    printf("Unesi boju nosoroga\n");
    scanf("%s", p3.boja);
    printf("Unesi ime nosoroga\n");
    scanf("%s", p3.ime);

    if(p1.sila_udarca>p2.sila_udarca&&p1.sila_udarca>p3.sila_udarca)
    printf("najjaci je 1. nosorog %s, %s boje",p1.ime,p1.boja);

    else if(p2.sila_udarca>p1.sila_udarca&&p2.sila_udarca>p3.sila_udarca)
    printf("najjaci je 2. nosorog %s, %s boje",p2.ime,p2.boja);

     else if(p3.sila_udarca>p1.sila_udarca&&p3.sila_udarca>p2.sila_udarca)
    printf("najjaci je 3. nosorog %s, %s boje",p3.ime,p3.boja);

    else if(p1.masa>p2.masa&&p1.masa>p3.masa)
    printf("najjaci je 1. nosorog %s, %s boje",p1.ime,p1.boja);

     else if(p2.masa>p1.masa&&p2.masa>p3.masa)
    printf("najjaci je 2. nosorog %s, %s boje",p2.ime,p3.boja);

     else if(p3.masa>p1.masa&&p3.masa>p2.masa)
    printf("najjaci je 3. nosorog %s, %s boje",p3.ime,p3.boja);

     else if(p1.max_brzina>p2.max_brzina&&p1.max_brzina>p3.max_brzina)
    printf("najjaci je 1. nosorog %s, %s boje",p1.ime,p1.boja);

    else if(p2.max_brzina>p1.max_brzina&&p2.max_brzina>p3.max_brzina)
    printf("najjaci je 2. nosorog %s, %s boje",p2.ime,p2.boja);

    else if(p3.max_brzina>p1.max_brzina&&p3.max_brzina>p2.max_brzina)
    printf("najjaci je 3. nosorog %s, %s boje",p3.ime,p3.boja);
}
