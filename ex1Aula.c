#include <stdio.h>
#include <string.h>

int main(){

    char texto[30];
    int count = 0;

    printf("Texto: ");
    fgets(texto, 30, stdin);
    texto[strlen(texto)-1] = '\0';

    //primeira opção:

    for(int i=0; i<strlen(texto); i++){
        if(texto[i] == 'a'){
            count++;
            texto[i] = 'b';
        }
    }

    printf("Nº de trocas: %i.\n\n", count);
    printf("Texto: %s", texto);
    printf("%li", strlen(texto));

    return 0;
}