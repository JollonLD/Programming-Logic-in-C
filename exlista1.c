#include <stdio.h>

int mult(int, int);

int main(){

    int n1, n2;

    printf("N: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("Multiplicacao de %d com %d é: %d", n1, n2, mult(n1,n2));

    return 0;
}

int mult(int n1, int n2){

    int mult = 0;
    int i = 0;
    
    while(i<n2){
        mult += n1;
        i++;
    }

    return mult;
}
