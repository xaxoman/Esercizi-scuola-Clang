#include <stdio.h>

/*
    Dennis Xhafaj 3IC  21/12/2023

    ESERCIZIO: 
    Scrivere una funzione che riceva in ingresso un numero double corrispondente al prezzo iniziale di un articolo e un 
    numero intero s rappresentante il valore percentuale di sconto (cioè, se ad esempio s = 20, significa che all'articolo 
    si applica lo sconto del 20%) e restituisca il prezzo scontato. Scrivi poi un main per provare la funzione 
    (chiede all'utente di inserire il prezzo pieno del prodotto e mostra il valore del prezzo scontato restituito dalla funzione).

*/

double  ArticoliScontati(double PrezzoIniziale) {

    const float SCONTO = 0.2;

    return PrezzoIniziale-(PrezzoIniziale*SCONTO);
}

int main(){
    
    double PrezzoIniziale, PrezzoScontato;

    printf("Inserisci il prezzo del tuo articolo: ");
    scanf("%lf",&PrezzoIniziale);

    PrezzoScontato = ArticoliScontati(PrezzoIniziale);
    printf("Il tuo articolo scontato e' ora du %.2lf eur ",PrezzoScontato);

    return 0;

}

