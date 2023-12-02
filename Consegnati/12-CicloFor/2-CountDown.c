#include <stdio.h>

/*
    Dennis Xhafaj 3IC 2/11/2023

    ESERCIZIO:
    COUNT-DOWN. Scrivi un programma in C che chiede all'utente di inserire il numero N di partenza di un conto alla rovescia,
    quindi il programma stampa su righe successive tutti i numeri da N a 0.
    
*/

int main(){

    int N,i;

    printf("Inserisci il numero del countdown: ");
    scanf("%d",&N);
    
    for(i=0; N>=i; N--) {

      printf("%d \n",N);
    }
    
    return 0;

}