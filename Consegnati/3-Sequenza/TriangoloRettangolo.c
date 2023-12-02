#include <stdio.h>
#include <math.h>

/*

Calcolare il perimetro e l'area di un triangolo rettangolo

Dennis Xhafaj 3IC

*/ 

int main(){
    
    float base,altezza, ipotenusa; //dati input
    float perimetro, area; //dati output

    printf("Inserisci rispettivamente la base e l'altezza del triangolo rettangolo: ");
    scanf("%f %f",&base,&altezza);

    ipotenusa = sqrt(base*base+altezza*altezza); // FORMULA √(c1^2+c2^2)
    perimetro = ipotenusa+base+altezza;
    area = (base*altezza)/2;

    printf("Il perimetro del tuo triangolo e' %.2f mentre l'area e' uguale a %.2f", perimetro, area);


    return 0;

}