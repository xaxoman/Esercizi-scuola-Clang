#include <stdio.h>

/*
    Dennis Xhafaj 3IC 16/12/2023

    ESERCIZIO: 
    Scrivere una funzione che ricevuti due numeri in ingresso restituisca il numero maggiore.
    Realizzare un programma che utilizzi tale funzione.
*/

int Maggiore(int n, int n2) {
    
    int maggiore;

    if(n>n2) {

        maggiore = n;
        return maggiore;
    } 

    else if (n2==n) {
        printf("sono uguali");
        
    }

    else {

        maggiore = n2;
        return maggiore;
    }

}

int main(){
    
    int primo, secondo, maggiore;

    printf("Inserisci due numeri: ");
    scanf("%d %d",&primo,&secondo);

    maggiore = Maggiore(secondo,primo);
    printf("%d",maggiore);

   

}

