#include <stdio.h>

/*
    Dennis Xhafaj 3IC 2/11/2023

    ESERCIZIO:
    DIVISORI. Scrivere un programma in C che letto un numero intero n scrive tutti i suoi divisori
    Es. inserendo 18 scrive 2, 3, 6, 9
*/

int main(){
    
    int num,i;

    printf("Inserisci un numero intero: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++) { //Modulo di 0 non si può fare, per questo il ciclo non funzionava

        if (num%i==0) {

            printf("%d e' divisore di %d\n",i,num);
           
        }
        
    } 

    return 0;

}

