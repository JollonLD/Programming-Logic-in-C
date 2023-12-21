#include <stdio.h>

int strlen(char[]);
char strcmp(char[], char[]);
void strcpy(char[], char[]);

int main(){

    char s1[30], s2[30];

    printf("S1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1)-1] = '\0';
    
    printf("S2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2)-1] = '\0';

    printf("Tamanho da string S1: %d.\nTamanho da string S2: %d.\n", strlen(s1), strlen(s2));
    if(strcmp(s1,s2))
        printf("Sao iguais.\n");
    else    
        printf("Sao diferentes.\n");

    strcpy(s1,s2);

    printf("A string copiada: %s", s1);
    
    return 0;
}

int strlen(char s[]){

    int i=0;

    while(s[i]!='\0'){
        i++;
    }

    return i;
}

char strcmp(char s1[], char s2[]){

    int i=0;

    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            return 0;
        }
        i++;
    }
    if(s1[i]=='\0' && s2[i]=='\0')
        return 1;
}

void strcpy(char s1[], char s2[]){

    int i=0;

    while(s2[i]!='\0'){
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}