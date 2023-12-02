#include <stdio.h>

/*
    Dennis Xhafaj 3IC 21/10/2023

    ESERCIZIO:
    Presentare il seguente menù di scelta:

    1)somma
    2)differenza
    3)prodotto
    4)quoziente
    5)uscita

    Leggere la variabile scelta (di tipo intero) e validarne l'input (accettare solo i valori ammissibili e
    ripetere la scelta finché il tasto premuto non è uguale a 5). Simulare le operazioni aritmetiche con un semplice messaggio. 
*/

int main(){
    
    int opzione,a,b, calcolo;

    printf("1)somma\n2)differenza\n3)prodotto\n4)quoziente\n5)uscita\n\nScegli una delle segeuenti opzioni: ");
    scanf("%d",&opzione);

    // ciclo do-while che controlla l'input, se risulta corretto effettua il calcolo 3 mostra il menù finché l'utente non preme 5
    do {

        if((opzione>5)||(opzione<0)) {

            printf("Hai inserito un'opzione sbagliata, riprova: ");
            scanf("%d",&opzione);
        }

        else {

            // Definisce le opzioni e i calcoli in base alla scelta fatta
            switch (opzione) {
            case 1:
                printf("Hai scelto somma\nInserisci i due numeri: ");
                scanf("%d %d",&a,&b);
                calcolo = a+b;
                printf("Risultato: %d\n", calcolo);
                printf("1)somma\n2)differenza\n3)prodotto\n4)quoziente\n5)uscita\n\nScegli una delle segeuenti opzioni: ");
                scanf("%d",&opzione);
                break;
            case 2:
                printf("Hai scelto differenza\nInserisci i due numeri:  ");
                scanf("%d %d",&a,&b);
                calcolo = a-b;
                printf("Risultato: %d\n", calcolo);
                printf("1)somma\n2)differenza\n3)prodotto\n4)quoziente\n5)uscita\n\nScegli una delle segeuenti opzioni: ");
                scanf("%d",&opzione);
                break;
            case 3:
                printf("Hai scelto prodotto\nInserisci i due numeri:  ");
                scanf("%d %d",&a,&b);
                calcolo = a*b;
                printf("Risultato: %d\n", calcolo);
                printf("1)somma\n2)differenza\n3)prodotto\n4)quoziente\n5)uscita\n\nScegli una delle segeuenti opzioni: ");
                scanf("%d",&opzione);
                break;
            case 4:
                printf("Hai scelto quoziente\nInserisci i due numeri:  ");
                scanf("%d %d",&a,&b);
                calcolo = a%b;
                printf("Risultato: %d\n", calcolo);
                printf("1)somma\n2)differenza\n3)prodotto\n4)quoziente\n5)uscita\n\nScegli una delle segeuenti opzioni: ");
                scanf("%d",&opzione);
                break;
            }

        }
          
    } while (opzione!=5);

    return 0;

}

