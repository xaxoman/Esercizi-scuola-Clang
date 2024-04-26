#include <stdio.h>
#include <string.h>

#define MAX_AUTOMOBILI 100

// Funzione di ordinamento per targa
void ordinaPerTarga(char targhe[][10], float chilometri[], int n) {
    int i,j;
    char tempTarga[10];
    float tempChilometri;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(targhe[j], targhe[j + 1]) > 0) {
                // Scambia le posizioni
                strcpy(tempTarga, targhe[j]);
                strcpy(targhe[j], targhe[j + 1]);
                strcpy(targhe[j + 1], tempTarga);

                // Scambia i chilometri corrispondenti
                tempChilometri = chilometri[j];
                chilometri[j] = chilometri[j + 1];
                chilometri[j + 1] = tempChilometri;
            }
        }
    }
}

// Funzione di ordinamento per chilometri percorsi 
void ordinaPerChilometri(char targhe[][10], float chilometri[], int n) {
    int i,j;
    char tempTarga[10];
    float tempChilometri;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (chilometri[j] > chilometri[j + 1]) {
                // Scambia le posizioni
                tempChilometri = chilometri[j];
                chilometri[j] = chilometri[j + 1];
                chilometri[j + 1] = tempChilometri;

                 // Scambia le targhe corrispondenti
                strcpy(tempTarga, targhe[j]);
                strcpy(targhe[j], targhe[j + 1]);
                strcpy(targhe[j + 1], tempTarga);
            }
        }
    }
}

// Funzione per stampare l'elenco ordinato
void stampaElenco(char targhe[][10], float chilometri[], int n) {
    int i;
    printf("\nElenco ordinato:\n");
    for (i = 0; i < n; i++) {
        printf("Targa: %s, Chilometri: %.2f\n", targhe[i], chilometri[i]);
    }
}

// Funzione per la ricerca dicotomica in un array ordinato per targa
int ricercaDicotomica(char targhe[][10], float chilometri[], int n, char target[]) {
    int inizio = 0, fine = n - 1, medio;

    ordinaPerTarga(targhe,chilometri,n);

    while (inizio <= fine) {
        medio = (inizio + fine) / 2;

        int confronto = strcmp(targhe[medio], target);

        if (confronto == 0) {
            // Targa trovata
            return medio;
        } else if (confronto < 0) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }

    // Targa non trovata
    return -1;
}

int main() {
    char targhe[MAX_AUTOMOBILI][10];
    float chilometri[MAX_AUTOMOBILI];
    int numAuto = 0;
    char targaCerca[10];

    // Aggiungi alcune auto di esempio
    strcpy(targhe[0], "ABC123");
    chilometri[0] = 50000.0;

    strcpy(targhe[1], "XYZ789");
    chilometri[1] = 30000.0;

    strcpy(targhe[2], "DEF456");
    chilometri[2] = 75000.0;

    strcpy(targhe[3], "ZZZ987");
    chilometri[3] = 34000.0;

    strcpy(targhe[4], "KLM777");
    chilometri[4] = 21000.0;

    strcpy(targhe[5], "GHJ001");
    chilometri[5] = 86000.0;


    numAuto = 6;

    // Menu principale
    int scelta;
    do {
        printf("\n1. Stampa elenco ordinato per targa\n");
        printf("2. Stampa elenco ordinato per chilometri percorsi\n");
        printf("3. Cerca chilometri percorsi per targa\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                ordinaPerTarga(targhe, chilometri, numAuto);
                stampaElenco(targhe, chilometri, numAuto);
                break;
            case 2:
                ordinaPerChilometri(targhe, chilometri, numAuto);
                stampaElenco(targhe, chilometri, numAuto);
                break;
            case 3:
                // Ricerca dicotomica per chilometri percorsi dato il numero di targa
                printf("\nInserisci la targa da cercare: ");
                scanf("%s", targaCerca);

                int indice = ricercaDicotomica(targhe, chilometri, numAuto, targaCerca);

                if (indice != -1) {
                    printf("Chilometri percorsi per %s: %.2f\n", targaCerca, chilometri[indice]);
                } else {
                    printf("Auto con targa %s non trovata.\n", targaCerca);
                }
                break;
            case 0:
                printf("Programma terminato.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 0);

    return 0;
}