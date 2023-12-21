#include <stdio.h>
#define MAX 15

int main(){

    float v1[MAX], v2[MAX];
    int count=0;

    for(int i=0; i<MAX; i++){
        printf("V1[%i] = ", i);
        scanf("%f", &v1[i]);
    }

    for(int i=0; i<MAX; i++){
        printf("V2[%i] = ", i);
        scanf("%f", &v2[i]);
    }

    for(int j=0; j<MAX; j++){
        for(int i=0; i<MAX; i++){
            if(v1[j]==v2[i])
                count++;
        }
    }

    printf("Os vetores V1 e V2 possuem %i números repetidos", count);
}