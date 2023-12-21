#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    char a[MAX];
    char aux[2*MAX];
    int i = 0;
    int j = 0; 

    printf("String: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';

    for(j=strlen(a)-1; j>=0; j--){
        aux[i] = a[j];
        i++;
    }

    printf("String invertida: %s.\n", aux);

    return 0;

}