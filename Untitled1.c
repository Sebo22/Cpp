#include <stdlib.h>
#include <math.h>
#include <stdio.h>

struct zeko{
            int masa;
            int kolicina_hrane;
            int darezljivost;
            char ime[10];
}ze;
void unos(){
    FILE*filePointer;
	filePointer=fopen("zeko.txt","w");

	printf("Koja je tezina Lepusa?");
	scanf("%d", &ze.masa);
	printf("Kolko pojede hrane?");
	scanf("%d", &ze.kolicina_hrane);
	printf("Kolko je darezljiv Lepus?");
	scanf("%d", &ze.darezljivost);
	printf("Koje je ime Lepusa?");+

	scanf("%s", &ze.ime);

	fprintf(filePointer, "%d, %d, %d, %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime);
	fclose(filePointer);
}

void ispis(){

	FILE*filePointer;
	filePointer=fopen(".txt","r");

	while(fscanf(filePointer, "%d, %d, %d, %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime)==4){
            printf("%d, %d, %d, %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime);
	}
	}

void filter(){
    FILE*filePointer;
	filePointer=fopen(".txt","r");
int i;
	while(fscanf(filePointer, "%d, %d, %d, %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime)==4){
        printf("%d, %d, %d, %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime);
    char odabir[20];
    printf("Izaberi filter masa ili darezljivost");
    scanf("%s", filter());
    if(!strcmp(filter,"masa")){
        for(int i=0; i<; i++){
            if(strcmp(ze[i].masa, filter)==0){
                printf("%d %d %d %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime)
            }
        }
  if(!strcmp(filter,"darezljivost")){
        for(int i=0; i<broj_proizvoda; i++){
            if(strcmp(ze[i].darezljivost, filter)==0){
                printf("%d %d %d %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime)
            }
        }
    }
}
}
}
int main(){


char odabir;
odabir=getch()
do{
    printf("1. Unos \n");
    printf("2. ispis\n");
    printf("3. filter\n");
    printf("4. komb filtera\n");
	printf("5. max, min\n");
    printf("6. exit\n");


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
