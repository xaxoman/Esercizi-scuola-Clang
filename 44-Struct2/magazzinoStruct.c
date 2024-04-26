#include <stdio.h>

/*
    Dennis Xhafaj 3IC 11/04/2024

    ESERCIZIO: 
    1. Scrivi una struct che permetta di memorizzare i dati degli articoli di un magazzino.
   Un articolo ha un nome, un prezzo e una quantità disponibile nel magazzino.
    2. Scrivi una funzione che stampa a video i dati di un articolo passato come parametro.
    3. Crea una variabile di tipo articolo, inizializza i valori e quindi stampa di dati (usando la funzione creata al punto 2).
    4. Crea un array di 3 articoli (magazzino) e inizializza i valori.
    Scambia i dati dei primi due articoli e stampa i dati di tutti gli articoli nell'array.
*/


struct magazzino {

    char nome[100]; // Assuming a maximum length of 100 characters for the name
    float prezzo;
    int quantita;
};

void stampa_articolo(struct magazzino Articoli[], int num_articoli) {

    for(int i=0; i<num_articoli; i++) {

        printf("\n- Articolo %d -\n\n",i+1);
        printf("Nome -> %s \n", Articoli[i].nome);
        printf("Prezzo -> %.2f \n", Articoli[i].prezzo);
        printf("Quantita' -> %d \n", Articoli[i].quantita);
    }

}

int main(){

    int num_articoli = 0;
    printf("Quanti articoli devi registrare? -> ");
    scanf("%d",&num_articoli);
    
    struct magazzino Articoli[num_articoli];
    
    for(int i=0; i<num_articoli; i++) {

        printf("\nArticolo %d - inserisci il nome: ",i+1);
        scanf("%s",Articoli[i].nome);
        printf("Articolo %d - inserisci il prezzo: ",i+1);
        scanf("%2f",&Articoli[i].prezzo);
        printf("Articolo %d - inserisci la quantita': ",i+1);
        scanf("%d",&Articoli[i].quantita);

    }

    stampa_articolo(Articoli, num_articoli);
    return 0;

}

