#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 10

int main(){

    int v1[M], v2[M], v3[20];

    srand(time(NULL));

    printf("Insira valores em ordem crescente:\n\n");

    for(int i=0; i<M; i++){
        printf("V1[%i] = ", i);
        scanf("%i", &v1[i]);
        while(v1[i]<=v1[i-1]){
            printf("V2[%i] = ", i);
            scanf("%i", &v1[i]);
        }
    }

    for(int i=0; i<M; i++){
        printf("V2[%i] = ", i);
        scanf("%i", &v2[i]);
        while(v2[i]<=v2[i-1]){
            printf("V2[%i] = ", i);
            scanf("%i", &v2[i]);
        }
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<2*M; j++){
            if(v1[i]<v2[i]){
                v3[j] = v1[i];
            }
            else{
                v3[j] = v2[i];
            }
        }
    }
    printf("\n");

    printf("O vetor resultante é:\n\n");

    printf("R[20] = %i", v3[0]);

    for(int i=1; i<M; i++){
        printf(", %i", v3[i]);
    }
}
