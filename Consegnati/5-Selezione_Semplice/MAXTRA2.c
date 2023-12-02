
#include <stdio.h>

int main(){
    
    int uno, due;
    printf("Inserisci due numeri interi in successione separati da uno spazio: ");
    scanf("%d %d",&uno,&due);
    if(uno > due) {

        printf("Il numero maggiore e' %d", uno);
    }
    else {

        printf("Il numero maggiore e' %d", due);
    }
    return 0;

}

