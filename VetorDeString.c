#include <stdio.h>
#include <string.h>

int main(){

    char nomes[5][30]; // 5 strings de tamanho 30
    char busca[30]; // strng de busca

    for(int i=0; i<5; i++){
        printf("Nome: ");
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strlen(nomes[i])-1] = '\0';
    }

    printf("Busca: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strlen(busca)-1] = '\0';

    for (int i=0; i<5; i++){
        if(strcmp(busca, nomes[i]==0)){
            printf("Encontrado na posicao %i.\n", i);
        }
    }

    printf("Nao encontrado.\n");
}