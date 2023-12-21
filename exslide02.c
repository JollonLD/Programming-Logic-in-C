#include <stdio.h>
#include <string.h>

int main() {
    char A[1000];
    char B[100];
    char C[100];
    char resultado[1000] = "";

    printf("A: ");
    fgets(A, sizeof(A), stdin);
    A[strlen(A) - 1] = '\0';

    printf("B: ");
    fgets(B, sizeof(B), stdin);
    B[strlen(B) - 1] = '\0';

    printf("C: ");
    fgets(C, sizeof(C), stdin);
    C[strlen(C) - 1] = '\0';

    int tamanhoA = strlen(A);
    int tamanhoB = strlen(B);
    int tamanhoC = strlen(C);

    int i = 0, j = 0;

    while (i<tamanhoA){
        if (A[i] == B[j]){
            int k;
            for (k=0; k<tamanhoB; k++){
                if (A[i+k]!=B[k]){
                    break;
                }
            }

            if (k == tamanhoB){
                strcat(resultado, C);
                i = i + tamanhoB;
                j = 0;
                continue;
            }
        }

        char temp[2];
        temp[0] = A[i];
        temp[1] = '\0';
        strcat(resultado, temp);
        i++;
    }

    printf("%s\n", resultado);

    return 0;
}
