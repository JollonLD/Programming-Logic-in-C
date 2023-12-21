#include <stdio.h>

#define M 3
#define N 2

int main(){

    int mat[M][N];

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            printf("Mat[%i][%i] = ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
    printf("\n");

    printf("Matriz:\n\n");

    for(int i=0; i<M; i++){
        printf("|");
        
        for(int j=0; j<N; j++){
            if(j==1)
                printf("%i", mat[i][j]);
            else
                printf("%i   ", mat[i][j]);
        }
        
        printf("|");
        
        printf("\n");
    }

    return 0;
}