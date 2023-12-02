#include <stdio.h>

/*
    Dennis Xhafaj 3IC 2/11/2023

    ESERCIZIO:
    TUTTI PRIMI. Scrivi un programma in C che stampa tutti i numeri primi compresi tra 2 e n (n è inserito dall'utente).
    N.B. Puoi partire dal codice dell'esercizio precedente.
*/

int main(){
    
    int num,i;

    printf("inserisci un numero intero: ");
    scanf("%d",&num);

    

    for(i=2; num>=i ;i++) {

        if(num%i==0) {

            printf("no\n");
             
        }

        else {

            printf("%d", i);
        }
    }

    return 0;

}

