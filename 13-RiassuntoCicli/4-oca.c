#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 10/11/2023

    ESERCIZIO: 
    Fare un programma per simulare il gioco dell’oca per due giocatori,
    a turno ogni giocatore muove la propria pedina di tante caselle quanto la somma del lancio di due dadi a sei facce; 
    nel caso in cui sui due dadi vengono due valori uguali, quello è un lancio fortunato perché dopo aver mosso, 
    tocca nuovamente a quel giocatore, se un giocatore è molto fortunato può fare anche più lanci fortunati consecutivi. 
    Vince il primo giocatore che arriva alla casella 100.
*/

int main() {
    
    srand(time(0));

    int giocatore1 = 0, giocatore2 = 0, dado1, dado2;

    while (1) {
        // Giocatore 1
        printf("\nTurno del Giocatore 1\nPremi invio per lanciare i dadi.");
        getchar(); // Aspetta che l'utente prema invio
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        printf("Hai ottenuto %d e %d\n", dado1, dado2);

        giocatore1 += dado1 + dado2;

        if (dado1 == dado2) {
            printf("Lancio fortunato! Giocatore 1 tira ancora.");
            dado1 = rand() % 6 + 1;
            dado2 = rand() % 6 + 1;
            printf("Hai ottenuto %d e %d\n", dado1, dado2);
            giocatore1 += dado1 + dado2;
        }

        printf("Il Giocatore 1 e' ora alla casella %d\n", giocatore1);

        if (giocatore1 >= 100) {
            printf("Il Giocatore 1 ha vinto!\n");
            break;
        }

        // Giocatore 2
        printf("\nTurno del Giocatore 2\nPremi invio per lanciare i dadi.");
        getchar(); // Aspetta che l'utente prema invio
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        printf("Hai ottenuto %d e %d\n", dado1, dado2);

        giocatore2 += dado1 + dado2;

        if (dado1 == dado2) {
            printf("Lancio fortunato! Giocatore 2 tira ancora.");
            dado1 = rand() % 6 + 1;
            dado2 = rand() % 6 + 1;
            printf("Hai ottenuto %d e %d\n", dado1, dado2);
            giocatore2 += dado1 + dado2;
        }

        printf("Il Giocatore 2 e' ora alla casella %d\n", giocatore2);

        if (giocatore2 >= 100) {
            printf("Il Giocatore 2 ha vinto!\n");
            break;
        }
    }

    return 0;
}


