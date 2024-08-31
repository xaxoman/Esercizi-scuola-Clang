#include <stdio.h>
#include <string.h>

/*
    Dennis Xhafaj 3IC 18/05/2024

    ESERCIZIO: 
    Un'azienda ha dotato i dipendenti di un badge e ha installato un sensore che registra l'ingresso/uscita.
    Ad ogni attraversamento il sensore memorizza in un file dati.txt ora e minuti del passaggio per ogni giornata,
    insieme al codice del dipendente che è un codice alfanumerico di 8 caratteri.

    ora         minuti        codice_dip

    Scrivi un programma che:
    1. legge da input il valore del codice di un dipendente e calcola le ore e i minuti lavorati per quella giornata.
    2. (più complesso) scrive in un file orelavorate.txt il calcolo delle ore e minuti lavorati per quella giornata per ogni dipendente.
*/


struct datiDipendenti {

    int ora;
    int minuti;
    char codice_dip[9];
};

int main(){
    
    FILE *file_orari_dipendenti;
    
    int num_lavoratori=0, scelta, flag_ricerca=0;
     char codice_temp[9]; // codice da cercare 
    struct datiDipendenti Lavoratori[num_lavoratori]; 

    file_orari_dipendenti = fopen("dati.txt", "a");

     if (file_orari_dipendenti == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; 
    }


    do {

        printf("MENU\n1. Registra orario di entrata/uscita\n2. Controlla orari giornalieri\n3. Leggi orario dipendente\n4. Ore di lavoro di ogni singolo dipendente\n5. Esci");
        printf("\n\nScelta: ");
        scanf("%d",&scelta); // Removed extra newlines

        switch (scelta) {
        case 1:
             num_lavoratori++; // aumento il contatore ogni volta che viene registrato un utente
             printf("Inserisci il tuo ID utente (max 8): ");
             scanf("%s", Lavoratori[num_lavoratori].codice_dip);
             printf("Inserisci l'orario di entrata (HH:MM): ");
             scanf("%d:%d",&Lavoratori[num_lavoratori].ora,&Lavoratori[num_lavoratori].minuti); // Added address-of operator (&) to the scanf calls
             // scrivo i dati nel file
            fprintf(file_orari_dipendenti, "%d:%d \t %s\n", Lavoratori[num_lavoratori].ora, Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip);
             break;
        case 2:
            // stampa i dati del file
            // riapro il file in modalità di lettura perché in scrittura non posso leggere per poi stampare
             file_orari_dipendenti = fopen("dati.txt", "r");
            while(fscanf(file_orari_dipendenti, "%d:%d \t %s\n", &Lavoratori[num_lavoratori].ora, &Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip) != EOF) {
                printf("Orario -> %d:%d \nCodice -> %s\n\n", Lavoratori[num_lavoratori].ora, Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip);
            }
            break;
        case 3:
            // leggo il codice del dipendente e stampo i suoi orari
            printf("Inserisci il codice da cercare: ");
            scanf("%s",codice_temp);
            // essendo che i file sono puntatori non puoi utilizzarli più volte per gestire dati diversi, li devi riaprire ogni volta
             file_orari_dipendenti = fopen("dati.txt", "r");
             while(fscanf(file_orari_dipendenti, "%d:%d \t %s\n", &Lavoratori[num_lavoratori].ora, &Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip) != EOF) {


                if (strcmp(codice_temp, Lavoratori[num_lavoratori].codice_dip)==0){
                    flag_ricerca=1; // aggiorno il flag per sapre se ha trovato qualcosa
                    printf("\nDATI DIPENDENTE CON CODICE %s \n");
                    printf(" Orario entrata %d:%d\n",Lavoratori[num_lavoratori].ora,Lavoratori[num_lavoratori].minuti);
                }
                   
             }
             if (flag_ricerca==0) {
                printf("\nCodice non trovato");
             }
             
            break;
        case 4:
            // stampa gli orari di lavoro di ogni singolo lavoratore
            // riapro il file in modalità di lettura perché in scrittura non posso leggere per poi stampare
             file_orari_dipendenti = fopen("dati.txt", "r");
            while(fscanf(file_orari_dipendenti, "%d:%d \t %s\n", &Lavoratori[num_lavoratori].ora, &Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip) != EOF) {
                printf("Orario -> %d:%d \nCodice -> %s\n\n", Lavoratori[num_lavoratori].ora, Lavoratori[num_lavoratori].minuti, Lavoratori[num_lavoratori].codice_dip);
                
            }
            
            break;
        default:
            break;
        }
  

    }while(scelta!=5);
    fclose(file_orari_dipendenti); // chiudo il file

    return 0;

}

