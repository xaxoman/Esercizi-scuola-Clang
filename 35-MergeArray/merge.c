#include <stdio.h>

/*
    Dennis Xhafaj 3IC 17/03/2024

    ESERCIZIO: 
    Crea un programma in c che esegue la fusione (merge) di due vettori di numeri interi. 
    Il nuovo vettore contiene gli elementi alternati dei due vettori. Se i due vettori 
    hanno lunghezza differente il nuovo vettore viene completato con i restanti elementi del vettore più lungo.

    Suggerimento: per calcolare la lunghezza n di un vettore v puoi usare l'istruzione
    int n = sizeof(v)/sizeof(v[0]);
*/

#define dim 10

void merge(int vettore1[dim], int vettore2[dim], int dim1, int dim2) {
    int nuovoVettore[dim1 + dim2];
    int i = 0, j = 0, k = 0;

    while (i < dim1 && j < dim2) {
        nuovoVettore[k++] = vettore1[i++];
        nuovoVettore[k++] = vettore2[j++];
    }

    while (i < dim1) {
        nuovoVettore[k++] = vettore1[i++];
    }

    while (j < dim2) {
        nuovoVettore[k++] = vettore2[j++];
    }

    printf("Il nuovo array fuso e': ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nuovoVettore[i]);
    }
}

int main(){
    
    int vettore1[dim] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vettore2[dim] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int size1 = sizeof(vettore1)/sizeof(vettore1[0]);
    int size2 = sizeof(vettore2)/sizeof(vettore2[0]);

    int nuovoVettore[100];

    merge(vettore1, vettore2, size1, size2);

    return 0;

}

