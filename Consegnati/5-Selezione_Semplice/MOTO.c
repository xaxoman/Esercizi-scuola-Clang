#include <stdio.h>

int main(){
    
    float budget, PrezzoMoto;

    printf("Quanto e' il tuo budget? ");
    scanf("%f",&budget);
    printf("Quanto costa la moto? ");
    scanf("%f",&PrezzoMoto);

    if(budget >= PrezzoMoto) {

        printf("OTTIMO hai abbastanza soldi per comprare la moto!");

    }

    else {

        printf("Non hai abbastanza soldi..");
    }

    return 0;

}

