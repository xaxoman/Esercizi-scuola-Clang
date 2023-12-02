#include <stdio.h>

/*

Dennis Xhafaj 3IC 30/09/2023

Calcola il totale di una bolletta del gas in base ai metri cubi 
*/
int main(){
    const int quotaFissa = 10;
    float metriCubi, totBolletta;
    const float BASE = 0.10;
    const float ECCEDENTE = 0.12;
    //INPUT
    printf("Inserisci il tuo consumo in metri cubi: ");
    scanf("%f",&metriCubi);

    if(metriCubi > 500) {

        /*  NOTA PERSONALE:
           Questa formula somma la quota fissa al prezzo dei primi 500 metri cubi
           per poi aggiungere il costo dei metri cubi in eccesso (metriCubi-500)*(ECCEDENTE)
           sottrae i metri cubi consumati alla soglia e moltiplica solo quella parte per il costo ECCEDENTE.
        */
        totBolletta = quotaFissa+(500*BASE)+(metriCubi-500)*(ECCEDENTE); 
        printf("ECCESSO Ecco i dati della tua bolletta\n\nConsumo: %.2f \nTotale: %.2f", metriCubi, totBolletta);
    }

    else {

        totBolletta = quotaFissa+(metriCubi*BASE);
        printf("BASE Ecco i dati della tua bolletta\n\nConsumo: %.2f \nTotale: %.2f", metriCubi, totBolletta);

    }

    return 0;

}

