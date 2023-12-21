#include <stdio.h>
#define MAX 5

int main(){

    int vet[MAX], reconhecedor[MAX];
    int count = 0;

    for(int i=0; i<MAX; i++){
        printf("Vet[%i] = ", i);
        scanf("%i", &vet[i]);
    }

    for(int i=0; i<MAX; i++){
        reconhecedor[i] = vet[i];
    }

    printf("\n");

    for(int j=0; j<MAX; j++){
        for(int i=j+1; i<MAX; i++){
            if(vet[j] == reconhecedor[i]){
                printf("São iguais:\n");
                count++;
                printf("V[%i] = V[%i].\n", j, i);
            }
        }
    }

    printf("\n");

    if(count==0)
        printf("Não existem valores iguais no vetor.\n");

return 0;

}