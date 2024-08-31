    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define MAX_LUN 50
    #define DICT_FILE "dizionario.txt"

    // Struttura per rappresentare una coppia di parole
    typedef struct {
        char italiano[MAX_LUN];
        char inglese[MAX_LUN];
    } CoppiaParole;

    // Funzione per cercare una parola nel dizionario e restituire la traduzione corrispondente
    void cercaParola(char parola[], char lang[]) {
        char temp[MAX_LUN];
        CoppiaParole coppia;
        int trovato = 0;

        FILE * f = fopen(DICT_FILE,"r");

        // Legge ogni coppia di parole nel file e cerca la parola corrispondente
        while (fscanf(f, "%s %s", coppia.italiano, coppia.inglese) != EOF) { // EOF = End Of File, ovvero qunado il file è finito
            if (strcmp(lang,"ita")==0 && strcmp(coppia.italiano, parola) == 0) {
                printf("Traduzione in inglese: %s\n", coppia.inglese);
                trovato = 1;
                break;
            } else if (strcmp(lang, "eng") == 0 && strcmp(coppia.inglese, parola) == 0) {
                printf("Traduzione in italiano: %s\n", coppia.italiano);
                trovato = 1;
                break;
            }
        }

        fclose(f);

        if (!trovato) {
            printf("Parola non trovata nel dizionario.\n");
        }
    }

    // Funzione per aggiungere una nuova coppia di parole al dizionario
    void aggiungiCoppia() {
        CoppiaParole nuovaCoppia;

        printf("Inserisci la parola in italiano: ");
        scanf("%s", nuovaCoppia.italiano);
        printf("Inserisci la traduzione in inglese: ");
        scanf("%s", nuovaCoppia.inglese);

        FILE *f = fopen(DICT_FILE,"a");

        // Scrive la nuova coppia nel file
        fprintf(f, "\n%s %s", nuovaCoppia.italiano, nuovaCoppia.inglese);

        fclose(f);

        printf("Nuova coppia aggiunta al dizionario.\n");
    }

    int main() {
        int scelta;
        char parola[MAX_LUN];
        char lingua[MAX_LUN];

        // Apre il file in modalità lettura per vedere se il dizionario esiste1

        FILE * file = fopen(DICT_FILE, "r");

        if (file == NULL) {
            printf("Errore nell'apertura del file: dizionario non trovato1.\n");
            return 1;
        }
        else
            fclose(file);

        // Menu principale
        while (1) {
            printf("\nMenu:\n");
            printf("1. Traduci parola da italiano a inglese\n");
            printf("2. Traduci parola da inglese a italiano\n");
            printf("3. Aggiungi nuova coppia di parole\n");
            printf("4. Esci\n");
            printf("Scelta: ");
            scanf("%d", &scelta);

            switch (scelta) {
                case 1:
                    printf("Inserisci la parola in italiano: ");
                    scanf("%s", parola);
                    cercaParola(parola, "ita");
                    break;
                case 2:
                    printf("Inserisci la parola in inglese: ");
                    scanf("%s", parola);
                    cercaParola(parola, "eng");
                    break;
                case 3:
                    aggiungiCoppia();
                    break;
                case 4:
                    return 0;
                default:
                    printf("Scelta non valida.\n");
            }
        }

        return 0;
    }