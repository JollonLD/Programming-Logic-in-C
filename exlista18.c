#include <stdio.h>

int somainter(int);

int main(){

    int x;

    printf("X: ");
    scanf("%d", &x);

    printf("A soma dos valores inteiros entre 1 e %d e: %d", x, somainter(x));

    return 0;
}

int somainter(int x){

    int soma = 0;
    
    if(x>0){
        for(int i=2; i<x; i++){
            soma += i; 
        }
    }
    if(x<0){
        for(int i=0; i>x; i--){
            soma += i;
        }
    }

    return soma;
}