#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 17/02/2024

    ESERCIZIO: 
    Classico gioco dove l'utente deve indovinare una parola nascosta (inserita all'inizio da un secondo giocatore) 
    scoprendo le lettere da cui è formata. Ad ogni tentativo viene proposta una lettera, se presente viene mostrata 
    nella parola mentre se assente si perde un tentativo. Se vince se viene indovinata la parola entro 6 tentativi, 
    altrimenti si perde e viene mostrata quale era la parola da indovinare. 
*/

const int dim = 30;

void CensuraParola(char parolaNascosta[]) { //ATTENTO A COME DICHIARI GLI ARRAY PAROLA[] NON PAROLA E BASTA

    char copertura = '-';   

    for(int i = 1; i<strlen(parolaNascosta); i++) {

        parolaNascosta[i] = copertura;
    }
}

void ControllaRisultato(char parolaNascosta[], char ParolaIndovinare[]) {   

    char ParolaUtente;
    int tentativi = 5;
    int presente = 0;

    for(int i = 0; tentativi!=0; i++) {

        printf("\n\nIndovina la parola: ");
        scanf(" %c",&ParolaUtente); // Sempre lo spazio davanti al % nei caratteri
        presente = 0;
        for(int j = 0; j<strlen(parolaNascosta); j++) {

            if(ParolaIndovinare[j]==ParolaUtente) {

                parolaNascosta[j] = ParolaUtente;
                presente++;
            }
        }

        printf("%s",parolaNascosta);
        if(presente==0) {

            tentativi--;

        }

        printf("\nHai ancora %d tentativi",tentativi);
        if(strcmp(ParolaIndovinare,parolaNascosta)==0) {

            printf("\n\nHai indovinato la parola!");
            break;
        }

        else if(tentativi==0) {

            printf("\n\nHai esaurito i tuoi tentativi");
            break;
        }
        
    }

}

int main(){
    
    char parolaNascosta[dim];
    char ParolaIndovinare[dim];

    printf("Inserisci la parola nascosta: ");
    scanf("%s",parolaNascosta);
    system("cls"); // pulisce il terminale per non far vedere al giocatore la parola nascosta
    strcpy(ParolaIndovinare, parolaNascosta);
    CensuraParola(parolaNascosta); // funzione che rende la parola nascosta

    printf("\nLa parola nascosta e' %s",parolaNascosta);
    ControllaRisultato(parolaNascosta, ParolaIndovinare);

    return 0;

}

