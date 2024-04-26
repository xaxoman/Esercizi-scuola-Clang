#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/04/2024

    ESERCIZIO: 
    Un ambulatorio dentistico utilizza un array di strutture per memorizzare tutte le prenotazioni effettuate per 
    il mese di Giugno. 
    Le prenotazioni hanno la seguente struttura:
        • cognome: stringa di 20 caratteri
        • giorno: intero da 1 a 30
    Si scriva un programma che stampi quali giorni sono liberi.

*/

struct prenotazione{
    char cognome[20];
    int giorno;
};

void GiorniLiberi(struct prenotazione mese[], int num_prenotazioni){

    int i, j;
    int giorniOccupati[30] = {0}; // Array to keep track of occupied days

    for (i = 0; i < num_prenotazioni; i++) {
        // se un giorno è occupato il suo valore verra sostituito con 1 in modo da rendere più facile l'individuazione di quelli liberi
        giorniOccupati[mese[i].giorno - 1] = 1; // etichetta l'indice del giorno occupato con il valore 1
    }

    for (j = 0; j < 30; j++) {
        if (giorniOccupati[j] == 0) {
            printf("Il giorno %d e' libero\n", j + 1); // se l'indice è pari a 1 allora è occupato altrimenti se uguale a 0 è libero
        }
    }
     
   
   
    
}

int main(){
    
    struct prenotazione giugno[] = {
        {"Astolfi", 27},
        {"Bianchi", 3},
        {"Carli", 15},
        {"Conti", 26},
        {"Diaz", 2},
        {"Ferro", 22},
        {"Finotti", 21},
        {"Marangoni", 13},
        {"Montale", 18},
        {"Nardo", 1},
        {"Natale", 30},
        {"Papi", 28},
        {"Pasquali", 4},
        {"Ranieri", 10},
        {"Salvi", 20},
        {"Tommasi", 7},
        {"Verdi", 25},
        {"Zanetti", 17},
        {"Zucchi", 14}
    };

    int num_prenotazioni = sizeof(giugno) / sizeof(struct prenotazione);
    GiorniLiberi(giugno, num_prenotazioni);


    return 0;

}

