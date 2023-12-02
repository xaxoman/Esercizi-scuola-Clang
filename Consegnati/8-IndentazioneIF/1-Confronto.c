#include <stdio.h>
#include <stdbool.h> //Per definire i valori booleani

/*
    Dennis Xhafaj 3IC 7/10/2023

    ESERCIZIO:
    Scrivi un programma in C che dati due numeri interi inseriti dall'utente individua il maggiore, 
    considerando anche la situazione nella quale i due numeri sono uguali.

*/

int main(){
    
    int uno,due;

    printf("Inserisci due numeri interi: ");
    scanf("%d %d",&uno,&due);

    if(uno>due) {

        printf("Il numero più grande e' %d", uno);
    }

    else if(uno==due) {

        printf("I due numero sono uguali");
    }

    else {

        printf("Il numero piu' grande e' %d", due);
    }

    

    return 0;

}

