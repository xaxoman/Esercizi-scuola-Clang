#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 2/11/2023

    ESERCIZIO: 
    PROBABILITA'. Scrivere un programma in C che simula il lancio di un dado a sei facce per un numero di volte specificato dall’utente, 
    mostra i risultati e alla fine calcola la percentuale di quante volte è uscito il 6.

    Es. inserendo 10 stampa
    5 6 2 3 1 6 3 4 1 2
    il 6 è uscito 2 volte su 10 (20%)
*/

int main(){
    
    int lanci, facceRand, i, sei=0;

    printf("Quanto volte vuoi defenestrare il dado: ");
    scanf("%d",&lanci);

     srand(time(0)); 

    for(i=0; i<lanci; i++) {

        facceRand = rand()%6+1;
        printf("%d ",facceRand);

        if(facceRand==6) {

            sei++;
        }
    }

   int perc = (sei*6)/100;
    printf("\nIl 6 e' uscito %d volte il %d %%", sei, perc);

    return 0;

}

