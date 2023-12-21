#include <stdio.h>
#include <string.h>
#define max 100

int main(){

    char nome[max];

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '\0';

    for(int i=strlen(nome); i>=0; i--){
        for(int j=0; j<i; j++){
            printf("%c", nome[j]);
        }
        printf("\n");
    }
}