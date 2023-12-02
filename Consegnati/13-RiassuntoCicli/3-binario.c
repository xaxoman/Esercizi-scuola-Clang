#include <stdio.h>
#include <math.h>

/*
    Dennis Xhafaj 3IC 10/11/2023

    ESERCIZIO:
    Si scriva un programma per convertire un numero intero positivo dal sistema binario al sistema decimale.
*/

int main(){
    
    int binario, indice, decimale=0, sequenza, cifreTOT=3;

    printf("Inserisi un numero in binario: ");
    scanf("%d",&binario);

    for(int i = 0; i<cifreTOT; i++) {

        sequenza = binario%10;

        if (sequenza!=0) {

            indice = sequenza*pow(2,i);
            decimale = decimale+indice;
            binario = binario/10;
        }

    }

    printf("Il tuo numero in decimale e' %d\n", decimale);

    return 0;

}

