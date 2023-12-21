#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    char s[MAX];
    int countM=0;
    int countm=0;
    int countn=0;
    int i=0;

    printf("String: ");
    fgets(s, MAX, stdin);
    s[strlen(s) - 1] = '\0';

    while(s[i]!='\0'){
        if(s[i]>=65 && s[i]<=90){
            countM++;
        }
        else{    
            if(s[i]>=97 && s[i]<=122){
                countm++;
            }
            else{
                countn++;
            }
        }
        i++;
    }

    printf("Nº de Maiúsculas: %i.\n", countM);
    printf("Nº de minúsculas: %i.\n", countm);
    printf("Nº de caracteres: %i.\n", countn);
}   