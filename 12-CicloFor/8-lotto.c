#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 4/11/2023

    ESERCIZIO:
    Scrivere un programma in C che stima la probabilità di indovinare un numero al lotto simulando 100 estrazioni. 

    Suggerimento. Chiedere un numero all’utente, poi per ogni estrazione: generare 5 numeri compresi tra 1 e 90 inclusi 
    contando se è uscito il numero inserito dall’utente. Alla fine calcolare la probabilità come rapporto tra le uscite e 
    il totale delle estrazioni.
*/

int main(){

    int numeroUtente, numeroCasuale, indovinati=0;

    printf("Inserisci il tuo numero: ");
    scanf("%d",&numeroUtente);

    srand(time(0));
    
    for(int i = 0 ; i<100 ; i++) {

        for (int b = 0 ; b<5 ; b++) {

            numeroCasuale = rand()%90+1;
            printf("%2d ",numeroCasuale);

                if (numeroCasuale==numeroUtente) {

                indovinati++;
                      
            }
   
        }

         printf("\n");
    }

    printf("Su 100 tentativi ne ha indovinati %d", indovinati);

    return 0;

}

