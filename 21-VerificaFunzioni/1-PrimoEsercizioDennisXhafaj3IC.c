#include <stdio.h>

/*
    Dennis Xhafaj 3IC

    ESERCIZIO: 
*/

int contaCoppie = 0;

int coppia(int a, int b, int c) {

    
    if((a==b) && (a==c) && (b==c)) {

        printf("Tutti i tuoi numeri sono uguali! %d %d %d \n", a,b,c);
        contaCoppie = contaCoppie+(a+b+c);
       
    }

    else if (a==b) {

        printf("I numeri in coppia sono %d e %d \n", a,b);
        contaCoppie = contaCoppie+(a+b);
     
    }

    else if(a==c) {

        printf("I numeri in coppia sono %d e %d \n", a,c);
        contaCoppie = contaCoppie+(a+c);
      
    }

    else if(b==c) {

        printf("I numeri in coppia sono %d e %d \n", c,b);
        contaCoppie = contaCoppie+(b+c);
    
    }

    else {

        return -1;
    }
    
}

int main(){
    
    int a,b,c, a2,b2,c2;
    int tripletta, tripletta2;
    // Richiesta e input dei valori
    printf("Inserisci la prima tripletta di numeri: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Inserisci la seconda tripletta di numeri: ");
    scanf("%d %d %d",&a2,&b2,&c2); 

    tripletta = coppia(a,b,c);
    printf("%d \n",tripletta,contaCoppie);
    tripletta2 = coppia(a2,b2,c2);
    printf("%d \n",tripletta,contaCoppie);
    
  
    
    
    return 0;

}




