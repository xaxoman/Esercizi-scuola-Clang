#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 19/10/2023

    ESERCIZIO:
    Scrivi un programma in C che risolve il seguente problema.
    Dato il numero N di individui di una popolazione iniziale di batteri e la percentuale di riproduzione giornaliera, 
    calcolare e mostrare quanti giorni sono necessari affinché la popolazione raddoppi rispetto a quella iniziale.
*/

int main(){
    
    int individui,obbiettivo,giorni,riprodPerc;

    giorni = 0;

    printf("Inserisci il numero di individui dei batteri: \n");
    scanf("%d",&individui);

    obbiettivo = individui*2;

    printf("Inserisci la percentuale di riproduzione giornaliera dei batteri: ");
    scanf("%d",&riprodPerc);


    while(obbiettivo>=individui) {
      
      individui = individui+((individui*riprodPerc)/100);
      giorni = giorni+1;
    }

    printf("La popolazione e' raddoppiata in %d giorni", giorni);



    return 0;

}

