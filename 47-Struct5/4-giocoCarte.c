#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 21/04/2024

    ESERCIZIO: 
    Utilizzando il codice del programma Carte realizzare il seguenti gioco:
        1 - Vengono estratte e visualizzate 5 carte dal mazzo (mano di carte)
        2 - Il giocatore può cambiare una carta
        3- Viene visualizzata la nuova mano di carte
        3 - Viene mostrato il punteggio ottenuto calcolando 1 punto per ogni coppia di carte della mano aventi lo stesso seme o lo stesso valore.
        4 - Il gioco continua fino ad esaurimento delle carte nel mazzo
*/

#define num_carte 52

struct Mazzo_carte {

    int valore;
    char seme;
};

void generaCarteRand(struct Mazzo_carte mazzo[]) {

   

    srand(time(NULL)); 
    char semi[] = {'A', 'J', 'Q', 'K'}; // al posto delle lettere uso i codici unicode per renderlo piu carino
    int indice_rand;
    
    for (int i = 0; i < num_carte; i++){
        
        mazzo[i].valore = rand()%13+1;
        indice_rand = rand()%4;
        mazzo[i].seme = semi[indice_rand];

    }
    

}

void cambiaCarta(struct Mazzo_carte mazzo[]) {

   int indice_rand, carta_cambiare; 
   printf("Inserisci il numero della carta da cambiare (1-5): ");
   scanf("%d",&carta_cambiare);

    indice_rand = rand()%num_carte;
    mazzo[carta_cambiare-1] = mazzo[indice_rand];


    
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
        
        printf("-----------------\n");
        printf("Mano di carte: \n");
        for(int i = 0; i < 5; i++) {

            printf(" %d%c ", carte[i].valore, carte[i].seme);
        }
        printf("\n-----------------");
        printf("\n\nMENU");
        printf("\n 1 - Cambia una carta\n 2 - Visualizza tutto il mazzo\n 3 - Mescola il mazzo\n 4 - Esci\n\nScelta:");
        scanf("%d",&scelta);

        switch (scelta){
        case 1:
            cambiaCarta(carte);
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



