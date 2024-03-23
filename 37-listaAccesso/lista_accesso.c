#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 18/03/2024

    ESERCIZIO: 
    Il gestore di un locale esclusivo vuole agevolare la gestione della lista di accesso. 
    Realizza un programma in C che permette di:
        - inserire un nominativo nella lista (il nominativo viene sempre aggiunto in fondo alla lista)
        - eliminare un nominativo dalla lista (fisicamente)
        - controllare se un nominativo è presente nella lista
        - stampare la lista in ordine di inserimento
        - svuotare la lista
    Nota che il locale può ospitare al massimo 60 persone. 
    Per provare il programma puoi usare un valore più piccolo, ad esempio 10, 
    per verificare che non sia possibile aggiungere altri nominativi alla lista perché il locale è pieno
*/

#define MAX_PERSONE 10
#define MAX_NOME 50

// Funzione per inserire un nominativo nella lista
void inserisciNominativo(char listaAccesso[][MAX_NOME], int* numPersone, char nome[]) {
    if (*numPersone < MAX_PERSONE) {
        strcpy(listaAccesso[*numPersone], nome);
        (*numPersone)++;
        printf("Nominativo di %s inserito con successo.\n", nome);
    } else {
        printf("Il locale e' al completo. Impossibile aggiungere nuovi nominativi.\n");
    }
}

// Funzione per eliminare un nominativo dalla lista
void eliminaNominativo(char listaAccesso[][MAX_NOME], int* numPersone, char nome[]) {
    int trovato = 0;
	int i,j;
	
    for (i = 0; i < *numPersone; i++) {
        if (strcmp(listaAccesso[i], nome) == 0) {
            trovato = 1;
            for (j = i; j < (*numPersone - 1); j++) {
                strcpy(listaAccesso[j], listaAccesso[j + 1]);
            }
            (*numPersone)--;
            printf("Nominativo di %s eliminato con successo.\n", nome);
            break;
        }
    }

    if (!trovato) {
        printf("Nominativo di %s non trovato nella lista.\n", nome);
    }
}

// Funzione per controllare se un nominativo è presente nella lista
void controllaNominativo(char listaAccesso[][MAX_NOME], int numPersone, char nome[]) {
    int trovato = 0;
	int i;
	
    for (i = 0; i < numPersone; i++) {
        if (strcmp(listaAccesso[i], nome) == 0) {
            trovato = 1;
            printf("Nominativo di %s presente nella lista.\n", nome);
            break;
        }
    }

    if (!trovato) {
        printf("Nominativo di %s non presente nella lista.\n", nome);
    }
}

// Funzione per svuotare la lista
void svuotaLista(char listaAccesso[][MAX_NOME], int* numPersone) {
    *numPersone = 0;
    printf("Lista svuotata con successo.\n");
}

// Funzione per stampare la lista dei nominativi
void stampaLista(char listaAccesso[][MAX_NOME], int numPersone) {
    int i;

	if (numPersone==0){
		printf("La lista e' vuota.\n");
	}
	else {
		printf("Lista dei nominativi:\n");
    	for (i = 0; i < numPersone; i++) {
        	printf("%s\n", listaAccesso[i]);
    	}	
	}
}

// Funzione principale
int main() {
    char listaAccesso[MAX_PERSONE][MAX_NOME];
    int numPersone = 0;
    int scelta;
    char nome[MAX_NOME];

    do {
        printf("\nMenu:\n");
        printf("1. Inserisci nominativo\n");
        printf("2. Elimina nominativo\n");
        printf("3. Controlla nominativo\n");
        printf("4. Svuota lista\n");
        printf("5. Stampa lista nominativi\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                printf("Inserisci il nominativo da aggiungere: ");
                scanf("%s", nome);
                inserisciNominativo(listaAccesso, &numPersone, nome);
                break;
            case 2:
                printf("Inserisci il nominativo da eliminare: ");
                scanf("%s", nome);
                eliminaNominativo(listaAccesso, &numPersone, nome);
                break;
            case 3:
                printf("Inserisci il nominativo da cercare: ");
                scanf("%s", nome);
                controllaNominativo(listaAccesso, numPersone, nome);
                break;
            case 4:
                svuotaLista(listaAccesso, &numPersone);
                break;
            case 5:
                stampaLista(listaAccesso, numPersone);
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 0);

    return 0;
}
