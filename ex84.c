#include <stdio.h>

int main(){

    int n;
    float a[n], b[n];
    float s[n];


    printf("Informe o número de elementos do vetor: ");
    scanf("%i", &n);

    for(int i=0; i<n; i++){
        printf("A[%i] = ", i);
        scanf("%f", &a[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("B[%i] = ", i);
        scanf("%f", &b[i]);
    }

    for(int i=0; i<n; i++){
        s[i] = a[i] + b[i];
    }

    printf("\n");

    printf("O vetor da soma de A com B é: \n\n");

    printf("S[%i] = %.2f", n, s[0]);
    for(int i=1; i<n; i++){
        printf(", %.2f", s[i]);
    }

return 0;

}