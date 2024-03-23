#include <stdio.h>

/*
    Dennis Xhafaj 3IC 10/11/2023

    ESERCIZIO: 
    in un conto corrente vengono effettuati N movimenti (il numero è specificato dall'utente all'inizio, 
    il programma effettua un controllo dell'input affinché tale numero sia positivo e non nullo, 
    altrimenti invita ad inserire un altro valore). Per ogni movimento viene poi inserito il tipo di movimento: 
    "p" per prelievo e "v" per versamento e l'importo relativo. 
    Si vuole visualizzare il saldo del conto al termine dei movimenti. Il saldo iniziale è di 1200€.
*/

int main(){
    
    int movimenti, saldo = 1200;
    char tipo;
    float versamento, prelievo;


    do { //controlla numero movimenti
        
        printf("Inserisci il numero di movimenti da effettuare: ");
        scanf("%d",&movimenti);

    } while(movimenti<1);

    for(int i = 0; i<movimenti; i++) {

        printf("inserisci il tipo di movimento: p per il prelievo e v per versamento: ");
        scanf(" %c",&tipo);

        if(tipo == 'p') { // controllo del tipo di movimento

            printf("Quanto vuoi prelevare? ");
            scanf("%f",&prelievo);

            if(saldo<prelievo) {  //controllo conto in negativo PRELIEVO

                printf("Il tuo saldo e' insufficente");
                break;
            }

            saldo = saldo-prelievo;
            printf("Hai prelevato %.2f eur, ora ti rimangono %d eur\n",prelievo,saldo);

        }

        else if (tipo == 'v') {

            printf("Quanti soldi vuoi versare? ");
            scanf("%f",&versamento);

            if(saldo<versamento) {  //controllo conto in negativo VERSAMENTO

                printf("Il tuo saldo e' insufficente");
                break;
            }

            saldo = saldo-versamento;
            printf("Hai versato %.2f eur, ora ti rimangono %d eur\n",versamento,saldo);

            
        }

        else {

            printf("Inserisci un input valido...\n");
        }


    }

    return 0;

}

