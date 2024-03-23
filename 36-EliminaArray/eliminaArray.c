#include <stdio.h>
#include <string.h>

/* 
    Dennis Xhafaj 3IC 17/03/2024

    ESERCIZIO: 

    E' dato un array di stringhe contenente i nominativi di 5 studenti che partecipano ad una selezione. 
    In un array parallelo sono memorizzati i punteggi ottenuti nella prova di selezione. 
    Scrivi un programma che, caricati i dati, stampa l'elenco degli studenti con il relativo punteggio 
    (mediante la funzione stampaElenco) , quindi elimina lo studente con il minor punteggio dai due array paralleli 
    (mediante la funzione eliminaPeggiore) e quindi stampa l'elenco aggiornato 
    (sempre mediante la funzione stampaElenco precedente).

*/

#define num_studenti 5

void stampaElenco(char studenti[num_studenti][30], float punteggi[num_studenti], int n) {
    for(int i=0; i<n; i++) {
        printf("%s -> %.2f punti\n",studenti[i],punteggi[i]);
    }
}

void eliminaPeggiore(char studenti[num_studenti][30], float punteggi[num_studenti], int *n) {
    int minIndex = 0;
    for(int i=1; i<*n; i++) {
        if(punteggi[i] < punteggi[minIndex]) {
            minIndex = i;
        }
    }

    for(int i=minIndex; i<*n-1; i++) {
        strcpy(studenti[i],studenti[i+1]);
        punteggi[i] = punteggi[i+1];
    }

    (*n)--;
}

int main(){
    int scelta = 0;
    int n = num_studenti;
    char studenti[num_studenti][30] = {"luca", "mario", "alessio", "pippo", "pluto"};
    float punteggi[num_studenti] = {1, 2.5, 6, 12.9, 0.5};

    while(scelta!=3) {
        printf("MENU\n\n1) Visualizza i nomi e i punteggi relativi\n2) Elimina lo studente con il punteggio piu' basso\n3) Esci\n\n");
        printf("Fai la tua scelta: ");
        scanf("%d",&scelta);

        switch (scelta) {
            case 1:
                stampaElenco(studenti,punteggi,n);
                break;
            case 2:
                eliminaPeggiore(studenti,punteggi,&n);
                break;
            default:
                break;
        }
    }

    return 0;
}