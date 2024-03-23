#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 29/01/2024

    ESERCIZIO:
    Scrivere una funzione che riceve una stringa s come parametro e la modifica
    invertendola. Ad esempio, se la stringa fosse "ciao", dopo la modifica dovrebbe essere "oaic".
    Scrivere poi un programma che usa la funzione scritta: l'utente inserisce una stringa e viene mostrata la stringa rovesciata. 
*/
const int dim = 20;

void invertiStringa(char parola[], int lunghezza) {

    for(int i = lunghezza; i!=0 ; i--) { 

        printf("%c",parola[i-1]); // ho aggiunto il -1 altrimento non stampa la prima lettera
    }

}

int main(){
    
    char parola[dim], lunghezzaStringa;

    printf("Inserisci la parola da inveritre: ");
    scanf("%s",parola);
    // calcolo la lunghezza della stringa tramite funzione strlen
    lunghezzaStringa = strlen(parola);
    invertiStringa(parola, lunghezzaStringa);
    return 0;

}

