#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 14/04/2024

    ESERCIZIO: 
    Vogliamo una applicazione per aiutare un utente a consultare l'orario di un tragitto di un treno.
    Definire una struttura Stazione che contiene il nome della  stazione e l'orario di partenza in ore e minuti.
    Definire un tragitto come un array di 10 Stazioni (l'orario deve essere crescente)

    NomeStazione1
    9:10
    NomeStazione2
    9:25
    NomeStazione3
    10:12
    NomeStazione4
    10:45
    ...

    potete caricare dati in fase di dichiarazione nel codice

    Data stazione i partenza e stazione di arrivo quanto dura il viaggio (in ore e minuti).
*/

#define num_stazioni 10

struct Stazione {

    char stazione[30];
    int ore;
    int min;

};


void calcolaTragitto(struct Stazione Treni[], int partenza, int arrivo) {

    // trasformo l'orario in minuti per fare il calcolo
    int partenzaMin = (Treni[partenza].ore*60)+Treni[partenza].min;
    int arrivoMin = (Treni[arrivo].ore*60)+Treni[arrivo].min;
    int tragitto,h,m;
       
        tragitto = abs(partenzaMin-arrivoMin); // con abs() si evita di avere un numero negativo (se l'arrivo è prima della partenza
        h = tragitto/60;
        m = tragitto%60;
        printf("Il tragitto dura: %d:%d",h,m);
    
}

int main(){
        int partenza,arrivo;
        struct Stazione Treni[num_stazioni] = {

            {"Stazione1", 9, 10},
            {"Stazione2", 9, 25},
            {"Stazione3", 10, 12},
            {"Stazione4", 10, 45},
            {"Stazione5", 11, 30},
            {"Stazione6", 12, 15},
            {"Stazione7", 13, 0},
            {"Stazione8", 13, 45},
            {"Stazione9", 14, 30},
            {"Stazione10", 15, 15}

        };
    

    for(int i=0; i<num_stazioni; i++) {

        printf("\n- Stazione %d -\n\n",i+1);
        printf("Nome -> %s \n", Treni[i].stazione);
        printf("Partenza-> %d:%d \n", Treni[i].ore, Treni[i].min);
      
    }

    printf("\nInserisci la partenza (num stazione): ");
    scanf("%d",&partenza);
    printf("Inserisci l'arrivo (num stazione): ");
    scanf("%d",&arrivo);

    calcolaTragitto(Treni, partenza-1, arrivo-1);

    return 0;

}

