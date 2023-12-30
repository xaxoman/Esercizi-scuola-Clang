#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/12/2023

    ESERCIZIO: 
    a. Scrivi una funzione che calcola e restituisce il fattoriale di un numero intero positivo o nullo. 
    Il fattoriale di un numero n (che in matematica si indica con n!) è definito come il prodotto di tutti i 
    numeri compresi tra 1 e N. Il fattoriale di 0 è per definizione uguale a 1. Ad esempio il fattoriale di 5, 
    ovvero 5! è pari a 120 (ovvero 1*2*3*4*5).
    nb. il numero cresce molto rapidamente (non usare n >= 10 perché il risultato non può essere memorizzato in un tipo int).

    b. Scrivi un programma che calcola in quanti diversi modi si possono disporre K oggetti. 
    Il programma chiede all'utente il numero di oggetti e comunica in quanti modi diversi si possono disporre gli oggetti. 
    La formula è data dal fattoriale di K (K!) e prende il nome di permutazione. Ad esempio si possono disporre 3 oggetti in 
    6 modi diversi (abc, cba, bac, cab, bca, acb).

    c. Aggiungi al programma la possibilità di calcolare quanti diversi gruppi di k oggetti si possono fare prendendoli da un 
    insieme di N tutti diversi. Il programma chiede all'utente quanti sono gli oggetti e la dimensione del gruppo e comunica 
    quanti diversi gruppi di oggetti si possono fare. La formula è data da N!/(K!*(N-K)!) e prende il nome di combinazione.. 
    Ad esempio con 5 oggetti posso fare 10 gruppi diversi di 3 oggetti.

    nb. Puoi aggiungere una nuova funzione combinazione per calcolare la formula.

*/

/* PROGRAMMA A */

int Fattoriale(int n) {

    int fattoriale = 1; 

    for(int i=1 ; i<=n ; i++) {

        fattoriale = fattoriale*(i);
    }

    return fattoriale;
} 

/* PROGRAMMA C */

int Combinazioni(int oggetti, int insiemi) {

    int combinazioni;

    combinazioni = Fattoriale(insiemi) / (Fattoriale(oggetti)*Fattoriale(insiemi-oggetti));

    return combinazioni;

}

int main(){
    
    /*Esercizio 1
        int n, StampaFAT;
        printf("Inserisci il numero di cui fare il fattoriale: ");
        scanf("%d",&n);

        StampaFAT = Fattoriale(n);
        printf("%d",StampaFAT);
    */

    /*Esercizio 2

        int oggetti, scambi;

        printf("Inserisci il numero di oggetti che vuoi scambiare: ");
        scanf("%d",&oggetti);

        scambi = Fattoriale(oggetti);
        printf("%d oggetti si possono scambiare %d volte",oggetti,scambi);

    */

    /*Esercizio 3*/ 

        int oggetti, gruppo, insiemi;

        printf("Inserisci il numero di oggetti che vuoi scambiare: ");
        scanf("%d",&oggetti);

        printf("Quanto e' grande il gruppo di appartenenza: ");
        scanf("%d",&gruppo);

        insiemi = Combinazioni(oggetti, gruppo);
        printf("%d",insiemi);


    return 0;

}

