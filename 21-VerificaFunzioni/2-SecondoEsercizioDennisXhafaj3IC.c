#include <stdio.h>

/*
    Dennis Xhafaj 3IC 

    ESERCIZIO: 
*/

int superficiePrisma(int h, int lun, int lar) {

    int superficie, perimetro;

    perimetro = ((lun*lar)*2)+((lun*h)*4);

    superficie = 2*(lun*h) + 2*(lun*lar) + 2*(h*lar);

    return superficie;
}

int VolumePrisma(int h, int lun, int lar) {

    int volume;

    volume = (lun*lar)*h;

    return volume;
}

int main(){
    
    int h,lun,lar; // h -> altezza lun -> lunghezza lar -> larghezza
    int superficie, volume;

    printf("Inserisci rispettivamente altezza, lunghezza e larghezza del prisma: ");
    scanf("%d %d %d",&h,&lun,&lar);

    superficie  = superficiePrisma(h, lun, lar);
    printf("La superficie del prisma e' %d \n\n",superficie);

    volume = VolumePrisma(h, lun, lar);
    printf("Il volume del prisma e' %d",volume);



    return 0;

}

