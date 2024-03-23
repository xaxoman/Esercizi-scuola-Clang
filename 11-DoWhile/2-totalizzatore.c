#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO:
    Progetta un totalizzatore per il gioco del biliardo. 
    Il programma chiede ogni volta i punti realizzati in un tiro e comunica il totale parziale raggiunto. 
    Il programma termina quando si raggiunge o si supera il punteggio di 100 comunicando la vittoria.
*/

int main(){
    
    int punteggio=0,userScore;

    while(punteggio<100) {

       printf("Quanti punti hai fatto? ");
       scanf("%d",&userScore);

       punteggio=punteggio+userScore;

    }

    printf("HAI VINTO %d punti!",punteggio);

    return 0;

}

