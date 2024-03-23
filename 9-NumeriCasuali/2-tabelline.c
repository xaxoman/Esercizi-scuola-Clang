#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 14/10/2023

    ESERCIZIO:
    Scrivi un programma in C che consente di verificare le conoscenze delle tabelline. 
    Il programma propone 4 operazioni di moltiplicazione casuali a cui deve rispondere inserendo il risultato. 
    Ad ogni risposta il programma comunica se la risposta è corretta o sbagliata (fornendo il risultato corretto).  
    Al termine viene comunicato un giudizio così articolato:

*/

int main(){
    
    int RandUno, RandDue, risposta, punteggio;
    punteggio = 0;

    /* funzione che usa time(), ovvero una funzione che tiene conto del tempo di esecuzione del programma 
       per avere un valore diverso da inserire nel seed ogni volta che si esegue il programma: 
    */
    srand(time(0)); 
    
    // riscrivo RandUno e RandDue ogni domanda per fare in modo che i valori cambino a ogni domanda 
    RandUno = rand()%10+1; 
    RandDue = rand()%10+1; 
    printf("Quanto fa %d x %d ? ", RandUno,RandDue);
    scanf("%d",&risposta); 
    
    /* verifico se la risposta coincide con il calcolo effettivo, 
       in questo caso funziona perchè le due variabili casuali non sono ancora state aggiornate 
    */
        if((RandUno*RandDue)==risposta) { 

            printf("Corretto\n");
            punteggio=punteggio+1;

        }

        else {

            printf("Sbagliato\n");
        }

    RandUno = rand()%10+1;
    RandDue = rand()%10+1; 
    printf("Quanto fa %d x %d ? ", RandUno,RandDue);
    scanf("%d",&risposta);

        if((RandUno*RandDue)==risposta) { 

            printf("Corretto\n");
            punteggio=punteggio+1;

        }

        else {

            printf("Sbagliato\n");
        }

    RandUno = rand()%10+1;
    RandDue = rand()%10+1; 
    printf("Quanto fa %d x %d ? ", RandUno,RandDue);
    scanf("%d",&risposta); 

        if((RandUno*RandDue)==risposta) { 

            printf("Corretto\n");
            punteggio=punteggio+1;

        }

        else {

            printf("Sbagliato\n");
        }

    RandUno = rand()%10+1;
    RandDue = rand()%10+1; 
    printf("Quanto fa %d x %d ? ", RandUno,RandDue);
    scanf("%d",&risposta);

        if((RandUno*RandDue)==risposta) { 

            printf("Corretto\n");
            punteggio=punteggio+1;

        }

        else {

            printf("Sbagliato\n");
        }

    // Controllo finale della risposta

    switch (punteggio) {

    case 4:
        printf("4  risposte esatte (su 4) eccellente! ");
        break;
    
    case 3:
        printf("3  risposte esatte (su 4) buono! ");
        break;

    case 2:
        printf("2  risposte esatte (su 4) sufficiente! ");
        break;

    case 1:
        printf("1  risposte esatte (su 4) scarso! ");
        break;

    case 0:
        printf("0  risposte esatte (su 4) torna alle elementari! ");
        break;
    
    
    }
    
    return 0;

}

