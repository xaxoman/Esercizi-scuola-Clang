#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 14/10/2023

    ESERCIZIO: 
    Scrivi un programma in C che simula una combinazione di simboli di una slot machine estraendo 3 numeri casuali tra 0 e 9 
    e li visualizza sullo schermo insieme ad un messaggio di vincita o perdita così definito:
    
    - tre simboli uguali (es. 444) "hai vinto 10 euro"
    - due simboli uguali (es. 272) "hai vinto 1 euro"
    - altrimenti "hai perso 1 euro"
*/

int main(){
    
    int uno,due,tre;

    srand(time(0)); 

    uno = rand()%9; 
    due = rand()%9; 
    tre = rand()%9;

    //caso 10 euro
    if((uno==due)&&(due==tre)) {

        printf("%d %d %d CHE COLPO DI FORTUNATA! hai vinto 10 euro", uno,due,tre);

    }

    //caso 1 euro
    else if((uno==due) || (due==tre) || (uno == tre)) {

         printf("%d %d %d meglio che niente! hai vinto 1 euro", uno,due,tre);


    }

    // caso perdita

    else {

         printf("%d %d %d sono tutti diversi, hai perso 1 euro", uno,due,tre);

    }
    

    return 0;

}

