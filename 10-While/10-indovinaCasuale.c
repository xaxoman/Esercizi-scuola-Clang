#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 19/10/2023

    ESERCIZIO: 
    Scrivi un programma in C che realizza un gioco in cui l'utente deve indovinare un numero nascosto compreso tra 1 e 1000 
    (estratto casualmente dal computer). Ad ogni tentativo il programma comunica al giocatore se il numero nascosto è maggiore 
    o minore rispetto al tentativo. Quando il numero viene indovinato il programma comunica il numero di tentativi fatti.
*/

int main(){
    
    int RandNumber, UserInput;

    int i = 0;

    srand(time(0));
    RandNumber = rand()%1000+1;
    printf("Un numero casuale tra 1 e 1000 e' stato generato, prova a indovinarlo: ");
    scanf("%d",&UserInput); 

    while(UserInput!=RandNumber) {
        i = i+1;

        if(UserInput>RandNumber) {

            printf("Inserisci un numero piu' piccolo: ");
            scanf("%d",&UserInput); 
        }

        else if(UserInput<RandNumber) {

            printf("Inserisci un numero piu' grande: ");
            scanf("%d",&UserInput); 

        }   
    }

    printf("I due numeri %d e %d sono uguali, finito in %d tentativi ",RandNumber,UserInput,i);
    return 0;

}

