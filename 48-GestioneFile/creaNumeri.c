/*
NUMERI (scrittura file)
Scrivi un programma in C chiede all'utente un numero intero positivo e 
il nome di un file di testo. 
Il programma crea il file con il nome indicato ed estensione txt con 
all'interno la sequenza di 
tutti i numeri compresi tra 1 e il numero indicato.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int numero, i;
    char nomeFile[100];

    // Chiedi all'utente un numero intero positivo
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    // Verifica che il numero inserito sia positivo
    if (numero <= 0) {
        printf("Il numero deve essere positivo.\n");
        return 1; // Termina il programma con un codice di errore
    }

    // Chiedi all'utente il nome del file
    printf("Inserisci il nome del file (senza estensione): ");
    scanf("%s", nomeFile);

    // Aggiungi l'estensione .txt al nome del file
    strcat(nomeFile, ".txt");

    // Apri il file in modalità scrittura in aggiunta
    FILE *file = fopen(nomeFile, "w");

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Termina il programma con un codice di errore
    }

    // Scrivi la sequenza di numeri nel file
    for (i = 1; i <= numero; i++) {
      	fprintf(file, "%d\n", i);
    }

    // Chiudi il file
    fclose(file);

    printf("File creato con successo: %s\n", nomeFile);

    return 0; // Termina il programma con successo
}