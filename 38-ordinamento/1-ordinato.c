#include <stdio.h>

/*
    Dennis Xhafaj 3IC 23/03/2024

    ESERCIZIO:
    1. Dato un array di 10 elementi interi, ordinare l'array in modo decrescente e stampare il relativo array ordinato.
*/

#define size 10

void ordinaDecrescente(int numeri[]) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<size-1; y++) {  

            if(numeri[y] < numeri[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = numeri[y];
                numeri[y] = numeri[y+1];
                numeri[y+1] = temp;
                scambi = 1; 
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1
}

void stampaDecrescente(int numeri[]) {

    for(int i=0; i<size; i++) {

        printf("%d ", numeri[i]);
    }
}

int main(){
    
    int numeri[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ordinaDecrescente(numeri);
    stampaDecrescente(numeri);
    return 0;

}

