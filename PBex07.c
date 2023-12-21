#include <stdio.h>
#include <string.h>
#define max 1000

int main(){

    char texto[max];
    int countv=0;
    int counte=0;
    int countc=0;

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto)-1]='\0';

    for(int i=0; i<strlen(texto); i++){
        if(texto[i] == 'A' || texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'O' || texto[i] == 'o' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'u' || texto[i] == 'U')
            countv++;
        else{
            if(texto[i] == ' ')
                counte++;
            else{
                countc++;
            }
        }
    }

    printf("Existem %d vogais.\n", countv);
    printf("Existem %d espaços.\n", counte);
    printf("Existem %d caracteres indefinidos.\n", countc);
}