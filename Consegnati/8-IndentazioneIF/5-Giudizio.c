#include <stdio.h>

/*
    Dennis Xhafaj 3IC 12/10/2023

    ESERCIZIO:
    Scrivere un programma che legge un voto e dice se è sufficiente o meno;  se non è insufficiente 
    distingue tra gravemente insufficiente (minore o uguale a 4) o insufficiente ovvero compreso tra 4 (escluso) e 6 (escluso).
*/

int main(){
    
    float voto;

    printf("Inserisci il tuo voto: ");
    scanf("%f",&voto);

    if(voto < 6) {

        if(voto<=4) {

             printf("Il tuo voto e' gravemente insuficente");
        }

        else {

            printf("Il tuo voto e' insuficente");
        }   

    }

    else {

        printf("Il tuo voto e' sufficente!");

    }
    
    return 0;

}

