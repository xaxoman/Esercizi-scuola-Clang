#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 31/03/2024

    ESERCIZIO: 
    Immagina di lavorare in una grande biblioteca universitaria che gestisce migliaia di libri. 
    Per agevolare gli studenti nella ricerca dei libri, la biblioteca tiene un catalogo ordinato
    alfabeticamente dei titoli dei libri.
    Il catalogo è implementato come un array ordinato in cui ogni elemento contiene il titolo di un libro. 
    Ogni volta che un nuovo libro viene acquisito dalla biblioteca, viene inserito nel catalogo in modo che 
    l'array rimanga ordinato.
    Ora, immagina che tu sia incaricato di scrivere un programma per aiutare gli studenti a trovare rapidamente un libro nel catalogo.
   
    Problema:
    Scrivi un programma che, dato il titolo di un libro, cerchi nel catalogo e restituisca l'indice del libro nell'array. 
    Se il libro è presente nel catalogo, il programma deve restituire l'indice della prima occorrenza del titolo. 
    Se il libro non è presente, il programma deve restituire un messaggio di "Libro non trovato".
*/

#define MAX_LIBRI 100 // Massimo numero di libri nel catalogo
#define MAX_LUN 20 // Lunghezza massima del titolo del libro

// Funzione per l'ordinamento di un array di stringhe
void bubbleSort(char arr[][MAX_LUN], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[MAX_LUN];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Funzione per la ricerca binaria in un array ordinato
int binarySearch(char matstr[][MAX_LUN], int lun, char cercstr[]) {
    int left = 0, right = lun - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(matstr[mid], cercstr);
        if (cmp == 0) {
            return mid; // Libro trovato
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Libro non trovato
}

int main() {
    char titoli[MAX_LIBRI][MAX_LUN];
    int numLibri = 0;

    int scelta;
    do {
        printf("\nMenu:\n");
        printf("1. Inserisci un nuovo titolo\n");
        printf("2. Cerca un libro nel catalogo\n");
        printf("3. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: {
                if (numLibri < MAX_LIBRI) {
                    printf("Inserisci il titolo del libro: ");
                    scanf("%s", titoli[numLibri]);
                    numLibri++;
                    bubbleSort(titoli, numLibri);
                    printf("Libro inserito con successo!\n");
                } else {
                    printf("Il catalogo è pieno, impossibile inserire altri libri.\n");
                }
                break;
            }
            case 2: {
                char titoloCercato[MAX_LUN];
                printf("Inserisci il titolo del libro da cercare: ");
                scanf("%s", titoloCercato);
                int pos = binarySearch(titoli, numLibri, titoloCercato);
                if (pos != -1) {
                    printf("Il libro '%s' si trova all'indice %d nel catalogo.\n", titoloCercato, pos);
                } else {
                    printf("Libro non trovato nel catalogo.\n");
                }
                break;
            }
            case 3: {
                printf("Uscita dal programma.\n");
                break;
            }
            default: {
                printf("Scelta non valida. Riprova.\n");
                break;
            }
        }
    } while (scelta != 3);

    return 0;
}

