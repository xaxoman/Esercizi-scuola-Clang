#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 4/11/2023

    ESERCIZIO: 
    Il metodo Monte Carlo è un'ampia classe di metodi computazionali basati sul campionamento casuale per ottenere risultati numerici. Il metodo è usato per trarre stime attraverso simulazioni.

    Un esempio di uso del metodo di Montecarlo è il calcolo del valore della costante PiGreco. 

    Il programma chiede all'utente di inserire il numero di punti da generare (per una buona stima è necessario un numero elevato di punti). 
    Successivamente, viene utilizzata la funzione rand() per generare le coordinate x e y di ogni punto all'interno del quadrato unitario (con lati di lunghezza 1)
    e viene calcolata la distanza dal centro del cerchio inscritto (con raggio 1) utilizzando il teorema di Pitagora.
    Se la distanza è minore o uguale a 1, il punto si trova all'interno del cerchio e viene incrementato un contatore.

    Alla fine del ciclo, il valore di Pi Greco viene calcolato come il rapporto tra il numero di punti all'interno del cerchio e il numero totale di punti generati, moltiplicato per 4. 

    Questo perché il rapporto tra l’area del quarto di circonferenza di raggio 1 e l’area del quadrato di lato 1 è esattamente PiGreco/4.  

    AreaFetta = R*R*Pi / 4 = Pi/4
    AreaQuadrato = L*L = 1
    AreaFetta/AreaQuadrato = Pi/4

*/

int main(){
    
    int punti, puntiInterni=0;

    printf("Inserisci il numero di punti da generare [ALMENO 10K]: "); 
    scanf("%d",&punti);

    srand(time(0));

    for(int i = 1 ; i<punti ; i++) {

       float Xrand = (float)(rand()%10000)/10000;
       float  Yrand = (float)(rand()%10000)/10000;

        int pitagora = sqrt((Xrand*Xrand)+(Yrand*Yrand));

        if(pitagora<=1) {

          puntiInterni++;  // il punto si trova all'interno del cerchio
            
        }
    }

    float PiGrego = (puntiInterni/punti)*4;
    printf("Il Pigreco e' pari a %.2f", PiGrego);

    return 0;

}

