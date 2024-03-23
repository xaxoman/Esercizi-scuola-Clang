#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 23/03/2024

    ESERCIZIO: 
    2. Data una stringa in input stampare la stringa con le lettere ordinate alfabeticamente (es. BARCA --> AABCR)
*/

#define dim 30

void OrdinaAlfabeto(char parola[], int dimensione) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y < dimensione-1; y++) {  

            if(parola[y] > parola[y+1]) { // se ne trovo uno maggiore li scambio tra loro (DEFINISCE SE CRESCENTE O DESCRESCENTE)
                temp = parola[y];
                parola[y] = parola[y+1];
                parola[y+1] = temp;
                scambi = 1; 
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1
}



int main(){
    
    char stringaUtente[dim];
    int dimensione_effettiva;

    printf("Inserisci la parola da ordinare: ");
    scanf("%s",stringaUtente);

    dimensione_effettiva = strlen(stringaUtente);
    printf("%s --> ",stringaUtente);
    OrdinaAlfabeto(stringaUtente, dimensione_effettiva);
    printf("%s", stringaUtente);
    return 0;

}

