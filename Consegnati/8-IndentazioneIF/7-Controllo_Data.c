#include <stdio.h>

/*
    Dennis Xhafaj 3IC 12/10/2023

    ESERCIZIO: 
    Il programma verifica se una data inserita è corretta (attenzione i mesi sono 12, e non in tutti i mesi ci sono 31 giorni, 
    per semplicità non consideriamo gli anni bisestili 😉 )
*/

int main(){
    
    int anno,mese,giorno;

    printf("Inserisci una data nel formato (AA/MM/GG) ");
    scanf("%d/%d/%d",&giorno,&mese,&anno);

    if((anno<0) || (mese > 12) || (mese < 1) || (giorno<1) || (giorno>31)) {

        printf("La data inserita non e' valida.");
    }  

    else if((mese==11)||(mese==4)||(mese==8)||(mese==9) && (giorno>30)) {

         //controlla i mesi di 30 giorni
         printf("Il mese che hai inserito arriva al masssimo a 30 giorni");
              
    } 

    else if((mese==2) && (giorno>29)) {

        //controlla i mesi di 29 giorni (febbraio)
        printf("febbraio arriva al massimo a 29 giorni");
                       
    } 

    else if((mese==1 || mese==3 || mese==5 || mese==7 || mese==8 || mese==10 || mese==12) && giorno>31) {
   
        //controlla i mesi di 31 giorni
        printf("Il mese che hai inserito arriva al masssimo a 30 giorni");         
      
    }  

    else {

       printf("La tua data e' corretta!"); 
       
    }

    return 0;

}

