#include <stdio.h>

/*
    Dennis Xhafaj 3IC 4/11/2023

    ESERCIZIO:
    ALBERO 
    Scrivi un programma in C che visualizza una piramide di altezza data. Esempio: l'utente inserisce 5 e il programma 
    visualizza 5 righe (la prima con un asterisco, la seconda con due asterischi ecc..):

    *
    **
    ***
    ****
    *****
*/

int main(){

    int altezza;

    printf("Inserisci quante righe vuoi: ");
    scanf("%d",&altezza);

    for(int riga = 1; riga<=altezza; riga++) {

        for (int asterischi = 1 ; asterischi<= riga ; asterischi++) {

                printf("*");
        }
        printf("\n");
    }

    return 0;

}

