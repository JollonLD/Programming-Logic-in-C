#include<stdio.h>
#include<string.h>
#define max 1000

int main(){

    char palindromo[max];
    char aux[2*max];
    int i=0;
    int count=0;

    printf("Palavra: ");
    fgets(palindromo, sizeof(palindromo), stdin);
    palindromo[strlen(palindromo)-1] = '\0';

    while(palindromo[i]!='\0'){
        aux[i] = palindromo[i];
        i++;
    }

    for(i=0; i<strlen(palindromo)/2; i++){
        palindromo[i] = palindromo[strlen(palindromo)-1-i];
    }
    for(i=0; i<strlen(palindromo)-1; i++){
        if(aux[i] == palindromo[i])
            count++;    
        }
    if(count == strlen(aux)-1)
        printf("E palindromo!\n");
    else
        printf("Nao e palindromo.\n");

}