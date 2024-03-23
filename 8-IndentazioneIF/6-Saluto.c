#include <stdio.h>

/*
    Dennis Xhafaj 3IC 12/10/2023

    ESERCIZIO: 
    Scrivi un programma che legge un numero che indica la nazionalità di una persona (0 = italiano, 1 = inglese, 2 = francese) 
    e gli comunica un saluto nella sua lingua.
*/

int main(){
    
    int nazione;
   
    printf("\n italia -> 1 \n albania -> 2 \n inghilterra -> 3 \n Germania -> 4\n Francia -> 5\n Spagna -> 6\n Giappone -> 7\nInserisci il numero della tua nazione: ");
    scanf("%d",&nazione);

    switch (nazione) {

        case 1 :
            printf("Ciao!");
            break;

        case 2 :
            printf("Mirdita!");
            break;

        case 3 :
            printf("Hello!");
            break;

        case 4 :
            printf("Hallo!");
            break;

        case 5 :
            printf("Salut");
            break;

        case 6 :
            printf("Hola!");
            break;

        case 7 :
            printf("Konichiwa");
            break;

        
    }

    return 0;

}

