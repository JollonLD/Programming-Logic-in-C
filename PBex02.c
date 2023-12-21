#include <stdio.h>
#include <string.h>
#define max 50

int main(){

    char a[max];
    char aux[2*max];
    int i=0;
    int j=0;

    printf("String: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1] = '\0';

    j = strlen(a)-1;

    while(a[i] != '\0'){
        aux[i] = a[j];
        i++;
        j--;
    }

    for(int k=0; k<strlen(aux); k++){
        if(aux[k]>=97 && aux[k]<=122)
            aux[k] = aux[k] - 32;
    }

    printf("String: %s.\n", aux);

}