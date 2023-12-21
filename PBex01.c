#include <stdio.h>
#include <string.h>
#define max 50

int main(){

    char a[max];
    char b[max];

    printf("String A: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1] = '\0';
    
    printf("String A: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b)-1] = '\0';

    printf("Tamanho de '%s' é: %i.\n", a, strlen(a));
    printf("Tamanho de '%s' é: %i.\n", b, strlen(b));

    if(strlen(a) == strlen(b))
        printf("As strings sao do mesmo tamanho.\n");
    else
        printf("As strings nao sao do mesmo tamanho.\n");

    return 0;
}