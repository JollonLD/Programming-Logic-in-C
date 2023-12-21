#include <stdio.h>


int main(){

#define MAX 20

    float n[20];
    float media;
    float soma=0;
    int count=0;

    printf("Insira as notas dos alunos:\n\n");

    for(int i=0; i<MAX; i++){
        printf("Vetor[%i] = ", i);
        scanf("%f", &n[i]);
        soma = soma + n[i];
    }

    printf("\n");

    media = soma/20;

    printf("Media: %.2f", media);
    
    for(int i=0; i<MAX; i++){
        if(n[i]>media){
            count++;
        }
    }

    printf("Média: %.2f\n", media);
    printf("%i aluno(s) estão acima da média.\n\n", count);

return 0;
}