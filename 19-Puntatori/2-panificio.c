#include <stdio.h>

/*
    Dennis Xhafaj 3IC 26/12/2023

    ESERCIZIO:
    Considerare la situazione di un panificio in cui ci sono tre fornai che attingono dallo 
    stesso sacco di farina per realizzare ognuno i prodotti per cui è incaricato della produzione: 
    il primo prepara il pane, il secondo la pasta e il terzo la pizza.
    Si modelli la quantità del sacco di farina con una variabile passata per riferimento inizialmente 
    posta a 5 kg e si realizzino delle funzioni una per ciascun fornaio/prodotto che riceve l’ordinazione 
    per quanti pezzi e vada a prepararli; se c’è farina sufficiente prepara il numero di pezzi richiesto, 
    altrimenti prepara il numero di pezzi che riesce a preparare con la farina a disposizione.
    Si consideri che per un panino sono necessari 100 gr di farina, per un pezzo di pizza 80 gr e per una 
    porzione di pasta 75 gr.
    Si crei un menu in cui si chiede all’utente cosa vuole ordinare o se vuole uscire dal programma; 
    dopo ogni ordine si stampi cosa effettivamente è stato consegnato dell’ordine richiesto e la farina rimanente.
*/

void panino(int *quantita, int *farina) {

    int panini;
    const int FarinaPanini = 100;
    int PaniniEffettivi = *farina / FarinaPanini;

        if ((FarinaPanini * (*quantita)) > (*farina)) { // bisogna mettere il puntatore tra parentesi per non confondere l'interprete
        
        printf("Siamo spiacenti ma non abbiamo abbastanza farina...");
        
        }

        else if(PaniniEffettivi == *quantita) {


        }

        else {

           int PaniniEffettivi = *farina / FarinaPanini;
            printf("Siamo riusciti a fare %d panini, prego e buon appetito. (%dg farina rimasta)",, *farina);

        }    
}

void pizza(int *quantita, int *farina) {

    const int FarinaPizza = 80;

    if ((FarinaPizza * (*quantita)) > (*farina)) { // bisogna mettere il puntatore tra parentesi per non confondere l'interprete
        
        printf("Siamo spiacenti ma non abbiamo abbastanza farina...");
    }

    else {

        *farina = (*farina)-(FarinaPizza * (*quantita));
        printf("Siamo riusciti a fare tutte le fette di pizza, prego e buon appetito. (%dg farina rimasta)", *farina);

    }

}

void pasta(int *quantita, int *farina) {

    const int FarinaPasta = 75;

    if ((FarinaPasta * (*quantita)) > (*farina)) { // bisogna mettere il puntatore tra parentesi per non confondere l'interprete
        
        printf("Siamo spiacenti ma non abbiamo abbastanza farina...");
    }

    else {

        *farina = (*farina)-(FarinaPasta * (*quantita));
        printf("Siamo riusciti a fare tutti i piatti richiesti, prego e buon appetito. (%dg farina rimasta)", *farina);

    }

}


int main(){
    
    int scelta, quantita, farina=5000; // 5kg 

   do {

    printf("\n BENVENUTO AL RISTORANTE SPAGHETTI PROGRAMMING\n\n1) Panino\n2) Pizza\n3) Pasta\n4) Esci\n\nFai la tua scelta: ");
    scanf("%d",&scelta);

    switch (scelta) {
    case 1:
        printf("Ottima scelta, quanti panini vuole? ");
        scanf("%d",&quantita);
        panino(&quantita, &farina);
        break;
    case 2:
        printf("Ottima scelta, quante fette di pizza vuole ? (1 pizza => 8 fette ) ");
        scanf("%d",&quantita);
        pizza(&quantita, &farina);
        break;
    case 3:
        printf("Ottima scelta, quanti piatti di pasta pasta vuole? ");
        scanf("%d",&quantita);
        pasta(&quantita, &farina);
        break;
    case 4:
        printf("Grazie e arrivederci!");
        break;
    
    default:
        printf("Fai una scelta tra le opzioni (1-2-3-4)");
        break;
    }

   } while (scelta!=4);
   
   
    return 0;

}

