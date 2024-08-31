/* MEDIA DATI (lettura file)
Scrivi un programma in C che chiede all'utente il nome di un file da leggere. 
Il file contiene una sequenza di numeri interi che il programma acquisisce mostrandone la somma e la media.
*/

#include <stdio.h>

int main() {
    char nomeFile[100];
    FILE *file;
    int numero, somma = 0, conteggio = 0;

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

    // Leggi i numeri dal file e calcola somma e conteggio
    while (fscanf(file, "%d", &numero) == 1) {
        somma += numero;
        conteggio++;
    }

    // Chiudi il file
    fclose(file);

    // Calcola la media (se il conteggio è diverso da zero)
    double media=0.0;
    if (conteggio !=0) 
        media = (double)somma / conteggio;

    // Visualizza la somma e la media
    printf("Somma: %d\n", somma);
    printf("Media: %.2f\n", media);

    return 0; // Termina il programma con successo
}