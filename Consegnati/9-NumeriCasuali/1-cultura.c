#include <stdio.h>

/*
    Dennis Xhafaj 3IC 14/10/2023

    ESERCIZIO: 
    Scrivi un programma in C che propone all'utente un quiz composto da 4 domande di cultura generale 
    a cui l'utente può rispondere vero o falso. Al termine viene comunicata la percentuale di risposte esatte.

*/

int main(){
    
    int punteggio = 0;
    int domande = 4;
    char risposta;

    printf("Rispondi alle seguenti 4 domande di cultura generale con vero o falso V/F \n\n");

    printf("1) La pizza e' stata inventata in Italia? \n"); // domanda uno
    scanf(" %c",&risposta);
    
        if((risposta == 'v') || (risposta == 'V') ) {

            punteggio = punteggio+1;
            printf("Risposta corretta!\n");
        }

        else {

            printf("sbagliato!\n");
        }

    printf("2) La torre eiffel si trova in spagna? \n"); // domanda due
    scanf(" %c",&risposta);

        if((risposta == 'F') || (risposta == 'f') ) {

            punteggio = punteggio+1;
            printf("Risposta corretta!\n");
        }

        else {

            printf("sbagliato!\n");
        }

    printf("3) I computer funzionano in binario? \n"); // domanda tre
    scanf(" %c",&risposta);

        if((risposta == 'v') || (risposta == 'V') ) {

            punteggio = punteggio+1;
            printf("Risposta corretta! \n");
        }

        else {

            printf("sbagliato!\n");
        }

    printf("4) la capitale deell'italia e' Milano? \n"); // domanda quattro
    scanf(" %c",&risposta);

        if((risposta == 'F') || (risposta == 'f') ) {

            punteggio = punteggio+1;
            printf("Risposta corretta! \n");
        }

        else {

            printf("sbagliato!\n");
        }

    printf("Il quiz e' finito il tuo punteggio e' di %d/%d", punteggio,domande);

    return 0;

}

