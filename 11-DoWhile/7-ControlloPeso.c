#include <stdio.h>

/*
    Dennis Xhafaj 3IC 22/10/2023

    ESERCIZIO:
    Scrivi un programma in C che effettui il controllo sul peso di confezioni di pasta impacchettate manualmente 
    da un gruppo di operatori. Inserendo la percentuale di tolleranza e il valore nominale della confezione, 
    il programma deve segnalare se il pacchetto rientra nella norma oppure deve essere scartato. Dopo aver individuato 
    5 pacchetti “fuori norma”, il programma dovrà terminare indicando la percentuale di errori di impacchettamento.
*/

int main(){
    
    float Peso;
    int Confezioni = 0, 
        MinError = 0;
    float tolleranza;
    float PesoMax, PesoMin;

       printf("Inserisci il peso nominale della confezione in grammi: ");
        scanf("%f",&Peso);

        printf("Inserisci la tolleranza della bilancia: ");
        scanf("%f",&tolleranza);

        tolleranza = tolleranza/100;
        PesoMax = Peso+(Peso*tolleranza);
        PesoMin = Peso-(Peso*tolleranza);


    do {

        printf("Inserisci il peso della confezione in grammi: ");
        scanf("%f",&Peso);

        if((Peso>PesoMax)||(Peso<PesoMin)) {

            printf("La confezione e' fuori norma, attenzione\n");
            MinError++;
        }

        else {

            printf("Ok, vai avanti \n");
            Confezioni++;
        }

    } while(MinError<5);

    printf("Troppe confezioni sbagliate! \n Confezioni giuste: %d \n Confezioni sbagliate: %d",Confezioni, MinError);

    return 0;

}

