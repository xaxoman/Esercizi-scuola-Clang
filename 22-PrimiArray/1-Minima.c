#include <stdio.h>

/*
    Dennis Xhafaj 3IC 20/01/2024

    ESERCIZIO:
    Scrivi un programma in linguaggio C che richiede all'utente di inserire le temperature rilevate in 7 giorni consecutivi. 
    Il programma dovrà determinare il giorno in cui è stata registrata la temperatura minima e il valore corrispondente.
*/

int main(){
    
    float temp[7];
    int min = 0;

    for(int i = 0; i<7 ;i++) {

        printf("inserisci temp giorno %d: ",i+1);
        scanf("%f",&temp[i]);

        if(temp[i]<temp[min]) {
            min = i;
        

        }

    }    

    printf("Giorno: %d Temp: %.2f", min+1, temp[min]);

    return 0;

}

