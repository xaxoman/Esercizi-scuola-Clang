#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 21/04/2024

    ESERCIZIO: 
    Definisci le strutture dati per memorizzare un mazzo di 52 carte.
    Ogni carta ha un valore (da 1 a 13) e un seme (C,Q,P,F).
    Scrivi le funzioni per:
        a. Inizializzare il mazzo di carte
        b. Visualizzare una carta (per i valori 1, 11, 12 e 13 stampare 'A', 'J', 'Q', 'K')
        c. Visualizzare tutto il mazzo di carte
        d. Mescolare il mazzo di carte (fare un centinaio di scambi casuali)
*/

#define num_carte 52

struct Mazzo_carte {

    int valore;
    char seme;
};

void generaCarteRand(struct Mazzo_carte mazzo[]) {

   

    srand(time(NULL));
    char semi[] = {'A', 'J', 'Q', 'K'};
    int indice_rand;
    
    for (int i = 0; i < num_carte; i++){
        
        mazzo[i].valore = rand()%13+1;
        indice_rand = rand()%4;
        mazzo[i].seme = semi[indice_rand];

    }
    

}

void visulizzaCarta(struct Mazzo_carte mazzo[]) {

   //  Visualizzare una carta (per i valori 1, 11, 12 e 13 stampare 'A', 'J', 'Q', 'K')
    
}

void mostraMazzo(struct Mazzo_carte mazzo[]) {

    for (int i = 0; i < num_carte; i++){
        
        printf("Carta %d -> %d %c \n",i+1, mazzo[i].valore, mazzo[i].seme);
    }
    
}

void mescolaMazzo(struct Mazzo_carte mazzo[]) {

    struct Mazzo_carte temp;
    int indice_rand1, indice_rand2;

    for (int i = 0; i < 100; i++){
        
        indice_rand1 = rand()%num_carte;
        indice_rand2 = rand()%num_carte;

        temp = mazzo[indice_rand1];
        mazzo[indice_rand1] = mazzo[indice_rand2];
        mazzo[indice_rand2] = temp;

    }
}

int main(){
    
    struct Mazzo_carte carte[num_carte];
    int scelta;

    generaCarteRand(carte);

    
    do {

        printf("MENU\n\n 1 - Visualizza una carta\n 2 - Visualizza tutto il mazzo\n 3 - Mescola il mazzo\n 4 - Esci\n\nScelta:");
        scanf("%d",&scelta);

        switch (scelta){
        case 1:
            visulizzaCarta(carte);
            break;
        case 2:
            mostraMazzo(carte);
            break;
        case 3:
            mescolaMazzo(carte);
            break;
        case 4:
            printf("Sei uscito");
        default:
            break;
        }

    }while(scelta!=4);

    return 0;

}

