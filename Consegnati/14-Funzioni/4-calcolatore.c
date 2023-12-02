#include <stdio.h>

/*
    Dennis Xhafaj 3IC 18/11/2023

    ESERCIZIO:
    Scrivi un programma che attraverso un menu permette all'utente di scegliere tra tre diverse operazioni:
    1 - somma
    2 - prodotto
    3 - media
    4 - esci
    Il programma continua finché l'utente non sceglie di seminare (opzione 4).
    L'operazione di somma consiste calcolare la somma di N numeri inseriti dall'utente.
    L'operazione di prodotto consiste calcolare il prodotto di N numeri inseriti dall'utente.
    L'operazione di media consiste nel calcolare la media di N numero inseriti dall'utente.
    NB. Usa l'approccio top-down e definisci tutte le funzioni necessarie per rendere il programma più efficiente e modulare.
*/

int somma() {

    int  n,somma=0, sum;  

    printf("Quanti numeri vuoi sommare? ");
    scanf("%d",&n); // NIENTE SPAZI NEGLI SCANF scanf("%d ");

    printf("Inserisci i tuoi numeri: ");
    for(int i = 0; i<n ; i++) {

        scanf("%d",&sum);
        somma += sum;
    }

    return somma;
}

int prodotto() {

    int n, prodotto=1, moltipica;

   printf("Quanti numeri vuoi moltiplicare? ");
   scanf("%d",&n);

   printf("Inserisci i tuoi numeri: ");
   for(int i = 0; i<n ; i++) {

        scanf("%d",&moltipica);
        prodotto = prodotto*moltipica;

   }
    
    return prodotto;
}


int media() {

    int n, SommaMedia=0, i;
    int media;

    printf("Inserisci i numeri della media: ");
    for(i=0; n!=0; i++) {

        scanf("%d",&n);
        SommaMedia += n;

    }
    
    media = SommaMedia/i;
    return media;
    
}



int main(){

    int scelta, n, RisultatoSomma, RisultatoProdotto, RisultatoMedia;
    
    printf("\nSCEGLI UNA DELLE SEGUENTI OPZIONI\n\n 1 - somma \n 2 - prodotto \n 3 - media \n 4 - esci");
    
    while(scelta!=4) {

        printf("\nscegli un'opzione: ");
        scanf("%d",&scelta); 

        switch (scelta) {
        case 1:
            RisultatoSomma = somma();
            printf("%d",RisultatoSomma);
            break;
        case 2:
           RisultatoProdotto = prodotto();
           printf("%d",RisultatoProdotto);
           break;
        case 3:
            RisultatoMedia = media();
            printf("%d",RisultatoMedia);
            break;
        
        }
    }

    printf("sei uscito dal programma.");

    return 0;

}

