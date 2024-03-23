#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 26/01/2024

    ESERCIZIO: 
*/

const int dim = 200;


void contaBingo(int array[]) {

    int TempIndex;

    for(int i = 0; i<dim ; i++) {
        // resetto la variabile conta ogni volta che un numero finisce 
       //  la sua ricerca in modo tale da non sommare i valori di conta precedenti
       int conta=0; 
       TempIndex = array[i];

       for(int j = 0 ; j<dim; j++) {

            if(TempIndex==array[j]) {

                conta++;
            }

       }
       printf("Il numero %d e' uscito %d volte\n", TempIndex, conta);
    }

}

void casualeBingo(int array[]) {

    int numRandom;
    srand(time(0));

    for(int i = 0; i<dim; i++) {

       numRandom = rand()%90+1;

       array[i] = numRandom;
       printf("Numero estratto (%d) -> %d \n", i+1,array[i]);
    }
}

int main(){
    
    int NumeriBingo[dim], NumEstratti;
    // genera i 200 numeri
    casualeBingo(NumeriBingo);
    printf("-------------------------------------------------------\n"); // pulizia 
    // conta quante volte si ripetono
    contaBingo(NumeriBingo);
    return 0;

}

