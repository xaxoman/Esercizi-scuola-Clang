#include <stdio.h>

/*
    Dennis Xhafaj 3IC 18/11/2023

    ESERCIZIO:
    Scrivere una funzione che riceva in ingresso un numero intero e restituisca 1 se il numero è primo altrimenti 0. 
    Scrivere una seconda funzione che stampa sullo schermo tutti i divisori di un numero intero ricevuto come parametro.
    Scrivere successivamente un programma che chiede all'utente l'inserimento di un numero intero e visualizza se esso è 
    primo o oppure no, mostrando nel secondo caso i divisori del  numero. 
*/

 int InteroZeroUno(int n) {

    int primo = 0;

    for(int i=2; i<=n ; i++) {

        if(n%i==0) {

            primo++;
        }
    }   

    if(primo==0) {

        printf("1 primo\n"); //primo
        return 1;
    }

    else {

        printf("0 non e' primo\n"); // non primo
        return 0;
    
    }
} 

void divisori(int n) {  // attento al VOID

    for(int i = 1 ; i<n ; i++) {

        if (n%i==0){

            printf("%d\n", i);
        }
    }
}

int main(){
    
    int n;

    printf("Inserisci un numero intero: ");
    scanf("%d",&n);

    int risultato = InteroZeroUno(n);

    if(risultato) {

       printf("Il numero e' primo");
    }

    else {

        divisori(n);

    }

    return 0;

}

