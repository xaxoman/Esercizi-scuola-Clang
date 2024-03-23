#include <stdio.h>

/*
    Dennis Xhafaj 3IC 20/01/2024

    ESERCIZIO:
    Memorizzare in un array, inserendoli da tastiera, 8 numeri interi. 
    Chiedere all'utente un nuovo numero intero e comunicare quante volte tale numero è presente nell'array. 
    Crea una funzione per l'inserimento e una funzione per la ricerca. 
*/
const int GrandezzaArray = 8;

void Inserimento(int array[]) { // parentesi quadre per la funzione

    for (int i = 0; i < GrandezzaArray; i++) {
        printf("Inserisci il numero %d: ",i+1);
        scanf("%d",&array[i]);

    }
}

int ricerca(int n, int array[]) {

    int conta = 0;

    for (int i = 0; i < GrandezzaArray; i++) {

        if(n==array[i]) {

            conta++;

        }
    }

    return conta;
}

int main(){
    
    int OttoNumero[7];
    int presente, n;

    Inserimento(OttoNumero); // senza parentesi
    printf("Ora inserisci il numero da cercare: ");
    scanf("%d",&n);

    presente = ricerca(n, OttoNumero);
    printf("%d",presente);
    return 0;

}

