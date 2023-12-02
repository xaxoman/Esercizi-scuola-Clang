#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO:
    Scrivi un programma in C che calcola e visualizza la media di una serie di numeri inseriti dall’utente. 
    I numeri sono acquisiti uno alla volta e la sequenza termina quando l’utente inserisce un numero negativo.
*/

int main(){
    
    float NumeriIput, media;

    float tot = 0;
    float ContaNumeri = 0;

    while(NumeriIput>0) {

        printf("Inserisci il tuo numero, la sequenza termina con il primo negativo: ");
        scanf("%f",&NumeriIput);

        if(NumeriIput<0) 

        break;

        ContaNumeri = ContaNumeri+1;
        tot = tot+NumeriIput;

    }

    media = tot/ContaNumeri;
    printf("la tua media e' %.2f ",media);  
    return 0;

}

