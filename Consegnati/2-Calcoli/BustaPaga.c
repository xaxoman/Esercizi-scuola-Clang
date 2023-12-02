#include <stdio.h>
// CALCOLA LA BUSTA PAGA DI UN LAVORATORE 
int main(){
    int oreLavoro, BustaTot;
    float BustaTemp, Netto;
    int pagaOraria = 15;
    float trattenuta = 0.27;

    // INPUT
    printf("inserisci le ore lavorate: ");
    scanf("%d",&oreLavoro);

    //CALCOLI
    BustaTot = pagaOraria*oreLavoro;  //Calcola la busta paga totale 
    BustaTemp = BustaTot*trattenuta;   // calcola la trattebuta
    Netto = BustaTot-BustaTemp; // Calcola il netto sottraendo la trattenuta
    
    // OUTPUT
    printf("la tua busta paga e' di %f euro",Netto); //OCCHIO AI FORMATI SPECIFIERS 
    return 0;

}