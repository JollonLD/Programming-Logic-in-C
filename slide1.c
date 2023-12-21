#include <stdio.h>

int adicao(int, int);
int subtracao(int, int);
int multiplicacao(int, int);
float divisao(int, int);

int main(){

    int n1, n2;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);

    printf("Adicao: %d\nSubtracao: %d\nMultiplicacao: %d\nDivisao: %.2f\n", adicao(n1,n2), subtracao(n1,n2), multiplicacao(n1,n2), divisao(n1,n2));

    return 0;
}

int adicao(int n1, int n2){
    int n;

    n = n1 + n2;

    return n;
}

int subtracao(int n1, int n2){
    int n;

    n = n1 - n2;

    return n;
}

int multiplicacao(int n1, int n2){
    int n;

    n = n1 * n2;

    return n;
}

float divisao(int n1, int n2){
    float n;

    n = (float)n1/n2;

    return n;
}
