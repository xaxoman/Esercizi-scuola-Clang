#include <stdio.h>

/*
    Dennis Xhafaj 3IC 11/01/2024

    ESERCIZIO: 
    Scrivi una funzione che calcola e restituisce la somma e la differenza tra due numeri passati come argomento. 
    Scrivi poi un programma di prova. In questo caso è necessario usare il passaggio per indirizzo per ottenere 
    due valori "in output".
*/

int sommaDifferenza(int n1, int n2) {

    return n1+n2;
    return n1-n2;
}

void sommaDifferenzaIndirizzo(int *n1, int *n2) {

    int somma,differenza;

    somma = *n1 + *n2;
    differenza = *n1 - * n2;
    printf("SOMMA: %d \n\nDIFFERENZA: %d",somma,differenza);
}

int main() {
    
    int n1,n2, somma, differenza;

    printf("Inserisci i due numeri: ");
    scanf("%d %d",&n1,&n2);
    sommaDifferenzaIndirizzo(&n1,&n2);
    


    return 0;

}

