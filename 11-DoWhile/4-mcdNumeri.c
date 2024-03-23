#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO:
    Scrivi un programma in C che calcoda il M.C.D. (massimo comune divisore) tra due numeri interi utilizzando 
    l'algoritmo di Euclide (vedi flow chart allegato).

*/

int main(){
    
    int uno,due, risultato, resto;

    printf("Inserisci i due numeri in fila separati da uno spazio: ");
    scanf("%d %d",&uno,&due);

    while(due!=0) {

        resto = uno%due;
        uno = due;
        due = resto;
    }

    risultato = uno;
    printf("%d", risultato);

    return 0;

}

