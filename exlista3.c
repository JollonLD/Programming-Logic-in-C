#include <stdio.h>

int pot(int, int);

int main(){

    int b, e;

    printf("Base: ");
    scanf("%d", &b);

    printf("Expoente: ");
    scanf("%d", &e);

    printf("A potencia de %d elevado a %d e: %d", b, e, pot(b, e));

    return 0;
}

int pot(int base, int expoente){

    int pot=1;
    int i=0;

    while(i<expoente){
        pot *= base;
        i++;
    }

    return pot;
}

