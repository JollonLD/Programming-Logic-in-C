#include <stdio.h>
#define MAX 365

int main(){

    float t[MAX];
    float maior, menor;
    float media;
    float soma=0;
    int count=0;

    printf("T[0] = ");
    scanf("%f", &t[0]);

    soma = t[0];
    maior = t[0];
    menor = t[0];

    for(int i=1; i<MAX; i++){
        printf("T[%i] = ", i);
        scanf("%f", &t[i]);
        if(t[i]>maior)
            maior = t[i];
        if(t[i]<menor)
            menor = t[i];
        soma = soma + t[i];
    }

    media = soma/MAX;

    for(int i=0; i<MAX; i++){
        if(t[i]<media)
            count++;
    }

    printf("Menor temperatuda foi: %.2f\n\n", menor);
    printf("Maior temperatuda foi: %.2f\n\n", maior);
    printf("Media de temperatuda foi: %.2f\n\n", media);
    printf("Nº de vezes que a temperatura foi abaixo da media anual: %.2f\n\n", count);
    

return 0;

}