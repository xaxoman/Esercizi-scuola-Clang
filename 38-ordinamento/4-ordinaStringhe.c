#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 23/03/2024

    ESERCIZIO:
    4. Dato un array di stringhe contenente delle parole, ordinare l'array e stampare l'elenco delle parole in ordine alfabetico. 
*/
#define dim 5

void OrdinaStringhe(char stringhe[dim][30]) {

    char temp[20];
    int y,scambi = 0; // uso scambi come flag e lo metto FALSE ovvero 0 
    
    do {

        scambi = 0; // iniszializzo sentinella
        for(y=0; y<dim-1; y++) {  

           if(strcmp(stringhe[y],stringhe[y+1])>0){
                strcpy(temp,stringhe[y]);
                strcpy(stringhe[y],stringhe[y+1]);
                strcpy(stringhe[y+1],temp);
                scambi=1;
            }
        }
        
    }while( scambi == 1); // finché scambi è vero == 1
}

int main(){
    
    char stringhe[dim][30] = {"elena", "dennis", "catone", "bella", "andrea"};

    OrdinaStringhe(stringhe);

    for(int i=0; i<dim; i++) {

        printf("%s ", stringhe[i]);
    }

    return 0;

}

