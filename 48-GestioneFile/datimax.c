/*
DATI MAX (lettura file)
Scrivi un programma in C che chiede all'utente il nome di un file da leggere. 
Il file contiene una sequenza di dati strutturati con nome e valore. 
Il programma acquisisce i dati e mostra il nome del dato strutturato di valore 
maggiore.
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 100

// Struttura per memorizzare i dati
struct Dato {
    char nome[MAX_NOME];
    int valore;
};

int main() {
    char nomeFile[100];
    FILE *file;
    struct Dato datoCorrente, datoMax;
    int valoreMax = 0;

    // Chiedi all'utente il nome del file
    printf("Inserisci il nome del file: ");
    scanf("%s", nomeFile);

    // Apri il file in modalità lettura
    file = fopen(nomeFile, "r");

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Termina il programma con un codice di errore
    }

    // Leggi i dati dal file e trova il dato con il valore massimo
    while (fscanf(file, "%s %d", datoCorrente.nome, &datoCorrente.valore) == 2) {
        if (datoCorrente.valore > valoreMax) {
            valoreMax = datoCorrente.valore;
            datoMax = datoCorrente;
        }
    }

    // Chiudi il file
    fclose(file);

    // Verifica se almeno un dato è stato letto
    if (valoreMax != 0) {
        // Visualizza il dato con il valore massimo
        printf("Il dato con il valore massimo è:\n");
        printf("Nome: %s\n", datoMax.nome);
        printf("Valore: %d\n", datoMax.valore);
    } else {
        printf("Nessun dato letto dal file.\n");
    }

    return 0; // Termina il programma con successo
}