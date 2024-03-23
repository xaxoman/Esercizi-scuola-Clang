#include <stdio.h>

/*
    Dennis Xhafaj 3IC 20/01/2024

    ESERCIZIO: 
    Si vogliono memorizzare i goal fatti da due calciatori (usare due diversi array, uno per ogni giocatore) 
    durante un campionato in cui si sono giocate 4 partite. I valori sono inseriti dall’utente. 
    Scrivi un programma in c per stabilire:

    a. Il totale dei goal di un giocatore 

    b. La media di goal per partita di un giocatore 

    c. Quale giocatore ha fatto più goal in una certa partita 

    d. Ricercare in quale partita un giocatore ha fatto un certo numero di goal.
*/

int main(){

    const int partite = 4;
    
    int giocatore1[partite], goal1,media1=0;
    int giocatere2[partite], goal2,media2=0;
    
    for(int i = 0; i<partite ; i++) {
        // input gol
        printf("Inserisci i goal fatti dal calciatore 1 nella partita %d",i);
        scanf("%d",&goal1);

        printf("Inserisci i goal fatti dal calciatore 2 nella partita %d",i);
        scanf("%d",&goal2);
        
        //a. Il totale dei goal di un giocatore 
        media1 = media1+goal1;
        media2 = media2+goal2;

        // c. Quale giocatore ha fatto più goal in una certa partita 
        if(goal1>goal2) {

            printf("Il giocatore 1 ha segnato piu' goal nella partita %d",i);
        }

        else if(goal1<goal2) {

            printf("Il giocatore 2 ha segnato piu' goal nella partita %d",i);
        }

        else {

            printf("pareggio per la partita %d",i);
        }
    }

    media1 = media1/partite;
    media2 = media2/partite;

    printf("Il giocatore 1 ha una media di %d gol per partita", media1);
    printf("Il giocatore 1 ha una media di %d gol per partita", media2);
    return 0;

}

