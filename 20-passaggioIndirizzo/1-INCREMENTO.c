#include <stdio.h>

/*
    Dennis Xhafaj 3IC 11/01/2024

    ESERCIZIO: 
    Scrivi un programma che dichiara una variabile intera e, attraverso una funzione raddoppia, ne ottiene il valore raddoppiato.
    Crea due funzioni per provare la soluzione sia con passaggio per valore sia con passaggio per indirizzo.
*/

int raddoppia(int n) {

    return n*2;
}

void raddoppiaIndirizzo(int *n) {

    *n = (*n)*2 ;
}

int main(){
    
    int numero, doppio, doppioPerIndirizzo;

    printf("Inserisci il numero da raddoppiare: ");
    scanf("%d",&numero);

    doppio = raddoppia(numero);
    printf("Il numero raddoppiato e' %d \n", doppio);

    raddoppiaIndirizzo(&numero);
    printf("Il numero raddoppiato tramite indirizzo e' %d", numero);

    return 0;

}

