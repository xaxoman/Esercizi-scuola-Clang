#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
    Scrivi un programma in C che permette di verificare l'immissione 
    di un codice alfanumerico di sicurezza di almeno 10 caratteri.
    Il programma chiede di inserire due volte il codice, verificando
    che la sua lunghezza sia corretta e che sia stato digitato correttamente ( i due inserimenti coincidono ).
*/

const int MaxDim = 30;

void Verifica(char codice[]) {

    while(strlen(codice)<10) {

        printf("Il codice deve contenere almeno 10 caratteri, riprova: ");
        scanf("%s",codice);
    }

    
}

void VerificaDoppia(char codice[], char codiceVerifica[]) {

   while(strcmp(codice,codiceVerifica)!=0) {

        printf("I due codici sono diversi, riprova: ");
        scanf("%s",codiceVerifica);
   }

   printf("Ottimo, la tua password e' stata registrata.");
}


int main(){
    
    char Codice[MaxDim], codiceVerifica[MaxDim];
    printf("Inserisci il tuo codice alfanumerico (almeno 10 caratteri): ");
    scanf("%s",Codice);
    Verifica(Codice);
    printf("Inserisci lo stesso codice un'altra volta: ");
    scanf("%s",codiceVerifica);
    VerificaDoppia(Codice, codiceVerifica);
    return 0;

}

