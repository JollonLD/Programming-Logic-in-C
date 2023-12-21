#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    char nome[MAX];

    printf("Nome: ");
    fgets(nome, 30, stdin);
    nome[strlen(nome) - 1] = '\0';

    nome[0] = nome[0] - 32;

    for(int i=1; i<strlen(nome); i++){
        if(nome[i] == ' ')
            nome[i+1] = nome[i+1] -32;
    }

    printf("Nome: %s.", nome);


}