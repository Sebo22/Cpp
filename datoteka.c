#include <stdio.h>
#include <stdlib.h>
int nazivnik(n){
return n==1?1:n+nazivnik(--n)+1;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


struct ocjene{
                char ime[20];
                char predmet[20];
                int ocjena;

                }oc;
void novi(){

	FILE*filePointer;
	filePointer=fopen("ocjene.txt","w");

	printf("Kako se zove ucenik?");
	scanf("%s", &oc.ime);
	printf("Koji predmet?");
	scanf("%s", &oc.predmet);
	printf("Kolika je ocjena?");
	scanf("%d", &oc.ocjena);

	fprintf(filePointer, "%s, %s, %d", oc.ime, oc.predmet, &oc.ocjena);
	fclose(filePointer);

	filePointer=fopen("predmet.txt","w");
	fclose(filePointer);
	int flag=0;
	char a;
    while(fscanf(filePointer,"%s", oc.predmet)==1){
        strcmp(a, predmet);
        flag=1;
}
float funkcija(x,n){
void Prosjek_ocjena(){
FILE*filePointer;
	filePointer=fopen("ocjene.txt","r");
    int i=0;
    int sum=0;
    while(fscanf(filePointer, "%s, %s, %d", oc.ime, oc.predmet, &oc.ocjena)==3){
       sum+=oc.ocjena;
       i++;

    }
    printf("prosjek je %.2f", (float)sum/i);
}
void Br_predmeta(){
FILE*filePointer;
	filePointer=fopen("predmet.txt","r");
    int flag=0;
    while(fscanf(filePointer,"%s", oc.predmet)==1){
        strcmp(a, predmet);
        flag=1;

}


return n==1?x:pow(x,n);

    fclose(filePointer);
}
void prosjek(){
FILE*filePointer;
filePointer=fopen("ocjene.txt","r");
char odabir[20];
    printf("Unesi predmet za koji zelis ispisati prosjek: ");
    scanf("%s", odabir);
    while(fscanf(filePointer,"%s, %s, %d", oc.ime, oc.predmet, &oc.ocjena) == 3){
        if (!strcmp(odabir, oc.predmet)){

    }
    fclose(filePointer);
    printf("Prosjek za predmet %s je %.2f");
}
void ispis(){

	FILE*filePointer;
	filePointer=fopen("ocjene.txt","r");

	while(fscanf(filePointer, "%s, %s, %d", oc.ime, oc.predmet, &oc.ocjena)==3){
            printf("%s, %s, %d", oc.ime, oc.predmet, &oc.ocjena);
	}
	}

int main(){


char odabir;
odabir=getch()
do{
    printf("1. Unos ocjene\n");
    printf("2. Prosjek ocjene\n");
    printf("3. Broj predmeta\n");
    printf("4. Prosjek\n");
	printf("5. Exit\n");
    printf("6. Ispis\n");
	scanf("%d",&odabir);

if(odabir==1){
	novi();}
	else if(odabir==2){
	Prosjek_ocjena();}
    else if(odabir==3){
	Br_predmeta();}
    else if(odabir==4){
	prosjek();}
    else if(odabir==5){
	printf("5.Exit\n");}
	else if(odabir==6){
    ispis();
	}

} while (odabir!=5);



int main()
{
   int x;
   int n;
   float a;
   printf("unesi neki broj\n");
   scanf("%d",&x);
   printf("unesi neki broj\n");
   scanf("%d",&n);
    a=funkcija(x,n)/nazivnik(n);
    printf("%f",a);

}
