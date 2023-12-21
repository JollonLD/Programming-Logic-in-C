#include <stdio.h>

int main(){

int mat[4][5];
int somalinha[4] = {0, 0, 0, 0};
int total = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("V[%i][%i] = ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            somalinha[i] = somalinha[i] + mat[i][j];
        }
    }

    for(int i=0; i<4; i++){
        total = total + somalinha[i];
    }

    printf("\nSoma total: %i.", total);
}