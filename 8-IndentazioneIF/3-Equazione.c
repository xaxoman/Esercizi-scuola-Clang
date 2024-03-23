#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 7/10/2023

    ESERCIZIO: 
    Scrivi un programma in C che dati i tre coefficienti a, b e c di un'equazione di secondo grado 
    ax^2 + bx + c = 0 ne calcola e visualizza le radici. 
    Considerare il caso in cui a è zero (equazione degenere) e il delta è negativo (soluzioni reali inesistenti).
*/

int main(){
    
    float a,b,c,delta,ris1,ris2;

    printf("Inserisci i tre coefficenti (a,b,c) separati da spazio: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0) {

        printf("Il tuo coefficente (a) e' uguale a zero, percio' l'equazione non e' di secondo grado");

    }

    else {

        delta = pow(b,2)-4*(a*c); // Calcolo il delta 

        if(delta<0) {

            printf("Delta e' negativo percio' non esistono soluzioni reali");
        }

       else {

        // Calcolo le due x
          ris1 = (-b-sqrt(delta))/(2*a); 
          ris2 = (-b+sqrt(delta))/(2*a);
          printf("Le tue X sono %f e %f", ris1, ris2);
       }

        
    }



    return 0;

}

