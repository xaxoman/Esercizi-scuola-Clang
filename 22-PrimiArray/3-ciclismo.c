#include <stdio.h>

/*
    Dennis Xhafaj 3IC 20/01/2024

    ESERCIZIO: 
    Un array di numeri interi contiene le altitudini delle 12 tappe di una gara ciclistica. 
    Realizza un programma che calcola la tappa più ardua, ovvero quella in cui i ciclisti devono 
    affrontare il dislivello più grande in salita. Il programma deve visualizzare  sullo schermo 
    il numero della tappa di arrivo e il dislivello calcolato.

*/

// https://www.codingcreativo.it/massimo-elemento-di-un-vettore/

const int LunArray = 12+1;

float dislivelloPercorso(float pendenza, float lun) {

    float dislivello = pendenza*lun;

    return dislivello;
}

int main(){ // Dislivello (m) = Pendenza (%) * Lunghezza Percorso (m) 
    
    int Tappe[12];
    int lunghezzaPercorso, p;
    float pendenza, dislivello, max;
    
     for(int i = 1; i<LunArray ; i++) {

        printf("Inserisci la pendenza %% del percorso %d: ", i);
        scanf("%f",&pendenza);
        pendenza = pendenza/100;

        printf("Inserisci la lunghezza del percorso %d in metri: ",i);
        scanf("%d",&lunghezzaPercorso);
        
        dislivello = dislivelloPercorso(pendenza,lunghezzaPercorso);
        printf("Il dislivello del percorso %d e' di %.2f metri\n",i,dislivello);

        Tappe[i] = dislivello; // inserisco i valori di dislivello nell'array

        if(Tappe[i]>max) { // se il valore a cui corrisponde i indice è maggiore del primo

            max = Tappe[i];
            p = i; // numero della tappa
        }
    }

    printf("\nLa tappa piu' ardua e' la numero %d con un dislivello di %.2f metri", p, max);
    return 0;

}

