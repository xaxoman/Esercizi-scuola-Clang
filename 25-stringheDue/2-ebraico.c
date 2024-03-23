#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
    L'antico ebraico era una lingua che veniva scritta senza vocali. Scrivi un programma che data una parola (in italiano) 
    crea una nuova stringa che contiene solo le consonanti e la visualizza (ad esempio: TAVOLO diventa TVL).
    Suggerimento: puoi provare a usare la funzione strchr della libreria string.h
*/

const int dim = 30;

int vocale(char car) {

    char Vocali[] = {'a','e','i','o','u'};

    for(int j = 0; j<5; j++) {

            if(car==Vocali[j]) {

                return 1;
            }
       }
    return 0;
}

void ebraico(char parola[], char cst[], int lun) {

    int j=0;
    for(int i = 0; i<lun ; i++) {

        if(!vocale(parola[i])) { // chiama funzione che verifica se nella parola sono presenti vocali per ogni carattere 

            cst[j] = parola[i];
            j++;
        }

    }

    cst[j] = 0; // mette il "tappo" che termina la stringa 
}



int main(){
    char parolaIta[dim], lun;
    char consonanti[dim];

    printf("Inserisci la tua parola in italiano: ");
    scanf("%s",parolaIta);
    lun = strlen(parolaIta);
    ebraico(parolaIta, consonanti,lun);
    printf("%s", consonanti);

    return 0;

}

