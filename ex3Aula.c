#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    char palavra[MAX];
    int i=0;

    printf("Palavra: ");
    fgets(palavra, MAX, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    for(i=0; i<strlen(palavra)/2; i++){
        if(palavra[i] != palavra[strlen(palavra) -1-i]){
            printf("Não é palíndromo.");
            break;
        }
    }

    if(i == strlen(palavra)/2){
        printf("É palíndromo.");
    }
}