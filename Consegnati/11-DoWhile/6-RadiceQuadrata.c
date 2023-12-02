#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO: 
     Secondo la formula di Newton se x è un'approssimazione della radice quadrata di a allora (a+x/a)/2 è un'approssimazione 
     migliore. Scrivi un programma che calcola la radice quadrata di un numero utilizzando la formula di Newton: 
     inizia con un valore approssimato di x = a/2, quindi applica ripetutamente la formula fino a quando la differenza assoluta tra il nuovo valore 
     di x e il precedente valore è inferiore ad una quantità predefinita (tolleranza).
*/

int main(){
    
    double sqrt, a, xUno;
    const double tollera = 0.00001;
    
    printf("Inserisci il radicando: ");
    scanf("%lf",&a);

    if(a<2) {

        printf("%lf",a); // la radice quadrata di 1 e 0 sono se stessi
    }

    xUno = a;
    
    while(fabs(xUno-sqrt)>=tollera) {

        xUno = sqrt;
        sqrt = (xUno+(a/xUno))/2;
            

    }

    printf("%.2lf", sqrt);

    return 0;

}

