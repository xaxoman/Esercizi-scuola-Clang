#include <stdio.h>

/*
    Dennis Xhafaj 3IC 4/11/2023

    ESERCIZIO:
    FIZZBUZZ
    Scrivi un programma in C che stampi tutti i numeri da 1 a 100 mediante un ciclo a conteggio (for). 

    Per ogni numero, se è divisibile per 3, stampare "Fizz" al posto del numero. Se è divisibile per 5, stampare "Buzz" 
    al posto del numero. Se è divisibile sia per 3 che per 5, stampare "FizzBuzz".

*/

int main(){
    
    for(int i = 1; i<100 ; i++) {

        if(i%3==0) {

            printf("Fizz\n");
        }

        else if (i%5==0) {

            printf("Buzz\n");
        }

        else if((i%3==0) && (i%5==0)) {

            printf("FizzBuzz\n");
        }

        else {

            printf("%d\n",i);
        }


    }

    return 0;

}

