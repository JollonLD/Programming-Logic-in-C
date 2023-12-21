#include <stdio.h>
#include <string.h>
#define MAX 50

int main() {
    char A[MAX];
    char B[MAX];
    char C[MAX];
    int i = 0;
    int j = 0;

    printf("A: ");
    fgets(A, MAX, stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("B: ");
    fgets(B, MAX, stdin);
    B[strcspn(B, "\n")] = '\0';

    while (A[i] != '\0' || B[i] != '\0') {
        if (A[i] != '\0') {
            C[j] = A[i];
            j++;
        }
        if (B[i] != '\0') {
            C[j] = B[i];
            j++;
        }
        i++;
    }

    C[j] = '\0';

    printf("\n");
    printf("A: %s\n", A);
    printf("B: %s\n", B);
    printf("C: %s\n", C);

    return 0;
}