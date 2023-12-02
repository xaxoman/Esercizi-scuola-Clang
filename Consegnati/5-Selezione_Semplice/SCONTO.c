#include <stdio.h>

int main(){
    
    int quantita; 
    float prezzo, tot;
    const float sconto = 0.05;


    printf("Inserisci la quantita': ");
    scanf("%d",& quantita);
    printf("Inserisci il prezzo: ");
    scanf("%f",& prezzo);

    tot = prezzo*quantita;
    
    if(tot > 100) {

        tot = tot-(tot*sconto);
        printf("Il totale pagato e' %.2f ed e' stato applicato uno sconto del 5 per cento", tot);


    }

    else {

        printf("Il tuo totale e' %.2f", tot);
    }
    return 0;

}

