#include <stdio.h>

int main(){

    float a[10];
    float x;
    float m[10];

    for(int i=0; i<10; i++){
        printf("A[%i] = ", i);
        scanf("%f", &a[i]);
    }

    printf("\n");

    printf("Informe um número para multiplicar o vetor: ");
    scanf("%f", &x);

    for(int i=0; i<10; i++){
        m[i] = x*a[i];
    }

    printf("\n");

    printf("Vetor resultante:\n\n");
    
    printf("M[0] = %.2f", m[0]);
    for(int i=1; i<10; i++){
        printf(", %.2f", m[i]);
    }

return 0;

}