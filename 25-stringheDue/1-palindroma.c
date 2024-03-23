#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
    Leggere una stringa dall'utente e verificare se essa è palindroma (ovvero se letta al contrario non cambia). 
    Il controllo deve essere fatto da una funzione!
*/

const int dim = 30;

void palindroma(char parola[], int lunghezza) {

   int conta = 0;
   for(int i = 0; i<lunghezza; i++) {

        if(parola[i] == parola[lunghezza-i-1]) {

            conta++;
        }

        else {

            printf("la parola %s non e' palindroma",parola);
            break;
        }
    }

    if(conta==lunghezza) {

        printf("la parola %s e' palindroma",parola);
    }
}

int main(){
    
    char parola[dim]; // attento a come dichiari gli array!
    int lunghezza;

    printf("Inserisci una parola palindroma: ");
    scanf("%s",parola);
    
    lunghezza = strlen(parola);

    palindroma(parola, lunghezza);

    return 0;

}

