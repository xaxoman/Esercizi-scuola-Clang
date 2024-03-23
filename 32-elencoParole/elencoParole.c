#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 22/04/2024

    ESERCIZIO: 
    Scrivi un programma che memorizza un elenco di 6 parole inserite dall’utente. Successivamente attraverso un menu l’utente può:
        1. specificare un numero e il programma stampa a video la parola corrispondente (0 - prima parola, 1 - seconda parola, ecc...). 
        2.  stampare a video la parola più lunga.
        3.  inserita una nuova parola cercare se la parola esiste nell’elenco e in caso positivo comunicare quale è la sua posizione.
*/

#define dim 30  // RICORDATI CHE LE STRINGHE SONO GIA' ARRAY DI CARATTERI, SE VUOI AVERE PIU' STRINGHE TI SERVONO GLI ARRAY MULTIDIMENSIONALI COME array[dim][dim];
#define PAROLE_CONST 6

void memorizzaParole(char parole[PAROLE_CONST][dim]) {

    for(int i = 0; i<PAROLE_CONST; i++) {
        printf("Inserisci la parola %d: ",i+1);
        scanf("%s",parole[i]);
    }
}

void numeroParola(char parole[PAROLE_CONST][dim]) {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d",&numero);
    printf("La parola corrispondente e' %s\n",parole[numero]);
}

void parolaMax(char parole[PAROLE_CONST][dim]) {
    int max = 0;
    for(int i = 0; i<PAROLE_CONST; i++) {
        if(strlen(parole[i])>max) {
           max = strlen(parole[i]);
           strcpy(parole[max],parole[i]);
        }
    }
    printf("La parola piu' lunga e' %s\n",parole[max]);
}

int trovaParola(char parole[PAROLE_CONST][dim], char ParolaUtente[]) {
    printf("Inserisci la parola da cercare: ");
    scanf("%s",ParolaUtente);
    for(int i = 1; i<PAROLE_CONST; i++) {
        if(strcmp(parole[i],ParolaUtente)==0) {
            printf("La parola si trova nella posizione %d\n",i);
        }
    }
    printf("La parola non si trova nell'elenco\n");
    return 0;

}

int main(){

    char parole[PAROLE_CONST][dim], parolaTrovare[30];
    int scelta;
    
    // inserisci le parole nell'array
    memorizzaParole(parole);


    while(scelta!=4) {

        printf("\n1) specifica un numero e trova la parola corrispondente\n2) stampa la parola piu' lunga\n3) inserisci una parola e controlla se si trova nell'elenco\n4) Esci\n\n");
        printf("Fai la tua scelta: ");
        scanf("%d",&scelta);

            switch (scelta) {
            
            case 1:
                numeroParola(parole);
            case 2:
                parolaMax(parole);
            case 3:
                trovaParola(parole, parolaTrovare);
            default:
                break;
        }
    }

    return 0;

}

