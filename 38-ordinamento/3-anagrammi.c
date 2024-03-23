#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 23/03/2024

    ESERCIZIO: 
    3. Date due stringhe in input dire se sono due anagrammi (es. PIETRA è anagramma di APERTI)
*/

#define dim 30

void Anagramma(char parola[], int lunghezza) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 

        do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<lunghezza-1; y++) {   // a questo punto prendo una delle due lunghezze, è indifferente

            if(parola[y] < parola[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = parola[y];
                parola[y] = parola[y+1];
                parola[y+1] = temp;
                scambi = 1; 
            }
        }
        
        }while( scambi == 1); // finché scambi è vero == 1
}

int main(){
    
    char prima[dim];
    char seconda[dim];
    int lunghezza1, lunghezza2;

    printf("Inserisci la prima parola: ");
    scanf("%s",prima);
    printf("Inserisci la seconda parola: ");
    scanf("%s",seconda);

    lunghezza1 = strlen(prima);
    lunghezza2 = strlen(seconda);

    if(lunghezza1!=lunghezza2) {
    
        printf("Le due parola non sono angrammi perche' hanno lunghezza differente");
    }

    else {

        Anagramma(prima, lunghezza1);
        Anagramma(seconda, lunghezza2);

        if(strcmp(prima, seconda)==0) {

            printf("sono anagrammi");
        }

        else {

             printf("non sono anagrammi");
        }
    }

    return 0;

}

