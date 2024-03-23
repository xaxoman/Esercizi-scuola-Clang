#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Dennis Xhafaj 3IC 15/02/2024

    ESERCIZIO: 
    Riprendi il codice del gioco  impiccato dell'esercizio 30a (soluzione allegata in fondo all'esercizio).
    Aggiungi nel main questo array di 10 stringhe che inizializzato con le possibili parole che il gioco propone.

    char parole[10][12]={"PROSECCO", "CONTRATTO", "MITTENTE", "COORDINATO", "OSTRICHE", "BANDIERA", "PRELUDIO", "AROMATICO", "TASTIERA", "DECIMALE");

    Fai in modo che il computer scelga casualmente la parola da indovinare tra quelle dell'elenco di parole anziché chiedere al primo giocatore di inserire la parola.

    Ricordi come generare un numero casuale tra 0 e 9?
*/

void inizializzaParolaNascosta(char parolaDaIndovinare[], char parolaNascosta[]) {
    int lunghezza = strlen(parolaDaIndovinare);
	int i;
	
	strcpy(parolaNascosta,parolaDaIndovinare);
    for (i = 1; i < lunghezza - 1; i++) {
        parolaNascosta[i] = '-';
    }
}

int indovinaLettera(char parolaDaIndovinare[], char parolaNascosta[], char lettera) {
    int lunghezza = strlen(parolaDaIndovinare);
    int presente = 0;
	int i;

    for (i = 1; i < lunghezza - 1; i++) {
        if (parolaDaIndovinare[i] == lettera) {
            parolaNascosta[i] = lettera;
            presente = 1;
        }
    }

    return presente;
}

int main() {
    char parolaDaIndovinare[100];
    char parolaNascosta[100];
    char parole[60][12] = {
        "PROSECCO", "CONTRATTO", "MITTENTE", "COORDINATO", "OSTRICHE", "BANDIERA", "PRELUDIO", "AROMATICO", "TASTIERA", "DECIMALE",
        "SCATOLA", "RAGAZZO", "PIZZA", "MACCHINA", "VOLANTE", "TIGRE", "MONTAGNA", "CIELO", "CHITARRA", "LIBRO",
        "BICICLETTA", "SALUTE", "RIVISTA", "OROLOGIO", "FIUME", "FOTOGRAFIA", "FIORE", "VINO", "LUNA", "SOLE",
        "GIOCATTOLO", "TELEFONO", "SPIAGGIA", "GATTO", "PIANTO", "PESCE", "MERAVIGLIA", "FELICITÀ", "SORRISO", "AMORE",
        "MUSICA", "GIOIA", "SPERANZA", "LIBERTÀ", "FORZA", "RICORDO", "SOGNO", "BAMBINO", "ARANCIA", "PASSIONE",
        "COLAZIONE", "CENA", "PRANZO", "DIVERTIMENTO", "RELAX", "AVVENTURA", "BELLEZZA", "NATURA", "VACANZA"
    };
    int tentativiRimanenti = 6;

    srand(time(0));
    strcpy(parolaDaIndovinare, parole[rand()%9+1] ); 

    printf("Gioco dell'impiccato\n");
    printf("Un giocatore inserisce una parola e l'altro deve indovinarla.\n");
    printf("Hai 6 tentativi per indovinare la parola.\n");

    int lunghezza = strlen(parolaDaIndovinare);

    inizializzaParolaNascosta(parolaDaIndovinare, parolaNascosta);

    while (tentativiRimanenti > 0) {
        system("cls");
        printf("Parola da indovinare: %s\n", parolaNascosta);
        printf("Tentativi rimanenti: %d\n", tentativiRimanenti);
        printf("Indovina una lettera: ");

        char lettera;
        scanf(" %c", &lettera);
        lettera = toupper(lettera); // rende le lettere maiuscole in modo da considerarle valide nell'input

        if (indovinaLettera(parolaDaIndovinare, parolaNascosta, lettera)!=0) {
            printf("Hai indovinato una lettera!\n");
           
        } else {
            printf("Lettera non trovata. Hai perso un tentativo.\n");
            tentativiRimanenti--;
        
        }

        if (strcmp(parolaNascosta, parolaDaIndovinare) == 0) {
            printf("Hai indovinato la parola: %s\n", parolaDaIndovinare);
            break;
        }
    }

    if (tentativiRimanenti == 0) {
        printf("Hai esaurito i tentativi. La parola era: %s\n", parolaDaIndovinare);
    }

    return 0;
}

