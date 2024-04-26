#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 31/03/2024

    ESERCIZIO: 
    
    1. Dato un elenco di matricole di studenti organizzate in un array, dopo aver ordinato in modo
    crescente l’array, controllare se il valore di una matricola richiesta da tastiera è compresa
    nell’elenco. 
*/

#define max_studenti 1000

int GeneraCasuali(int studenti[max_studenti]) {

    srand(time(0));
    for(int i=0; i<max_studenti; i++) {

        studenti[i] = rand()%9999+1;
    }

}

void BubbleSort(int studenti[max_studenti]) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<max_studenti-1; y++) {  

            if(studenti[y] > studenti[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = studenti[y];
                studenti[y] = studenti[y+1];
                studenti[y+1] = temp;
                scambi = 1; 
            }
        }

        
    }while( scambi == 1); // finché scambi è vero == 1
}

int RicercaBinaria(int studenti[max_studenti], int inizio, int fine, int numero_cercare) {

    int estremoInf = inizio;
    int estrmoSup = fine-1;
    int medio;

    while(estremoInf <= estrmoSup) {

        medio = (estremoInf+estrmoSup)/2;
        if(numero_cercare>studenti[medio]) {

             estremoInf = medio+1;
        }
           
        else {

            if(numero_cercare<studenti[medio]) {

                estrmoSup = medio-1;
            }

            else {

                return (medio);
            }

        }      
        
    }
        return -1;
}

int main(){

    int studenti[max_studenti];
    int inizio, fine, numero_cercare;
    int risultato;

    GeneraCasuali(studenti);
    BubbleSort(studenti);

    // stampa dopo aver ordinato
    for(int i=0; i<max_studenti; i++) {

            printf("%d\t", studenti[i]); 
            if ((i + 1) % 10 == 0) { // se l'indice è un divisore di 10 allora sono passati 10 numeri
                printf("\n"); // va a capo ogni 10 numeri
            }
        
    }
    
    printf("\nInserisci il numero da cercare: ");
    scanf("%d",&numero_cercare);

    risultato = RicercaBinaria(studenti, 0, max_studenti-1, numero_cercare);

    if(risultato != -1) {

        printf("Il numero %d e' presente nella lista", numero_cercare);
    }

    else {

        printf("Non e' presente");
    }

    return 0;

}

