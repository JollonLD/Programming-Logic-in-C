#include <stdio.h>
#include <string.h>
#define max 100

int main(){

    char nome[max];
    int i=0;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '\0';

    for(i=0; i<=strlen(nome); i++){
        for(int j=0; j<i; j++){
            printf("%c", nome[j]);
        }
        printf("\n");
    }
}