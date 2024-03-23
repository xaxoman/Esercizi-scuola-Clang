#include <stdio.h>

/*
    Dennis Xhafaj 3IC 16/12/2023

    ESERCIZIO: 
    Vogliamo realizzare un programma per la conversione di unità di misura. Il programma
    mostra un menu con le seguenti opzioni:
    1) centimetri -> pollici
    2) pollici -> centrimetri
    3) litri -> galloni
    4) galloni -> litri
    5) celsius -> fahrenheit
    6) fahrenheit -> celsius
    7) fine
    Dopo la scelta, se non è l'uscita, richiedere il valore da convertire, in base alla scelta richiamare
    una opportuna funzione di conversione e mostrare l'output.
*/

float CmInch(float convertire ) {  // 1) centimetri -> pollici
    
    return convertire / 2.54;
}

float InchCm(float convertire ) { // 2) pollici -> centrimetri

     return convertire * 2.54;
}

float LtGal(float convertire ) { // 3) litri -> galloni
    
    return convertire / 3.78541;
}

float GalLt(float convertire ) { // 4) galloni -> litri
   
    return convertire * 3.78541; 
}

float CelFar(float convertire ) { // 5) celsius -> fahrenheit
    
     return (convertire * 9 / 5) + 32;
}

float FarCel(float convertire ) { // 6) fahrenheit -> celsius

    return (convertire - 32) * 5 / 9;
}

int main(){
    
    int opzione;
    float convertire ;
    printf("1) centimetri -> pollici\n2) pollici -> centrimetri\n3) litri -> galloni\n4) galloni -> litri\n5) celsius -> fahrenheit\n6) fahrenheit -> celsius\n7) fine\n\n Inserisci un'opzione: ");
    scanf("%d",&opzione);
    
    switch (opzione) {
    case 1:
        printf("Inserisci i Centimetri: ");
        scanf("%f",&convertire);
        printf("%f",CmInch(convertire));
        break;
    case 2:
        printf("Inserisci i Pollici: ");
        scanf("%f",&convertire);
        printf("%f",InchCm(convertire));
        break;
    case 3:
        printf("Inserisci i Litri: ");
        scanf("%f",&convertire);
        printf("%f",LtGal(convertire));
        break;
    case 4:
        printf("Inserisci i Galloni: ");
        scanf("%f",&convertire);
        printf("%f",GalLt(convertire));
        break;
    case 5:
        printf("Inserisci i Celsius: ");
        scanf("%f",&convertire);
        printf("%f",CelFar(convertire));
        break;
    case 6:
        printf("Inserisci i Farenehit: ");
        scanf("%f",&convertire);
        printf("%f",FarCel(convertire));
        break;
    case 7:
        printf("SEI USCITO DAL PROGRAMMA");
        break;
    
    }

    return 0;

}

