#include <stdio.h>
#include <stdlib.h>

/*
    Dennis Xhafaj 3IC 10/02/2024

    ESERCIZIO: 
    Scrivi un programma in c che verifica se lo schema di una matrice 3x3 contenente tutti i numeri da 1 a 9 
    è un quadrato magico (la somma di ogni riga, di ogni colonna e delle diagonali è costante, in questo caso 15).

    Esempio di quadrato magico 3x3:

    2  7  6
    9  5  1
    4  3  8
*/



int quadratoMagico(int m[3][3]);
int sommaRiga(int m[3][3], int riga);
int sommaColonna(int m[3][3], int colonna);
int sommaDiagonalePri(int m[3][3]);
int sommaDiagonaleSec(int m[3][3]);

int main() {
    int matrice[3][3];

    printf("Inserisci gli elementi della matrice 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    if (quadratoMagico(matrice)) {
        printf("La matrice e' un quadrato magico!\n");
    } else {
        printf("La matrice non e'un quadrato magico.\n");
    }

    return 0;
}

int sommaRiga(int m[3][3], int riga) {
    int somma = 0;
    for (int j = 0; j < 3; j++) {
        somma += m[riga][j];
    }
    return somma;
}

int sommaColonna(int m[3][3], int colonna) {
    int somma = 0;
    for (int i = 0; i < 3; i++) {
        somma += m[i][colonna];
    }
    return somma;
}

int sommaDiagonalePri(int m[3][3]) {
    int somma = 0;
    for (int i = 0; i < 3; i++) {
        somma += m[i][i];
    }
    return somma;
}

int sommaDiagonaleSec(int m[3][3]) {
    int somma = 0;
    for (int i = 0; i < 3; i++) {
        somma += m[i][2 - i];
    }
    return somma;
}

int quadratoMagico(int m[3][3]) {
    int riga0, riga1, riga2, col0, col1, col2, diagP, diagS;
    riga0 = sommaRiga(m, 0);
    riga1 = sommaRiga(m, 1);
    riga2 = sommaRiga(m, 2);
    col0 = sommaColonna(m, 0);
    col1 = sommaColonna(m, 1);
    col2 = sommaColonna(m, 2);
    diagP = sommaDiagonalePri(m);
    diagS = sommaDiagonaleSec(m);
    
    if (riga0 == 15 && riga1 == 15 && riga2 == 15 && col0 == 15 && col1 == 15 && col2 == 15 && diagP == 15 && diagS == 15)
        return 1; // è un quadrato magico
    else
        return 0; // non è un quadrato magico
}