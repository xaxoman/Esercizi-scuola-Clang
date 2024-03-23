#include <stdio.h>

/*
    Dennis Xhafaj 3IC 16/12/2023

    ESERCIZIO: 
    Scrivere una funzione che riceve un parametro intero m che assume un valore tra 1 e 12
    e stampa il mese corrispondente al numero m. Ad esempio, se m fosse 2 la funzione dovrebbe
    stampare febbraio. Se m è un valore minore di 1 o maggiore di 12 la funzione non deve stampare
    nulla. Scrivere poi un programma che usa la funzione scritta per scrivere una data per esteso
    (es. 14/11/2023 --> 14 novembre 2023)
*/

 void MeseCorrispondente(int m) {

    switch (m) {
    case 1:
        printf("Gennaio");
        break;
    case 2:
        printf("Febbraio");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Aprile");
        break;
    case 5:
        printf("Maggio");
        break;
    case 6:
        printf("Giugno");
        break;
    case 7:
        printf("Luglio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Settembre");
        break;
    case 10:
        printf("Ottobre");
        break;
    case 11:
        printf("Novembre");
        break;
    case 12:
        printf("Dicembre");
        break;
    
    default:
        printf("In numero del tuo mese non e' valido ");
        break;
    }

}

int main(){
    
    int g,m,a; // giorno mese anno

    printf("Inserisci la data odierna nel formato GG/MM/AA: ");
    scanf("%d/%d/%d",&g,&m,&a);


    // trasformo la data con il mese in forma letteraria
    printf("%d ", g);
    MeseCorrispondente(m); // separo i printf in modo da non avere problemi con la funzione dentro la printf
    printf(" %d\n", a);
    return 0;

}

