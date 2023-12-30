#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/12/2023

    ESERCIZIO: 
     Scrivere una funzione che riceva in ingresso i coefficienti angolari m1 e m2 di due rette espresse nella forma y = mx + q, 
     valuti la loro perpendicolarità e restituisca il valore 1 se le rette sono perpendicolari oppure 0 se le rette non sono 
     perpendicolari. Scrivi poi un main per provare la funzione  chiede all'utente di inserire i coefficienti di due rette e 
     mostra il messaggio opportuno in base al valore restituito dalla funzione).
     nb. due rette sono parallele se hanno lo stesso coefficiente m cioè m1=m2, mentre sono perpendicolari se hanno coefficienti 
     opposti e reciproci ovvero.
*/

void Perpendicolari(float m1, float m2) {

    int perpendicolare = 0;

    if((m1*m2) == -1) {

        printf("Le due rette sono perpendicolari");
    }

    else if(m1==m2) {

       printf("Le due rette sono PARALLELE");
    }

    else {

        printf("Le due rette non sono perpendicolari");
    }
}

int main(){

    float m1, m2, StampaFunzione;

    printf("Inserisci i due coefficienti angolari: ");
    scanf("%f %f",&m1,&m2);

    Perpendicolari(m1,m2);
    
    
    return 0;

}

