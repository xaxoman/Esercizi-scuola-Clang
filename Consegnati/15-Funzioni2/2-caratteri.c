#include <stdio.h>

/*
    Dennis Xhafaj 3IC 27/11/2023

    ESERCIZIO:
    Creare una funzione che permetta di stampare una riga costituita dalla ripetizione di un carattere c per n volte, 
    dove n e c sono passati dall’utente.
    Creare un programma che permette di stampare un quadrato di simboli di dimensione x passata dall’utente, 
    con righe alternate una di ‘-‘ e una di ‘+’.

*/

// PARTE UNO ESERCIZIO

void RigaRipetuta(char carattere, int ripetizione) {

    for(int i = 0; i<ripetizione; i++) {

        printf("%c", carattere);
    }

}

void QuadratoAlternato(int dimensioniQuadrato) {

    for(int i = 1; i!=((dimensioniQuadrato*dimensioniQuadrato)+1); i++) {

        printf("- +");

       if((i%dimensioniQuadrato)==0) {

            printf("\n");
       }
        
    }

    
}

int main(){
    
   /* ESERCIZIO 1
   
    char carattere;
    int RipetiCarattere;

    printf("Quale carattere vuoi passare: ");
    scanf("%c",&carattere);
    printf("Quante volte vuoi ripetere questo carattere? ");
    scanf("%d",&RipetiCarattere);

    RigaRipetuta(carattere,RipetiCarattere);

   
   */ 

  /* ESERCIZIO 2*/

    int DimensioniQuadrato;

    printf("inserisci le dimenzioni del quadrato (es: 5 -> 5x5): ");
    scanf("%d",&DimensioniQuadrato);
    QuadratoAlternato(DimensioniQuadrato);

    return 0;

}

