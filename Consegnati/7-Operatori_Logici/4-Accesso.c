#include <stdio.h>

/* 
	Dennis Xhafaj 3IC 5/10/2023

	ESERCIZIO:
	L'ingresso ad una stanza è possibile se il soggetto indossa i guanti oppure si è lavato le mani. 
	In ogni caso è necessario possedere la chiave.
	Scrivi un programma che chiede all'utente le tre condizioni e al termine comunica se può accedere oppure no alla stanza.
*/

int main() {
	
	char Guanti,Mani,Chiave;
	
	printf("Hai lavato le mani? (s/n) ");
	scanf(" %c",&Mani);
	
	printf("Hai i guanti? (s/n) ");
	scanf(" %c",&Guanti);
	
	printf("Hai ottenuto la chiave? (s/n) ");
	scanf(" %c",&Chiave);
	
	if( (Mani=='s' || Guanti=='s') && Chiave=='s' ) { // Ricordati che in questo caso i caratteri vanno tra apici e non doppie virgolette
		
		printf("Puoi proseguire verso la tua avventura! ");
	}
	
	else {
		
		printf("Mi dispiace ma non puoi andare avanti");
	}
	
	return 0;
}
