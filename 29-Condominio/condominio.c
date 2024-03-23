#include <stdio.h>

/*
    Dennis Xhafaj 3IC 11/02/2024

    ESERCIZIO: 
    Un condominio di 6 piani ha 4 appartamenti in ciascun piano. Realizza un programma in C che utilizzi una matrice per
    contenere il numero di inquilini di ciascun appartamento e realizza le funzioni per:
        a. contare il numero complessivo di inquilini del palazzo;
        b. contare il numero di appartamenti disabitati;
        c. contare in quale piano c'è il maggior numero di inquilini.

    Richiamare con un menu le funzionalità realizzate.
*/

#define PIANI 6
#define APPARTAMENTI 4

void richiediInquilini(int condominio[][APPARTAMENTI]) {

    for(int i=0; i<PIANI; i++) {

        for(int j=0; j<APPARTAMENTI; j++) {

            printf("Inserisci gli inquilini per l'appartamento %d nel piano %d: ", j+1,i+1);
            scanf("%d",&condominio[i][j]); // solo gli gli array di stringhe non necessitano dell'operatore &
        }
    }

    printf("\n\nGli inquilini sono stati registrati.\n");
}

void totaleInquilini(int condominio[][APPARTAMENTI]) {

    int totale = 0;

    for(int i=0; i<PIANI; i++) {

        for(int j=0; j<APPARTAMENTI; j++) {

            totale += condominio[i][j]; // somma al totale ogni coinquilino all'interno di ogni appartamento in tutti e 6 i piani
        }
    }

    printf("gli inquilini totali sono: %d \n",totale);
}

int disabitati(int condominio[][APPARTAMENTI]) {

    int disabitati = 0;

    for(int i=0; i<PIANI; i++) {

        for(int j=0; j<APPARTAMENTI; j++) {

            if(condominio[i][j] == 0) {
                disabitati++;
            }
        }
    }

    printf("Gli appartamenti disabitati sono: %d \n",disabitati);
}

int pianoMax(int condominio[][APPARTAMENTI]) {

    int TempMax=0, pianoMax=0;

    for(int i=0; i<PIANI; i++) {

        int totalePiano = 0;
        for(int j = 0; j<APPARTAMENTI; j++) {

            totalePiano += condominio[i][j];

            if(totalePiano>TempMax) {

                pianoMax = i;
                TempMax = totalePiano;
            }
        }
    }

    printf("Il piano con il maggiori numero di inquilini e' il %d con %d inquilini\n",pianoMax+1,TempMax);
}

int main(){
    
    int condominio[PIANI][APPARTAMENTI]; 
    int scelta;

    richiediInquilini(condominio);
    while(scelta!=4) {

         printf("MENU:\n");
        printf("1. Conta il numero complessivo di inquilini del palazzo\n");
        printf("2. Conta il numero di appartamenti disabitati\n");
        printf("3. Conta in quale piano c'e il maggior numero di inquilini\n");
        printf("4. Esci\n");

        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {

            case 1:
               totaleInquilini(condominio);
               break;
            case 2:
                disabitati(condominio);
                break;
            case 3:
                pianoMax(condominio);
                break;

        }
    }
    return 0;

}

