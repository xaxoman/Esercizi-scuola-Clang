#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO:
     Riprendi il programma dell'esercizio 9.2 e modificalo in modo che anziché proporre sempre 4 tabelline,
     si possa specificare un numero di tabelline desiderato all'inizio. 
     Naturalmente modifica il giudizio in proporzione!
*/

int main(){
    
    int RandUno, RandDue, risposta, tabellineTot;
    int punteggio = 0;
    int i = 0;
     
    
    //Chiedi in inupt quante tabelline vuole fare l'utente
    printf("Quante tabelline vuoi fare oggi? ");
    scanf("%d",&tabellineTot);

    while(i!=tabellineTot) {

             /* funzione che usa time(), ovvero una funzione che tiene conto del tempo di esecuzione del programma 
              per avere un valore diverso da inserire nel seed ogni volta che si esegue il programma: 
             */
            srand(time(0));
            // riscrivo RandUno e RandDue ogni domanda per fare in modo che i valori cambino a ogni domanda 
            RandUno = rand()%10+1; 
            RandDue = rand()%10+1;

            printf("Quanto fa %d x %d ? ", RandUno,RandDue);
            scanf("%d",&risposta); 
            i++;
        
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
    }

    // Controllo finale della risposta

        int rapporto;

        rapporto = (punteggio*100)/tabellineTot;

        printf("Gioco finito hai un punteggio del %d %%", rapporto); // usare %% per scrivere la percentuale nel printf
    
    return 0;

}

