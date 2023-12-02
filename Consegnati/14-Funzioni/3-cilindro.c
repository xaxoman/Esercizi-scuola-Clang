#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 18/11/2023

    ESERCIZIO:
    Scrivi una funzione AreaCerchio che ha come argomento il raggio di un cerchio e che restituisce il valore dell'area .
    Scrivi una seconda funzione VolumeCilindro che ha come argomento l'altezza di un cilindro e il raggio di base e che 
    restituisce il valore del volume del cilindro.
    NB. La funzione VolumeCilindro deve richiamare la funzione AreaCerchio!
    Scrivi il programma che chiede all'utente di inserire i valori dell'altezza e del raggio di base di un cilindro e 
    ne visualizza il volume.

*/

float AreaCerchio(float raggio) {

    float AreaBase;

    AreaBase = 3.14*pow(raggio,2);

    return AreaBase; //NON DIMENTICARTI IL RETURN

}

float VolumeCilindro(float altezza, float raggio) {

    float volume;

    volume = AreaCerchio(raggio)*altezza; // richiamo la prima funzione 

    return volume; //NON DIMENTICARTI IL RETURN
}

int main(){
    
    float volume,altezza,raggio;

    printf("Inserisci l'altezza di un cilindro e il raggio: ");
    scanf("%f %f",&altezza,&raggio);

    volume = VolumeCilindro(altezza, raggio);
    printf("il volume del cilindro e' di %.2f m^3",volume);

    return 0;

}

