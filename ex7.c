#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 8

int main(){

    int mat[M][M];

    srand(time(NULL));

    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            mat[i][j] = rand()%100;
        }
    }

    for(int i=0; i<M-1; i++){
        for(int j=i+1; j<M; j++){
            mat[i][j] = 0;
        }
    }

    printf("\n\n");

    printf("Matriz:\n\n");

    for(int i=0; i<M; i++){
        
        printf("|");
        
        for(int j=0; j<M; j++){
            if(j==M-1)
                printf("%i", mat[i][j]);
            else
                printf("%i\t", mat[i][j]);
        }

        printf("|");

        printf("\n");
    }
}