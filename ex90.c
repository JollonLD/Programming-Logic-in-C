#include <stdio.h>

int main(){

    int v[30];
    int n;
    int count = 0;

    for(int i=0; i<30; i++){
        printf("V[%i] = ",i);
        scanf("%i", &v[i]);
    }

    printf("Informe o número a ser encontrado: ");
    scanf("%i", &n);

    for(int i=0; i<30; i++){
        if(v[i] == n)
            count++;
    }
    printf("\n");

    printf("O número informado aparece %i vezes no vetor V.\n", count);

return 0;

}