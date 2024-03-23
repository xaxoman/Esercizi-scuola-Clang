#include <stdio.h>

/*
    Dennis Xhafaj 3IC 27/11/2023

    ESERCIZIO: 
    Scrivi una funzione che restituisce il MCD tra due numeri interi (utilizzando l'algoritmo di Euclide).
    Scrivi un programma che permette di semplificare una frazione: chiedere all'utente di inserire una frazione 
    (es.  8/12 leggendo due numeri interi numeratore e dennominatore separatamente) 
    e il programma mostra la frazione semplificata (nell'esempio 2/3) ottenuto dividendo numeratore e denominatore per il loro MCD.
*/

int MCD(int uno, int due) { // Algoritmo di euclide 

    while(due!=0) {

       int resto = uno%due;
        uno = due;
        due = resto;
    }

   int  risultato = uno;
   return risultato;
}

int main(){
    
    int uno,due, risultato, resto;

    printf("Inserisci i due numeri in fila separati da uno spazio: ");
    scanf("%d %d",&uno,&due);
    risultato = MCD(uno,due);
    printf("MCD di %d e %d e' uguale a %d",uno,due,risultato);
    
    return 0;

}

