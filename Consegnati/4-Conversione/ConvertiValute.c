#include <stdio.h>

/* Converte l'euro in sterline inglesi 
   Dennis Xhafaj 3IC 28/09/2023
*/
int main(){
    
    float euro, sterline;
    const float cambio= 0.87;

    // INPUT
    printf("Inserisci la tua somma di denaro in euro: ");
    scanf("%f",&euro);
    // CALCOLO CONVERSIONE
    sterline = cambio*euro;
    // OUTPUT
    printf(" %.2f euro sono uguali a %.2f sterline inglesi.", euro, sterline);
    
    return 0;

}

