#include <stdio.h>

/*
    Dennis Xhafaj 3IC 10/11/2023

    ESERCIZIO: 
    Si vuole realizzare un algoritmo che consenta, dati in ingresso due numeri interi, 
    di stampare tutti i numeri compresi tra il minore e il maggiore inclusi.
*/

int main(){
    
    int primo,secondo, maggiore, minore;

    printf("inserisci due numeri interi: ");
    scanf("%d %d",&primo,&secondo);

    if(primo>secondo) {

        maggiore = primo;
        minore = secondo;
        
    }

    else if (secondo>primo) {

        maggiore = secondo;
        minore = primo;
    }

    for(int i = minore; i<=maggiore ; i++) {

        if(primo==secondo) {
            printf("I due numeri sono uguali");
            break;
        }

        printf("%d \n",i);
    }

    return 0;

}

