#include <stdio.h>

int main(){

    int n[10];
    int o[10];

    for(int i=0; i<10; i++){

        printf("V[%i] = ", i);
        scanf("%i", &n[i]);
    }

    for(int i=0; i<10; i++){

        if(n[i]<n[i+1]){
            o[i] = n[i];
        }
    }

    printf("V[10] = %i", o[0]);
    
    for (int i=1; i<10; i++){
        printf(", %i", o[i]);    
    }
    
}