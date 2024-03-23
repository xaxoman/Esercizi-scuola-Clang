#include <stdio.h>

// CALCOLA L'AREA DI UN CERCHIO 

int main(){
    float raggio;
    float area;
    printf("inserisci il raggio del cerchio: ");
    scanf("%f",&raggio);
    area = 3.14*raggio*raggio; //calcola il valore dell'area (pi greco * r^2)
    printf("l'area del tuo cerchio e' uguale a: %f",area);
    return 0;

}