#include <stdio.h>

/*
    Dennis Xhafaj 3IC 9/05/2024

    ESERCIZIO: 
    Scrivi un programma in C a partire da un file contentente un elenco di numeri interi che 
    produce un nuovo file contenente l'elenco ordinato.
*/

void ordinaNumeri(int vet[], int num_elementi) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<num_elementi-1; y++) {  

            if(vet[y] < vet[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = vet[y];
                vet[y] = vet[y+1];
                vet[y+1] = temp;
                scambi = 1; 
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1
}

int main(){
    
    int num_elementi, numero, conteggio=0;
    int vet[100]; // associo il vettore ai dati in input e output per effetuare il conteggio, l'ordinamento e la scrittura dei dati
    FILE *Dati_input, *Dati_output;

    Dati_input = fopen("input.txt","r");
   

     // Verifica se il file è stato aperto correttamente
    if (Dati_input == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Termina il programma con un codice di errore
    }

    while (fscanf(Dati_input, "%d", &vet[conteggio]) == 1) {
        conteggio++;
    }

    // ordino i file in input e chiudo il file
    ordinaNumeri(vet, conteggio);
    fclose(Dati_input);
    // apro il file dove andrò a scrivere la lista ordinata
    Dati_output = fopen("output.txt","w");
    
    // Verifica se il file di output è stato letto correttamente
    if (Dati_input == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    for (int i = 0; i < conteggio; i++) {
        
        fprintf(Dati_output, "%d\n", vet[i]);
    }
    
    fclose(Dati_output);
    return 0;

}

