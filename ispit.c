#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct pas{
      int masa;
      int brzina;
      int kolicina_hrane;
      char ime[20];
}ps;


void unos(){

	FILE*filePointer;
	filePointer=fopen("pas.txt","a");


    printf("Kolika je masa kera");
    scanf("%d", &ps.masa);
    printf("Kolko brzo moze trcat po mogucnosti u km na h");
    scanf("%d", &ps.brzina);
    printf("Kolko zdere na dan u kg");
    scanf("%d", &ps.kolicina_hrane);
    printf("Na sta se odaziva");
    scanf("%s", ps.ime);

	fprintf(filePointer, "%d  %d  %d  %s\n", ps.masa, ps.kolicina_hrane, ps.kolicina_hrane, ps.ime);
	fclose(filePointer);


}
void ispis(){
    FILE*filePointer;
	filePointer=fopen("pas.txt","r");

 while(fscanf(filePointer,"%d %d %d %s", &ps.masa, &ps.brzina, &ps.kolicina_hrane, ps.ime)==4)
        printf("%d %d %d %s\n\n", ps.masa, ps.brzina, ps.kolicina_hrane, ps.ime);

   fclose(filePointer);
}


int main()
{

    char odabir;


do{

        printf("1. Unos \n");
        printf("2.  \n");
        printf("3.  \n");
        printf("4.  \n");
        printf("5. Exit \n");
        printf("6. Ispis\n");

        odabir=getch();

        switch (odabir){
            case '1': unos();
            break;
            case '6': ispis();
            break;
            }

}while (odabir!='5');


   return 0;

}
