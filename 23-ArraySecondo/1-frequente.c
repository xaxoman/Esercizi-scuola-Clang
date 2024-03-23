#include <stdio.h>

/*
    Dennis Xhafaj 3IC 26/01/2024

    ESERCIZIO:  
*/

const int dim = 10;

int conta(int array[]) {

    int conta = 0, IndexHolder;

    for(int i = 0; i < dim ; i++) {

          IndexHolder = array[i];  
          for(int j = 0; j<dim ; j++) {

             if(IndexHolder==array[i]) {
                conta++;
             }

          }
        
    }

    return conta;
}

int main(){
    
    int N[dim], contaNumeri;

    for (int i = 0; i < dim ; i++) {
        
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d",&N[i]);
       
    }
    contaNumeri = conta(N);
    printf("%d",contaNumeri);
    
    return 0;

}

