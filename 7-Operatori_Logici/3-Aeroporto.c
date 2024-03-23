#include <stdio.h>

/*
	Programma che imita il sistema di un check-in all'aeoroporto
	Dennis Xhafaj 3IC 5/10/2023
*/

 int main() {
 	
 	char CartaImbarco, IDcard;
 	
 	printf("Hai la carta d'imbarco con te? (s/n) ");
 	scanf(" %c",&CartaImbarco); // e' sempre meglio mettere uno spazio prima di richiedere un carattere
 	
 	printf("Il tuo documento e' valido? (s/n) ");
 	scanf(" %c",&IDcard);
 	
 	if( (CartaImbarco=='s' || CartaImbarco=='S' ) && (IDcard=='s' || IDcard=='S') ) {
 		
 		printf("Puoi proseguire per l'imbarcazione.");
	 }
	 
	 else {
	 	
	 	printf("Non puo' proseguire con il suo viaggio'");
	 	
	 }
 	
 	return 0;
 }
