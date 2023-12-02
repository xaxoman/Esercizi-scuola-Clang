#include <stdio.h>

/*

Calcola quanto spente un gruppo di ragazzi e ragazze ad un locale

Dennis Xhafaj 3IC

*/
int main(){
    
    int ragazzi, ragazze, tot;

    const int prezzoM = 8; 
    const int prezzoF = 5;

    // INPUT
    printf("Quanti ragazzi ci sono nel tuo gruppo? ");
    scanf("%d",&ragazzi);
    printf("Quante ragazze ci sono nel tuo gruppo? ");
    scanf("%d",&ragazze);

    // CALCOLA IL TOTALE 
    tot = (ragazze*prezzoF)+(ragazzi*prezzoM);

    printf("In totale avete speso: %d euro", tot);

    return 0;

}