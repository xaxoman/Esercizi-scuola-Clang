#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 6/04/2024

    ESERCIZIO: 
    Definire una struttura per memorizzare i dati delle case da parte di un’agenzia immobiliare, 
    ogni casa è caratterizzata da un numero intero di metri quadri, dalla classe energetica 
    (definita da una lettera, dove la A rappresenta la casa a minor consumo energetico la F
    quella a maggior consumo) e dal costo.
    Chiedere all’utente i dati di tre case e poi dire qual è quella col minor costo e quella con 
    la migliore classe energetica.

*/

 struct agenziaImmobiliare {
        
        float prezzo;
        float area;
        char classe_energetica;
    };

 void stampaDati(struct agenziaImmobiliare agenzia[], int num_case) {

    for (int i=0; i<num_case; i++) {
        
        printf("\nCASA %d\nMetri quadri -> %.2f\nPrezzo -> %.2f\nClasse energetica -> %c\n", i+1, agenzia[i].area, agenzia[i].prezzo, agenzia[i].classe_energetica);
    }
    
 }

 void OrdinaPrezzo(struct agenziaImmobiliare agenzia[], int num_case) {

    float min_temp = agenzia[0].prezzo;

    for (int i=0; i<num_case; i++) {
        
        if (agenzia[i].prezzo < min_temp) {
            min_temp = agenzia[i].prezzo;
        }
    }

    printf("Il prezzo minore e': %.2f\n", min_temp);

 }

 void OrdinaClasseEnergetica(struct agenziaImmobiliare agenzia[], int num_case) {

    int index_best = 0;
    int i;
	for (i = 1; i < num_case; i++) {
        if (agenzia[i].classe_energetica < agenzia[index_best].classe_energetica) {
            index_best = i;
        }
    }
    printf("Indice casa %d", index_best+1);
 }

int main(){
    
int num_case, scelta;
    
printf("Quante case vuoi registrare: ");
scanf("%d",&num_case);

struct agenziaImmobiliare Agenzia[num_case];


for (int i = 0; i < num_case; i++) {
    
    printf("Casa %d - Inserisci il prezzo: ",i+1);
    scanf("%f",&Agenzia[i].prezzo);
    printf("Casa %d - Inserisci l'area: ",i+1);
    scanf("%f",&Agenzia[i].area);
    printf("Casa %d - Inserisci la classe energetica (A-F): ",i+1);
    scanf(" %c",&Agenzia[i].classe_energetica);
    printf("\n");
}

while (scelta!=4) {

    printf("\nMENU \n1. Visualizza dati case\n2. migliore classe energetica\n3. Prezzo piu basso\n4. Esci\n\n");
    printf("Scelta: ");
    scanf("%d",&scelta);

    switch (scelta) {
    case 1:
        stampaDati(Agenzia, num_case);
        break;
    case 2:
        OrdinaClasseEnergetica(Agenzia, num_case);
        break;
    case 3:
        OrdinaPrezzo(Agenzia, num_case);
        break;
    default:
        break;
    }

}


return 0;

}

