#include <stdio.h>
#include <string.h>
#define max 100

int main(){

    char nome[max];
    int i=0;
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '\0';

    while(nome[i]!='\0'){
        printf("%c\n", nome[i]);
        i++;
    }
}