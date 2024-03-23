#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 29/01/2024

    ESERCIZIO: 
    Utilizzando la funzione dell'esercizio precedente, scrivere una funzione che riceve come parametro 
    una stringa s e stampa la frequenza in s di ciascun carattere dalla 'a' alla 'z'.
    Scrivere quindi un programma che legge una stringa dall'utente e stampa la frequenza in s di ciascun
    carattere dalla 'a' alla 'z'.

    ciao 
    a -> 1    b -> 0    c -> 1    d -> 0 ......
*/

const int dim = 20;

int ContaLettere(char parola[], char carattere) {

    int LetteraIndex;

    for(char i = 'a'; i<'z' ; i++) {

         int conta=0; 
         LetteraIndex = parola[i];

    }
}

int main(){
    
    char stringa[dim], frequenza;

    printf("Inserisci la tua parola: ");
    scanf("%s",stringa);
    frequenza = ContaLettere();
  
    return 0;

}

