#include <stdio.h>

int main(){

    int ore,min,sec,ris;

    //CALCOLA I SECONDI PASSATI DOPO LA MEZZANOTTE, FORMATO ORE:MINUTI:SECONDI
    printf("inserisci il tuo attuale orario nel formato H:M:S ");
    scanf("%d:%d:%d",&ore,&min,&sec);
    printf("il tuo orario e' %d %d %d \n", ore,min,sec);
    
    // converti valori in secondi
    ore = ore*3600;
    min = min*60;
    ris =  ore+min+sec;
    printf("I secondi passati dopo la mezzanotte sono %d",ris); //stampa risultato
    return 0;
}