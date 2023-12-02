#include <stdio.h>

/*
    Dennis Xhafaj 3IC 7/10/2023

    ESERCIZIO:
    La prima volta che l'uomo è andato sulla Luna è stato il 1969. 
    Creare un programma in C che chiede l'anno di nascita all'utente e gli risponde 
    se è nato l'anno in cui l'uomo è andato sulla Luna o quanti anni prima o quanti anni dopo.
*/

int main(){
    
    int Compleanno;

    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d",&Compleanno);

    if(Compleanno==1969) {

        printf("Sei nato lo stesso anno in cui l'uomo e' andato sulla Luna! ");

    }

    else {

        if(Compleanno<1969) {

            int Prima = 1969-Compleanno;
            printf("Sei nato %d anni prima dell'uomo che e' andato sulla luna...sei vecchio", Prima);
         }

         else {

             int Dopo = Compleanno-1969;
             printf("Sei nato %d anni dopo l'uomo che e' andato sulla luna", Dopo);  
         }

      
        
    }

    

    return 0;

}

