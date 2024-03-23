#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 16/12/2023

    ESERCIZIO: 
    Scrivere una funzione che riceve due parametri x e b entrambi di tipo double e calcola il
    logaritmo in base b di x. Scrivere poi un programma che usa la funzione scritta.
    Suggerimento: usare la funzione log della libreria math.h e la formula per il cambio di base dei
    logaritmi.
*/

double Logaritmo(double b, double x) {
    
    return  log(x) / log(b); 

}

int main(){
    
    double base, esp, log;

    printf("Inserisci la base e l'esponente: ");
    scanf("%lf %lf", &base, &esp);

    log = Logaritmo(base, esp);
    printf("%.2lf\n", log);

    return 0;

}

