#include <stdio.h>

/*
    Dennis Xhafaj 3IC 27/11/2023

    ESERCIZIO:
    Scrivere una funzione che riceve in ingresso tre numeri interi h, m e s che rappresentano ore minuti e secondi e restituisce il numero
    di secondi trascorsi dalla mezzanotte. Scrivere una seconda funzione che riceve in ingresso un numero intero che rappresenta 
    un valore in secondi e stampa a video ore , minuti e secondi corrispondenti.
    Scrivere poi un programma che usa queste funzioni per calcolare il tempo in ore, minuti e secondi trascorsi tra due orari 
    entrambi contenuti entro il ciclo di una giornata. 
    Ad esempio, se i due orari inseriti fossero 12:30:00 e 13:40:30 il programma dovrebbe stampare: sono trascorsi 1 ora,
     10 minuti 30 secondi.
*/

int SecondiMezzanotte(int h1, int m1, int s1) {

    return h1*3600 + m1*60 + s1;

}

int DifferenzaOrari(int h1, int m1, int s1,int h2, int m2, int s2) {

    

       int OreNuovo = h1-h2;
       int MinNuovo = m1-m2;
       int SecNuovo = s1-s2;

       if((OreNuovo < 0) || (MinNuovo < 0) || (SecNuovo < 0) ) {

          printf("sono trascorsi %d h, %d min e %d sec", -OreNuovo, -MinNuovo, -SecNuovo);
       }

       else {

          printf("sono trascorsi %d h, %d min e %d sec", OreNuovo, MinNuovo, SecNuovo);
       }

}



int main(){
    
int differenza, h1,m1,s1, h2,m2,s2;    

    printf("Gli orari sono da scrivere nel formato HH:MM:SS\n\n");
    
    printf("Inserisci il primo orario: ");
    scanf("%d:%d:%d",&h1,&m1,&s1);

    printf("Inserisci il secondo orario: ");
    scanf("%d:%d:%d",&h2,&m2,&s2);
   
    differenza = DifferenzaOrari(h1,m1,s1,h2,m2,s2);
    
    
    return 0;

}

