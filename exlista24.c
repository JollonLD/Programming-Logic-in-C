#include <stdio.h>

int comb(int, int);

int main(){

    int n, r;

    printf("Objetos: ");
    scanf("%d", &n);

    printf("Grupos: ");
    scanf("%d", &r);

    printf("A cobinanacao de %d de %d em %d é: %d", n, r, r, comb(n,r));

    return 0;
}

int comb(int n, int r){

    int fatn=1, fatr=1, fatd=1;
    int C;

    for(int i=n; i>0; i--){
        fatn *= i;
    }

    for(int i=r; i>0; i--){
        fatr *= i;
    }

    for(int i=n-r; i>0; i--){
        fatd *= i;
    }

    C = fatn/(fatd*fatr);

    return C;
}