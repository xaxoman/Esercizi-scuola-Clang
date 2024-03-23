#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO:
    Scrivi una funzione in C che ricevuti in ingresso una stringa e due caratteri:
    trasforma la stringa sostituendo nella stringa il secondo carattere al posto del primo 
    (es. se la stringa è RAMONA e i caratteri sono A , E si ottiene la stringa REMONE dove tutte le A sono diventate E). 
    restituisce il numero di caratteri sostituiti nella stringa (es. nel caso precedente 
    restituisce 2 perché sono stati fatte due sostituzioni).
    Scrivi poi un programma di test per provare la funzione: letta una stringa e i due carattere da tastiera, 
    stampa a video la stringa sostituita e il numero di sostituzioni.
*/

const int dim = 30;

void sostituzione(char parola[], char a, char b) {

    int conta = 0;
  
    for(int i = 0; i<strlen(parola); i++) {

        if(parola[i]==a) {
            conta++;
            parola[i] = b;
        }
    }

    printf("la tua nuova parola e' %s e sono state cambiate %d lettere", parola,conta);
}

int main(){
    
    char parola[dim];
    char a,b;

    printf("Inserisci la tua parola: ");
    scanf("%s",parola);

    printf("\nInserisci la lettera da cambiare: ");
    scanf(" %c",&a);
    printf("\nInserisci la lettera con cui cambiare quest'ultima: ");
    scanf(" %c",&b);

    sostituzione(parola, a, b);
    return 0;

}

