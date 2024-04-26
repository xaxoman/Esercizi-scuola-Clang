#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 23/03/2024

    ESERCIZIO: 
    Gestire la classifica di 6 atleti che hanno ottenuto un punteggio in una gara. 
    Si devono gestire il nominativo e il relativo punteggio.
    Deve essere possibile visualizzare la tabella in ordine alfabetico di nominativo o in ordine decrescente di punteggio. 
    Mostra un apposito menu di scelte.

    Nota: si devono utilizzare due array paralleli, uno per il nominativo e uno per il punteggio, mantenendoli sempre allineati. 
    Scrivi due funzioni di ordinamento: una per nominativo e una per punteggio.
*/

#define num_atleti 6

void ordinaNominativo(char atleti[num_atleti][20], float punteggio[num_atleti]){

    // ordina in ordine alfabetico crescente i nomi
    char temp[20];
    int y,scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<num_atleti-1; y++) {  

           if(strcmp(atleti[y],atleti[y+1])>0){
                strcpy(temp,atleti[y]);
                strcpy(atleti[y],atleti[y+1]);
                strcpy(atleti[y+1],temp);
                scambi=1;
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1

    for(int i=0; i<num_atleti; i++) {

        printf("%s -> %2.f \n", atleti[i], punteggio[i]);
    }
}

void ordinaPunteggio(char atleti[num_atleti][20], float punteggio[num_atleti]){

    // ordina in ordine descrescente i punteggi 
    
    int y;
    float tempPunteggio;
    char tempAtleti[20];
    int scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<num_atleti-1; y++) {  

            if(punteggio[y] < punteggio[y+1]) { // se ne trovo uno maggiore li scambio tra loro
                tempPunteggio = punteggio[y];
                punteggio[y] = punteggio[y+1];
                punteggio[y+1] = tempPunteggio;

                strcpy(tempAtleti, atleti[y]);
                strcpy(atleti[y], atleti[y+1]);
                strcpy(atleti[y+1], tempAtleti);

                scambi = 1; 
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1

    for(int i=0; i<num_atleti; i++) {

        printf("%s -> %.2f \n", atleti[i], punteggio[i]);
    }
}

int main(){
    int scelta=0;
    char atleti[num_atleti][20] = {"Dennis", "Giovanni", "Luca", "Marco", "Andrea", "Francesco"};
    float punteggio[num_atleti] = {10.0, 8.0, 9.0, 7.0, 4.0, 5.0};


    do {
        printf("\nMENU\n 1. Ordina per nominativo\n 2. Ordina per punteggio\n 3. Esci\n\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                ordinaNominativo(atleti, punteggio);
                break;
            case 2:
                ordinaPunteggio(atleti, punteggio);
                break;
            case 3: 
                printf("Sei uscito");
    
        }

    }while(scelta!=3);

    return 0;

}

