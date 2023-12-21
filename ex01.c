#include <stdio.h>
#define MAX 10

int main(){

    int v1[10], v2[10];
    int r[2*MAX];
    int i=0, j=0, k=0;

    for(int i=0; i<MAX; i++){
        printf("V1[%i] = ", i);
        scanf("%i", &v1[i]);

        while(v1[i]<v1[i-1]){
            printf("V1[%i] = ", i);
            scanf("%i", &v1[i]);
        }
    }

    for(int i=0; i<MAX; i++){
        printf("V2[%i] = ", i);
        scanf("%i", &v2[i]);

        while(v2[i]<v2[i-1]){
            printf("V2[%i] = ", i);
            scanf("%i", &v2[i]);
        }
    }

    while(i<MAX && j<MAX){
        if(v1[i]<v2[j]){
            r[k] = v1[i];
            i++;
        }
        else{
            r[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i<MAX){
        r[k] = v1[i];
        i++;
        k++;
    }

    while (j<MAX){
        r[k] = v2[j];
        j++;
        k++;
    }

    for(int i=0; i<2*MAX; i++){
        printf("R[%i] = %i.\n", i, r[i]);
    }
}