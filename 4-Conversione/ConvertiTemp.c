#include <stdio.h>

// Converte i gradi celsius in fahrenehit 
// Dennis Xhafaj 3IC 28/09/2023
int main(){
    
    float celsius, farenait;

    // INPUT 
    printf("Inserisci la temperatura in gradi celsius: ");
    scanf("%f",&celsius);
    // CALCOLO DELLA CONVERSIONE
    farenait = ((celsius*9)/5)+32;
    // OUTUPUT
    printf(" %.1f gradi celsius sono uguali a %.1f gradi fahrenehit", celsius, farenait);
    
    return 0;

}

