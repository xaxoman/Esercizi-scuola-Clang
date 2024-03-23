#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 18/11/2023

    ESERCIZIO: 
    1. DISTANZA
    Scrivere una funzione che riceva in ingresso le coordinate x, y di due punti del piano cartesiano e restituisca la loro 
    distanza. Scrivere successivamente un programma che richieda in input le coordinate di un punto A e ne visualizzi la 
    distanza da un punto B utilizzando la funzione indicata.
*/

 // meglio scrivere le funzioni prima del main();
    
    double distanza(double x1, double y1, double x2, double y2) { // dichiara il tipo per ogni variabile altrimenti il default è int

        double d;
        d = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2)); // ATTENTO ALLE PARENTESI

        return d; 
    }

int main(){

    double x1,y1,x2,y2, valFinale;
    printf("Inserisci le cordinate X e Y del PRIMO punto: ");
    scanf("%lf %lf",&x1,&y1);
    printf("Inserisci le cordinate X e Y del SEOCONDO punto: ");
    scanf("%lf %lf",&x2,&y2);

   valFinale = distanza(x1,y1,x2,y2);
   printf("%.2lf", valFinale);
    
    return 0;

}

