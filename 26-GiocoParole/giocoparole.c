#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
    L'obiettivo del gioco è indovinare una parola segreta in un numero limitato di tentativi.
    Il programma inizia con due parole, "ABACO" e "ZUZZURELLONE," e l'utente deve indovinare
    una parola segreta che inserisce. L'utente ha a disposizione 10 tentativi per indovinare la parola corretta,
    ricevendo suggerimenti basati sull'ordine alfabetico delle parole.
*/

#define MAX_TENTATIVI 10
#define MAX_DIM_PAROLA 20

int confrontaParole(const char *segreta, const char *tentativo) {
    return strcmp(segreta, tentativo);
}

int main() {
    char parolaSegreta[MAX_DIM_PAROLA];
    char tentativo[MAX_DIM_PAROLA];
    int tentativiRimasti = MAX_TENTATIVI;

    // Scelta casuale della parola segreta tra le due date
    int sceltaParola = rand() % 2;
    const char *paroleDisponibili[] = {"ABACO", "ZUZZURELLONE"};
    strcpy(parolaSegreta, paroleDisponibili[sceltaParola]);

    printf("Benvenuto al gioco dell'indovina parola!\n");
    printf("Hai 10 tentativi per indovinare la parola segreta.\n\n");

    while (tentativiRimasti > 0) {
        printf("Inserisci il tuo tentativo: ");
        scanf("%s", tentativo);

        if (confrontaParole(parolaSegreta, tentativo) == 0) {
            printf("Complimenti! Hai indovinato la parola segreta: %s\n", parolaSegreta);
            break;
        } else {
            printf("Tentativo sbagliato. ");

            if (strcmp(parolaSegreta, tentativo) > 0)
                printf("La parola segreta e' prima di '%s' nell'ordine alfabetico.\n", tentativo);
            else
                printf("La parola segreta e' dopo di '%s' nell'ordine alfabetico.\n", tentativo);

            tentativiRimasti--;
            printf("Tentativi rimasti: %d\n\n", tentativiRimasti);
        }
    }

    if (tentativiRimasti == 0)
        printf("Hai esaurito tutti i tentativi. La parola segreta era: %s\n", parolaSegreta);

    return 0;
}
