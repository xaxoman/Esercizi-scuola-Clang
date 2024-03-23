#include <stdio.h>

/*
    Dennis Xhafaj 3IC 2/11/2023

    ESERCIZIO: 
    PRIMO. Scrivi un programma in C che letto un numero intero n determina se esso è primo.
    N.B. Un numero è primo se non ha alcun divisore, escluso 1 e sè stesso.
*/

int main(){
    
    int num,i, primo=0;

    printf("Inserisci un numero intero: ");
    scanf("%d",&num);

    for(i=2; num>i ; i++) {

        if(num%i==0) {

            primo++;
        }
    }

    if(primo==0) {

        printf("Il numero e' primo");
    }

    else {

        printf("Il numero NON e' primo");
    
    }

    return 0;

}

