#include <stdio.h>

/*
    Dennis Xhafaj 3IC 14/04/2024

    ESERCIZIO: 
    Definire la struttura automobili che descrivere un’automobile in base alla marca, 
    cilindrata, anno di immatricolazione e acquirente con nome e cognome. Scriviamo 
    quindi un programma in C, che dichiara una tabella autosalone di tipo automobili 
    con 5 elementi. Il programma deve consentire di inserire i dati delle auto vendute. 
    Deve inoltre visualizzare il cognome dei proprietari con auto che hanno una cilindrata superiore a 1800 cc. 
    Infine occorre visualizzare il numero di auto immatricolate in un determinato anno.
*/
const int num_auto = 3;

struct Automobili {

    char marca[100];
    char nome[100];
    char cognome[100];
    float cilindrata;
    int anno_immatrico;
    


};

void cilindrataMax(struct Automobili Autosolone[]) {

    for(int i=0; i<num_auto; i++) {

        if(Autosolone[i].cilindrata>1800) {

            printf("Cognome %d -> %s\n", i+1, Autosolone[i].cognome);
        }

    }
    
}

void AnnoImmatricolata(struct Automobili Autosolone[]) {

    int anno_cercare, auto_trovate=0;
    printf("Inserisci l'anno desiderato: ");
    scanf("%d",&anno_cercare);

    for(int i=0; i<num_auto; i++) {

         if(Autosolone[i].anno_immatrico==anno_cercare) {

                auto_trovate++;
        }
    }

    printf("Abbiamo trovato %d auto per l'anno %d", auto_trovate, anno_cercare);
}


int main(){
    
    struct Automobili Autosalone[num_auto];
    int scelta;

   for(int i=0; i<num_auto; i++) {

        printf("\n- Auto %d -\n\n",i+1);
        printf("Marca -> ");
        scanf("%s", Autosalone[i].marca);
        printf("Nome -> ");
        scanf("%s", Autosalone[i].nome);
        printf("Cognome -> ");
        scanf("%s", Autosalone[i].cognome);
        printf("Cilindrata -> ");
        scanf("%f", &Autosalone[i].cilindrata);
        printf("Anno immatricolazione -> ");
        scanf("%d", &Autosalone[i].anno_immatrico);

    }
    

    while(scelta!=3) {

        printf("\n1. Auto con cilindrata maggiore 1800 cc\n2. Auto immatricolate in un determinato anno\n3. Esci\n\n");
        printf("Scelta: ");
        scanf("%d",&scelta);

        switch(scelta) {

            case 1:
                cilindrataMax(Autosalone);
                break;
            case 2:
                AnnoImmatricolata(Autosalone);
                break;
            case 3:
                printf("Sei uscito dal programma.");
                break;
        }
    }
    
    return 0;

}

