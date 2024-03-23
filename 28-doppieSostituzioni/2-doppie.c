#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
    Scrivi una funzione in C che ritorna vero (1) se una stringa contiene almeno una doppia, 
    altrimenti ritorna falso (0). 
\   Quindi scrivi un programma di test per provare la funzione.
*/

const int dim = 30;

int doppie(char parola[]) {

    int conta=0;

    for (int i = 0; i < strlen(parola); i++) {

        if(parola[i]==parola[i+1]) {

           conta++;
        }

    }

    return conta;
    
}

int main(){
    
    char parola[dim];
    int doppioni;

    printf("Inserisci la tua parola: ");
    scanf("%s",parola);
    doppioni = doppie(parola);
    printf("la tua parola contiene %d doppia/e",doppioni);
    return 0;

}

