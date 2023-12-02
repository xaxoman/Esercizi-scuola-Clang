#include <stdio.h>

int main() {
	
	/* 
		Calcola se una sequenza di tre numeri interi e' in progressione aritmetica ovvero se la loro sottrazzione e' sempre uguale
		Dennis Xhafaj 3IC 5/10/2023
	*/
	
	int uno,due,tre;
	
	printf("inserisci tre numeri interi: ");
	scanf("%d %d %d",&uno,&due,&tre);
	
	if((due-uno)==(tre-due)) {
		
		printf("I tre bnumeri inseriti sono in progressione aritmetica"); // 2 5 8 = 2-5 = 3 8- 5 = 3
	}
	
	else {
		
		printf("Uno o piu' numeri non sono in progressione aritmetica");
	}
	
	return 0;
}
