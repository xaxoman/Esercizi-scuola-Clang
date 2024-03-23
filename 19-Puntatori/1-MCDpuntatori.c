#include <stdio.h>

/*
    Dennis Xhafaj 3IC 26/12/2023

    ESERCIZIO:
    Partendo dall'esercizio 19.3SEMPLIFICA
    Scrivi una funzione che restituisce il MCD tra due numeri interi (utilizzando l'algoritmo di Euclide).
    Scrivi una funzione che semplifica una frazione dividendo numeratore e denominatore, passati alla funzione
    per indirizzo, per il loro MCD.
    Scrivi un programma che permette di semplificare una frazione: chiedere all'utente di inserire una frazione 
    (es.  8/12 leggendo due numeri interi numeratore e dennominatore separatamente) e il programma mostra la 
    frazione semplificata (nell'esempio 2/3).
*/



int MCD(int num, int den) { // Algoritmo di euclide 

    while(den!=0) {

       int resto = num%den;
        num = den;
        den = resto;
    }

   int  risultato = num;
   return risultato;
}

int semplificaFrac(int *num, int *den) {

    int mcd = MCD(*num,*den);

    if (mcd != 1) {
        *num /= mcd;
        *den /= mcd;
    }
    
}

int main(){
    
    int num,den, risultato, mcdFrazione;

    printf("Inserisci la frazione (esempio: 8/4 => 2/1): ");
    scanf("%d/%d",&num,&den);
    
     if (den != 0) {

        semplificaFrac(&num, &den);

        printf("La frazione semplificata e': %d/%d\n", num, den);
    } 
    
    else {
     
        printf("Impossibile dividere per zero.\n");
    }
    
    return 0;

}

