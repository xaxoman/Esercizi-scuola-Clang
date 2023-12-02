#include <stdio.h>

/*
    Dennis Xhafaj 3IC 12/10/2023

    ESERCIZIO: 
    Allo stadio il costo del biglietto è gratis fino a 10 anni e sopra i 65, 
    costa 5 euro fino a 18 anni e 10 euro per tutti gli altri: scrivi un programma 
    che legge un numero intero indicante l’età dello spettatore e visualizza l’importo che deve pagare.
*/

int main(){
    
    int AnniSpettatore, cost;
    
    const int costoMinori =  5; 
    const int costoMaggiori = 10;

    printf("Scrivi la tua eta': ");
    scanf("%d",&AnniSpettatore);

    if((AnniSpettatore<=10) || (AnniSpettatore>65)) {

        printf("Il biglietto e' gratis per i bambini e gli anziani");

    }

    else {

        if((AnniSpettatore<=18)) {

            printf("Devi pagare %d euro", costoMinori);

        }

        else {

            printf("Devi pagare %d euro", costoMaggiori);
        }
    }

    return 0;


}

