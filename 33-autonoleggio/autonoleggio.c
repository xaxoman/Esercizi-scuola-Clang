#include <stdio.h>
#include <string.h>


/*
    Dennis Xhafaj 3IC 29/02/2024

    ESERCIZIO: 
    Vogliamo gestire un autonoleggio. 
    Dichiarare, leggere e memorizzare in 2 vettori paralleli le seguenti informazioni:
    – Targa auto
    – Km percorsi
    sapendo che al massimo saranno presenti i dati di 5 auto.
    Si richiede di progettare un’applicazione che sia in grado di produrre i seguenti risultati:
        1. leggere i dati e caricarli nei vettori paralleli
        2. data la targa di un'auto mostrare i km percorsi.
        3. mostrare le targhe delle auto che hanno superato un dato kilometraggio (ad esempio per sapere quali auto devono fare il tagliando dei 10000 km).
*/

#define targa_dim 7
#define maxPercorso 1000000
#define macchine 5
#define limite_km 10000

void memorizzaAuto(char targa[macchine][targa_dim], int percorsi[macchine]) {

    for(int i=0; i<macchine; i++) {
        printf("|AUTO %d| Inserisci la targa: ",i+1);
        scanf("%s",targa[i]);
        printf("|AUTO %d| Inserisci i km percorsi: ",i+1);
        scanf("%d",&percorsi[i]);
    }

    printf("\nAuto registrare correttamente.\n");
}


void mostraPercorsi(char targa[macchine][targa_dim], int percorsi[macchine]) {
    char targa_utente[targa_dim];
    printf("Inserisci la tua targa: ");
    scanf("%s",targa_utente);

    for(int i=0; i<macchine; i++) {

        if(strcmp(targa_utente,targa[i])==0) {

            printf("Questa macchina ha percorso %d km",percorsi[i]);
        }   

        else {
            printf("Non e' stata trovata una macchina con questa targa.");
        }
    }
}

void limiteMacchina(char targa[macchine][targa_dim], int percorsi[macchine]) {

    for(int i=0; i<macchine; i++) {

        if(percorsi[i]>=limite_km) {

            printf("L'auto con targa %s ha superato il limite (%d km percorsi)\n", targa[i],percorsi[i]);
        }
    }
    
}


int main(){
    
    char Targa[macchine][targa_dim];
    int Km_percorsi[macchine], scelta;

    memorizzaAuto(Targa, Km_percorsi);

    while(scelta!=3) {
        printf("1) Inserisci la targa e mostra i km percorsi\n2) Mostrare le targhe delle auto che hanno superato un dato kilometraggio\n3) Esci\n\n");
        printf("Fai la tua scelta: ");
        scanf("%d",&scelta);

        switch(scelta) {

        case 1:
         mostraPercorsi(Targa,Km_percorsi);
            break;
        case 2:
         limiteMacchina(Targa,Km_percorsi);
            break;
        }
    }
   
    return 0;

}

