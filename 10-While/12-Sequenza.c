#include <stdio.h>

int main() {
    int N;
    int cifre = 0;

    printf("Inserisci una sequenza di numeri: ");
    scanf("%d", &N);

        while (N > 0) { // Controlla cifre negative
            N = N / 10;  /*  NOTA: Rimuovi l'ultima cifra dividendo per 10 
                             NOTA2: per resituire solo l'ultima cifra fai il modulo e non il diviso
                             RISORSE: https://stackoverflow.com/questions/4263236/how-can-remove-the-last-digit-in-an-int-c                                   */
            cifre++;
        }
    

    printf("Il numero ha %d cifre.\n", cifre);

    return 0;
}
