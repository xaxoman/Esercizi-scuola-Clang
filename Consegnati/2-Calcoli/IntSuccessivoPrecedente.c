#include <stdio.h>

// DENNIS XHAFAJ 3IC 

int main(){
    
    // CALCOLA I IL SUCCESSIVO E IL PRECEDENTE DI UN NUMERO INTERO
    int numero, succ, prec;
    printf("Inserisci un numero intero: ");
    scanf("%d",&numero);
    succ = numero+1;
    prec = numero -1;
    printf("il successivo e il precedente del numero %d sono rispettivamente %d e %d",numero,succ,prec); //neò printf non vanno le e commerciali
    return 0;

}