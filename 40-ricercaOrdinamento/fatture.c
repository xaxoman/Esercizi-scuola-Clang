#include <stdio.h>

/*
    Dennis Xhafaj 3IC 31/03/2024

    ESERCIZIO: 

    2 Gli importi delle fatture emesse nel mese di marzo sono organizzati in un array. Dopo aver
    ordinato in modo decrescente l’array: 
    - visualizzare l’importo massimo (importo corrispondente all’indice 0 dell'array). 
    - controllare se il valore di un importo fornito da tastiera è compreso nell’array (supponendo
    che gli importi siano tutti diversi tra loro).
*/

#define dipendenti 10

void bubbleSort(float fatture[dipendenti]) {

    int y;
    float temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<dipendenti-1; y++) {  

            if(fatture[y] < fatture[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = fatture[y];
                fatture[y] = fatture[y+1];
                fatture[y+1] = temp;
                scambi = 1; 
            }
        }

        
    }while( scambi == 1); // finché scambi è vero == 1
}

int RicercaBinaria(float fatture[dipendenti], int inizio, int fine, float fattura_cercare) {

     while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        // Se l'fattura_cercare è al centro, restituisci la posizione
        if (fatture[medio] == fattura_cercare) {
            return medio;
        }

        // Se l'fattura_cercare è nella metà sinistra, aggiorna "fine"
        if (fatture[medio] > fattura_cercare) {
            fine = medio - 1;
        }

        // Se l'fattura_cercare è nella metà destra, aggiorna "inizio"
        else {
            inizio = medio + 1;
        }
    }

    return -1; // fattura_cercare non trovato
}

int main(){
    
    float fattureMese[dipendenti] = {100.0, 200.0, 300.0, 400.0, 500.0, 600.0, 700.0, 800.0, 900.0, 1000.0};
    int risultato;
    float fattura_cercare;

    bubbleSort(fattureMese);
    // stampa fatture dopo ordinamento
    for(int i=0; i<dipendenti; i++) {

        printf("%.2f Eur\n",fattureMese[i]);
    }

    printf("La fattura piu' alta di questo mese e' pari a %.2f Eur\n", fattureMese[0]);

    printf("Inserisci l'importo della fattura da cercare: ");
    scanf("%f",&fattura_cercare);
   
    risultato = RicercaBinaria(fattureMese, 0, dipendenti-1, fattura_cercare);

    
    if(risultato != -1) {

        printf("La fattura da %.2f e' presente nella lista", fattura_cercare);
    }

    else {

        printf("Non e' presente");
    }

    return 0;

}

