#include <stdio.h>

#include <stdlib.h>

#include <math.h>

/*
    Dennis Xhafaj 3IC 5/10/2023

    ESERCIZIO:
    Il programma legge due numeri interi inseriti dall’utente 
    e controlla se il uno è multiplo dell'altro comunicandolo con un messaggio opportuno.
*/


int main() {

    float base, ris;
    int exp;

    printf("Fornisci il valore della base: ");
    scanf("%f",&base);

    printf("Ora fornisci il valore dell'esponente: ");
    scanf("%d", &exp);

    ris = pow(base,exp);
    printf("Il risultato dell'elevamento a potenza e': %f",ris);
    system("PAUSE");
}
