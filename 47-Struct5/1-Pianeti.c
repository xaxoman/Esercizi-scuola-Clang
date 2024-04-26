#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 21/04/2024

    ESERCIZIO: 
    Definisci una struttura dati per gestire i pianeti del sistema solare, contenente ad esempio i seguenti dati:
        - nome del pianeta,
        - diametro equatoriale in km, 
        - numero di satelliti, 
        - durata dell'orbita attorno al sole in anni terrestri, 
        - durata della rotazione intorno all'asse in ore.

    Caricare i dati relativi a 4 pianeti e poi presentare un menù di scelta che permetta di:
        1. stampare tutte le informazioni inserite
        2. stampare il nome del pianeta più grande (maggiore diametro equatoriale)
        3. calcolare e stampare la durata media delle orbite
        4. riordinare i pianeti in ordine alfabetico
        5. uscita
*/

#define num_pianeti 4

struct SistemaSolare {

    char nome[30];
    int diametro;
    int satelliti;
    int durata_orbita_sole;
    int durata_orbita_asse;
};

void stampaDati(struct SistemaSolare pianeti[num_pianeti]) {

    for (int i = 0; i < num_pianeti; i++) {
       
       printf("\n- Pianeta %d -\nNome -> %s\nDiametro -> %d\nSatelliti -> %d\nOrbita sole -> %d\nOrbita sul proprio asse -> %d\n",i+1,pianeti[i].nome,pianeti[i].diametro,pianeti[i].satelliti,pianeti[i].durata_orbita_sole,pianeti[i].durata_orbita_asse);
    }
    
 }
    
int maxDiametro(struct SistemaSolare pianeti[]) {

    int tempMax=0;
    for (int i = 0; i < num_pianeti; i++) {


       if(tempMax<pianeti[i].diametro) {

            tempMax = pianeti[i].diametro;
       }
    }

    return tempMax;
    
}
      
float MediaOrbite(struct SistemaSolare pianeti[]) {

    float media = 0;
    int i;
    for (i = 0; i < num_pianeti; i++)
    {
        media+=pianeti[i].durata_orbita_asse;
    }
    
    return media/i;
 }

void OrdinaPianeti(struct SistemaSolare pianeti[]) {

    int i, j;
    struct SistemaSolare temp;

    for (i = 0; i < num_pianeti-1; i++) {
        for (j = i+1; j < num_pianeti; j++) {
            if(strcmp(pianeti[i].nome,pianeti[j].nome)>0) {
                temp = pianeti[i];
                pianeti[i] = pianeti[j];
                pianeti[j] = temp;
            }
        }
    }

    printf("\nOrdine alfabetico: \n");
    for (i = 0; i < num_pianeti; i++) {
        printf("%s\n",pianeti[i].nome);
    }
}

int main(){
    
    struct SistemaSolare Pianeti[num_pianeti];
    int scelta, diametroMax;
    float mediaOrbite;

    for(int i=0; i<num_pianeti; i++) {

        printf("\n- Pianeta %d -\n",i+1);
        printf("Inserisci il nome: ");
        scanf("%s",Pianeti[i].nome);
        printf("Inserisci il diametro: ");
        scanf("%d",&Pianeti[i].diametro);
        printf("Inserisci il numero di satelliti: ");
        scanf("%d",&Pianeti[i].satelliti);
        printf("durata dell'orbita attorno al sole in anni: ");
        scanf("%d",&Pianeti[i].durata_orbita_sole);
        printf("durata dell'orbita attorno al proprio asse in ore: ");
        scanf("%d",&Pianeti[i].durata_orbita_asse);
        

    }

   do {

     printf("\n1. stampare tutte le informazioni inserite\n2. stampare il nome del pianeta piu grande (maggiore diametro equatoriale)\n3. calcolare e stampare la durata media delle orbite\n4. riordinare i pianeti in ordine alfabetico\n5. uscita");
     printf("\nScelta: ");
     scanf("%d",&scelta);

     switch (scelta) {
     case 1:
        stampaDati(Pianeti);
        break;
     case 2:
        diametroMax =  maxDiametro(Pianeti);
        printf("Il pianeta piu grande ha un diametro di %d km\n", diametroMax);
        break;
     case 3:
        mediaOrbite = MediaOrbite(Pianeti);
        printf("La media delle orbite e' di %.2f ore\n",mediaOrbite);
        break;
     case 4:
        OrdinaPianeti(Pianeti);
        break;
     case 5:
        printf("Sei uscito");

     default:
        break;
     }

   }while(scelta!=5);



    return 0;

}

