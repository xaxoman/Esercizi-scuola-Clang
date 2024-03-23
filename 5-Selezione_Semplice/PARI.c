#include <stdio.h>



int main(){
    
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d",&numero);

    if(numero%2==0) {

        printf("Il tuo numero e' pari");

    }

    else {

        printf("Il tuo numero e' dispari"); 
    }

    return 0;

}

