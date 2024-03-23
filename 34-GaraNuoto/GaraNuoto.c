#include <stdio.h>

/*
    Dennis Xhafaj 3IC 9/03/2024 

    ESERCIZIO: 
    Si voglio registrare i nomi e i tempi di una gara di nuoto di 5 partecipanti. Deve essere presentato un menù che dia la possibilità, dopo aver caricato i risultati, di scegliere fra:
        1)stampare il nome e tempo del vincitore (minimo)
        2)stampare la media dei tempi della gara
        3)stampare l'elenco di tutti i partecipanti con il risultato ottenuto
        4) modificare il tempo di un partecipante
        5)fine del programma

*/

#define Num_partecipanti 5


void stampaVincitore(char partecipanti[Num_partecipanti][30], float tempi[Num_partecipanti]) {

    float vincitore = 9999;
    int tempIndex = 0;

    for(int i=0; i<Num_partecipanti; i++) {

        if(tempi[i]<vincitore) {

            vincitore = tempi[i];
            tempIndex = i;
        }        
    }

    printf("Il vincitore e' %s con un tempo di %.2f secondi\n",partecipanti[tempIndex], vincitore);
}

float mediaTempi(float tempi[Num_partecipanti]) {

    float media = 0;

    for(int i=0; i<Num_partecipanti; i++) {

        media += tempi[i];
    }

    return media/Num_partecipanti;
}

void stampaPartecipanti(char partecipanti[Num_partecipanti][30], float tempi[Num_partecipanti]) {

    for(int i=0; i<Num_partecipanti; i++) {

        printf("\n Nome: %s | Tempo: %.2f sec\n", partecipanti[i], tempi[i]);
    }
}

void modificaTempo(char partecipanti[Num_partecipanti][30], float tempi[Num_partecipanti]) {

    int id;
    float nuovoTempo;
    printf("Inserisci il numero del partecipante: ");
    scanf("%d",&id);
    printf("Inserici il nuovo tempo: ");
    scanf("%f",&nuovoTempo);

    tempi[id-1] = nuovoTempo;

    printf("Ora il tempo di %s e' %.2f \n", partecipanti[id-1], nuovoTempo);
}

int main(){

    int scelta;
    char partecipanti[Num_partecipanti][30] = {"Matteo", "Marco", "Luca", "Giovanni", "Gesu"};
    float media, tempi[Num_partecipanti] = {10, 20, 12.5, 17.5, 15};

    
    do {

        printf("1)stampare il nome e tempo del vincitore (minimo)\n2)stampare la media dei tempi della gara\n3)stampare l'elenco di tutti i partecipanti con il risultato ottenuto\n4) modificare il tempo di un partecipante\n5)fine del programma\n\n");
        printf("Fai la tua scelta: ");
        scanf("%d",&scelta);

        switch(scelta) {

            case 1:
                stampaVincitore(partecipanti, tempi);
                break;
            case 2:
                media = mediaTempi(tempi);
                printf("La media dei tempi e' %.2f sec\n", media);
                break;
            case 3:
                stampaPartecipanti(partecipanti, tempi);
                break;
            case 4:
                modificaTempo(partecipanti, tempi);
                break;
        }

    }while(scelta!=5);

    return 0;

}

