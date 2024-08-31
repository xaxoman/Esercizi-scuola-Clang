#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC  11/01/2024

    ESERCIZIO: 
    Realizza un programma in C che legge da un file di testo una sequenza di parole e stampi 
    sullo schermo la parola più lunga trovata (in caso di parità di lunghezza stampa la prima trovata).
*/
 
#define nome_file "parole.txt"

int main(){
  
    FILE *f;
    char parola[50], max[50];
    int lunghezza, max_lunghezza = 0;

    f = fopen(nome_file, "r");

    if(f == NULL){
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    while(fscanf(f, "%s", parola) != EOF){
        lunghezza = strlen(parola);
        if(lunghezza > max_lunghezza){
            max_lunghezza = lunghezza;
            strcpy(max, parola);
        }
    }

    fclose(f);

    printf("La parola piu lunga e': %s\n", max);

    return 0;

}

