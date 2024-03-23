#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 29/01/2024

    ESERCIZIO: 
    Scrivi un programma che chiede all'utente di inserire una parola e poi chiedere di inserire un carattere. 
    Il programma scrive quante volte compare quel carattere nella parola.

    Suggerimento: utilizza questo codice e sviluppa la funzione cerca che restituisce il numero di occorrenze 
    del caratterenella parola. E' simile all'esercizio di ripasso N.25.2 usando questa volta un array di caratteri 
    anziché un array di numeri. Puoi inoltre sapere la lunghezza effettiva del ciclo sfruttando la funzione strlen().
*/

const int dim = 20;

int ContaLettere(char parola[], char carattere) {

    int contate=0;

    for(int i = 0; i<dim; i++) {

        if(carattere==parola[i]) {

            contate++;
        }
    }

    return contate;
}

int main(){
    
    char parola[dim], carattere;
    int LettereContate;

    printf("Inserisci la parola: ");
    scanf("%s",parola);
    printf("Ora inserisci il carattere da cercare: ");
    scanf(" %c",&carattere);
    LettereContate = ContaLettere(parola, carattere);
    printf("La lettera %c e' presente %d volte all'interno della parola %s",carattere,LettereContate,parola);
    return 0;

}

