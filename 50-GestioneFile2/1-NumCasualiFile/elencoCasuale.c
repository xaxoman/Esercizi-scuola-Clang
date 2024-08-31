#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dennis Xhafaj 3IC 11/01/2024

    ESERCIZIO: 
     Realizza un programma in C per creare un file di testo di nome output.txt contenente 
    10 numeri interi scelti casualmente tra 1 e 90. Crea una nuova riga per ogni numero.
*/

#define num_casuali 10

void generaCasuali(int vettore[]) {

  srand(time(NULL));
    for (int i = 0; i < num_casuali; i++) {
        
    
        vettore[i] = rand()%90+1;
    }
    
}

int main(){
    
    int NumCasuali[num_casuali];
    int vetGenera[num_casuali]; // array da associare al file per generare i numeri
    FILE *fileCasuali;

    fileCasuali = fopen("OutputCasuali.txt", "w");

    if (fileCasuali == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; 
    }

    generaCasuali(vetGenera);
    for (int i = 0; i < num_casuali; i++){
  
        fprintf(fileCasuali, "%d\n", vetGenera[i]);
    }
    
    return 0;

}

