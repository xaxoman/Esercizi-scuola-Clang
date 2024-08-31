#include <stdio.h>
#include <string.h>

struct amici {
    char nome[20];
    char cognome[20];
    char sesso;
    int anno_nascita;
};

void SeparaGenere(FILE *amici, struct amici persone[], FILE *femmine, FILE *maschi) {
    int i = 0;
    while(fscanf(amici, "%s %s %c %d", persone[i].nome, persone[i].cognome, &persone[i].sesso, &persone[i].anno_nascita) != EOF){
        if(persone[i].sesso == 'F') {
            fprintf(femmine, "%s %s %c %d\n", persone[i].nome, persone[i].cognome, persone[i].sesso, persone[i].anno_nascita);
        } else if(persone[i].sesso == 'M') {
            fprintf(maschi, "%s %s %c %d\n", persone[i].nome, persone[i].cognome, persone[i].sesso, persone[i].anno_nascita);
        }
        
        i++; 
    }
}

void OrdinaEta(struct amici persone[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (persone[j].anno_nascita > persone[j + 1].anno_nascita) {
                struct amici temp = persone[j];
                persone[j] = persone[j + 1];
                persone[j + 1] = temp;
            }
        }
    }
}

int main(){
    FILE *amici;
    struct amici vet_peronse[100];
    
    amici = fopen("amici.txt", "r");
    if(amici == NULL){
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    
    FILE *maschi = fopen("maschi.txt", "w");
    if (maschi == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    
    FILE *femmine = fopen("femmine.txt", "w");
    if (femmine == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    
    SeparaGenere(amici, vet_peronse, femmine, maschi);
    fclose(amici);
    fclose(femmine);
    fclose(maschi);
    
    femmine = fopen("femmine.txt", "r");
    if (femmine == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    
    int i = 0;
    while(fscanf(femmine, "%s %s %c %d", vet_peronse[i].nome, vet_peronse[i].cognome, &vet_peronse[i].sesso, &vet_peronse[i].anno_nascita) != EOF){
        i++;
    }
    fclose(femmine);
    
    OrdinaEta(vet_peronse, i);
    
    femmine = fopen("femmine.txt", "w");
    if (femmine == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    
    for (int j = 0; j < i; j++) {
        fprintf(femmine, "%s %s %c %d\n", vet_peronse[j].nome, vet_peronse[j].cognome, vet_peronse[j].sesso, vet_peronse[j].anno_nascita);
    }
    fclose(femmine);

    // Ordino i maschi per età
    maschi = fopen("maschi.txt", "r");
    if (maschi == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    i = 0;
    while(fscanf(maschi, "%s %s %c %d", vet_peronse[i].nome, vet_peronse[i].cognome, &vet_peronse[i].sesso, &vet_peronse[i].anno_nascita) != EOF){
        i++;
    }
    fclose(maschi);
        
    printf("\n Operazione completata con successo\n");
    return 0;
}