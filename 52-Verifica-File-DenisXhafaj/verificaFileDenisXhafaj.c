#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 23/05/2024
    Il file di testo presenze.txt contiene i dati relativi alle presenze personali di 
    un gruppo di studenti ad una serie di incontri. Gli studenti provengono da classi 
    diverse e sono elencati nel suddetto file in ordine alfabetico. Il file contiene
     per ogni riga il nome dello studente, la classe che può essere 3IA, 3IB o 3IC e 
     il numero totale di ore di presenza. 
 
    Scrivi un programma in C che legga i dati dal file presenze.txt e produca tre file 
    di output separati per ciascuna classe con il relativo elenco degli studenti e le 
    rispettive ore di presenza. Inoltre, il programma deve calcolare e scrivere in fondo 
    a ciascun file di output il numero totale di studenti della classe e la media delle 
    ore di presenza.

*/

#define FILE_PRESENZE "presenze.txt"

struct dati_Studenti {
    char Classe[4];
    char Cognome[30];
    int ore_presenza;
};

void assegnaClassi(struct dati_Studenti studenti[], int num_studenti, FILE *file_3ia, FILE *file_3ib, FILE *file_3ic) {
    for (int i = 0; i < num_studenti; i++) {
        if (strcmp(studenti[i].Classe, "3IA") == 0) {
            fprintf(file_3ia, "%s %s %d\n", studenti[i].Cognome, studenti[i].Classe, studenti[i].ore_presenza);
        } else if (strcmp(studenti[i].Classe, "3IB") == 0) {
            fprintf(file_3ib, "%s %s %d\n", studenti[i].Cognome, studenti[i].Classe, studenti[i].ore_presenza);
        } else if (strcmp(studenti[i].Classe, "3IC") == 0) {
            fprintf(file_3ic, "%s %s %d\n", studenti[i].Cognome, studenti[i].Classe, studenti[i].ore_presenza);
        }
    }
}

void datiExtra(struct dati_Studenti studenti[], int num_studenti, FILE *file_3ia, FILE *file_3ib, FILE *file_3ic) {
    int num_3ia = 0, num_3ib = 0, num_3ic = 0;
    float media_3ia = 0, media_3ib = 0, media_3ic = 0;

    for (int i = 0; i < num_studenti; ++i) {
        if (strcmp(studenti[i].Classe, "3IA") == 0) {
            num_3ia++;
            media_3ia += studenti[i].ore_presenza;
        } else if (strcmp(studenti[i].Classe, "3IB") == 0) {
            num_3ib++;
            media_3ib += studenti[i].ore_presenza;
        } else if (strcmp(studenti[i].Classe, "3IC") == 0) {
            num_3ic++;
            media_3ic += studenti[i].ore_presenza;
        }
    }

        media_3ia /= num_3ia;
        fprintf(file_3ia, "Totale studenti: %d\nMedia ore di presenza: %.2f\n", num_3ia, media_3ia);

        media_3ib /= num_3ib;
        fprintf(file_3ib, "Totale studenti: %d\nMedia ore di presenza: %.2f\n", num_3ib, media_3ib);
    
        media_3ic /= num_3ic;
        fprintf(file_3ic, "Totale studenti: %d\nMedia ore di presenza: %.2f\n", num_3ic, media_3ic);
    
}

int main() {
    FILE *file_studenti;
    struct dati_Studenti studenti[100];
    int num_studenti = 0;

    // Apro il file in modalità lettura
    file_studenti = fopen(FILE_PRESENZE, "r");
    if (file_studenti == NULL) {
        printf("Errore nell'apertura del file %s\n", FILE_PRESENZE);
        return 1;
    }

    // Leggo i dati dal file di input
    while (fscanf(file_studenti, "%s %s %d", studenti[num_studenti].Cognome, studenti[num_studenti].Classe, &studenti[num_studenti].ore_presenza) != EOF) {
        num_studenti++;
    }
  
    fclose(file_studenti);

    // Creo i file per le rispettive classi
    FILE *file_3ia = fopen("3IA.txt", "w");
    if (file_3ia == NULL) {
        printf("Errore nell'apertura del file 3IA.txt\n");
        return 1;
    }

    FILE *file_3ib = fopen("3IB.txt", "w");
    if (file_3ib == NULL) {
        printf("Errore nell'apertura del file 3IB.txt\n");
        return 1;
    }

    FILE *file_3ic = fopen("3IC.txt", "w");
    if (file_3ic == NULL) {
        printf("Errore nell'apertura del file 3IC.txt\n");
        return 1;
    }

    // Assegna ogni studente alla sua classe di appartenenza
    assegnaClassi(studenti, num_studenti, file_3ia, file_3ib, file_3ic);

    // Aggiungi i dati extra: numero di studenti e media delle ore di presenza
    datiExtra(studenti, num_studenti, file_3ia, file_3ib, file_3ic);

    // Chiudo i file di output
    fclose(file_3ia);
    fclose(file_3ib);
    fclose(file_3ic);

    return 0;
}
