#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 31/03/2024

    ESERCIZIO: 
    Supponiamo di lavorare per una società di spedizioni che gestisce un grande magazzino. 
    Ogni giorno, migliaia di pacchi vengono consegnati al magazzino e devono essere catalogati 
    e posizionati negli scaffali per la successiva spedizione.
    Il sistema di tracciamento dei pacchi utilizza un array per memorizzare i codici dei pacchi 
    e la loro collocazione nell'area di stoccaggio. Ogni volta che un pacco viene consegnato, 
    il suo codice viene aggiunto all'array insieme alla sua collocazione.
    Ora, supponiamo che tu sia responsabile della creazione di un sistema di ricerca che permetta 
    agli addetti di trovare rapidamente un pacco nel magazzino quando viene richiesto per la spedizione.
   
    Problema:
    Scrivi un programma che, dato un codice di pacco, trovi la sua collocazione nell'array di 
    tracciamento dei pacchi. Se il pacco non è presente, il programma deve restituire un messaggio 
    di "Pacco non trovato".

*/

#define MAX_PACCHI 100 // Massimo numero di pacchi gestiti

// Funzione per trovare la collocazione di un pacco dato il suo codice
void cercaPosizPacco(char codici[][20], char posizione[][50], int numPacchi, char codice[]) {
    bool trovato = false;
    int i;
    
    for (i = 0; i < numPacchi; i++) {
        if (strcmp(codici[i], codice) == 0) {
            printf("Il pacco con il codice %s si trova in: %s\n", codice, posizione[i]);
            trovato = true;
            break;
        }
    }
    if (!trovato) {
        printf("Pacco non trovato\n");
    }
}

int main() {
    char codici[MAX_PACCHI][20];
    char collocazioni[MAX_PACCHI][50];
    int numPacchi = 0;

    // Simulazione di pacchi presenti nel magazzino
    strcpy(codici[0], "ABC123");
    strcpy(collocazioni[0], "Scaffale A, Ripiano 1");
    numPacchi++;

    strcpy(codici[1], "DEF456");
    strcpy(collocazioni[1], "Scaffale B, Ripiano 2");
    numPacchi++;

    strcpy(codici[2], "GHI789");
    strcpy(collocazioni[2], "Scaffale C, Ripiano 3");
    numPacchi++;

    // Richiesta del codice del pacco da cercare
    char codiceCercato[20];
    printf("Inserisci il codice del pacco da cercare: ");
    scanf("%s", codiceCercato);

    // Ricerca della collocazione del pacco
    cercaPosizPacco(codici, collocazioni, numPacchi, codiceCercato);

    return 0;
}

