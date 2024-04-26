#include <stdio.h>

/*
    Dennis Xhafaj 3IC 31/03/2024

    ESERCIZIO: 
    Hai uno zaino con una capacità massima di peso, e una serie di oggetti ognuno con un peso diverso. 
    Il tuo obiettivo è massimizzare il numero totale degli oggetti che puoi mettere nello zaino senza 
    superare il peso massimo consentito. 
   
    Problema:
    Scrivi un programma che, data la capacità dello zaino e l'elenco dei pesi degli oggetti, 
    permetta di determinare quanti oggetti puoi prendere e qual è il peso totale trasportato. 
*/

#define CAPACITA 1000

void BubbleSort(int num_oggetti, int peso_oggetti[num_oggetti]) {

    int y, temp;
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<num_oggetti-1; y++) {  

            if(peso_oggetti[y] > peso_oggetti[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                temp = peso_oggetti[y];
                peso_oggetti[y] = peso_oggetti[y+1];
                peso_oggetti[y+1] = temp;
                scambi = 1; 
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1
}

void CapacitaZaino(int num_oggetti, int peso_oggetti[num_oggetti]) {

    int peso_tot = 0;
    int oggetti_trasportati;

        for(int i=0; i<num_oggetti; i++) {

            if(peso_tot<=CAPACITA) {
               
               peso_tot += peso_oggetti[i];
               oggetti_trasportati = i;
                
            }

        }

    // stampa dopo aver finito correttamente il ciclo
    printf("\n\nPeso totale -> %d", peso_tot);     
    printf("\nOggetti trasportati -> %d", oggetti_trasportati+1);
}

int main(){
    
    int num_oggetti;

    printf("Inserisci il numero di oggetti: ");
    scanf("%d",&num_oggetti);

    int peso_oggetti[num_oggetti];
    printf("Inserisci il peso degli oggetti \n\n");
    for (int i = 0; i < num_oggetti; i++) {
        printf("oggetto %d: ",i+1);
        scanf("%d",&peso_oggetti[i]);
    }
    
    // ordino il peso in ordine crescente in modo da partire dagli oggetti più leggeri
    BubbleSort(num_oggetti, peso_oggetti);

    for(int i = 0; i < num_oggetti; i++) {

        printf("%d ", peso_oggetti[i]);
    }

    CapacitaZaino(num_oggetti, peso_oggetti);
    
    return 0;

}

