#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){

    char a[MAX];
    char p[MAX];
    int countM[MAX] = {0};
    int countm[MAX] = {0};
    int c=0;
    int i=0;
    int l=97, k=0;

    printf("String: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1] = '\0';

    while(a[i]!='\0'){
        if(a[i]>=65 && a[i]<=90){
            countM[a[i] - 65]++;
        }
        else{
            if(a[i]>=97 && a[i]<=122)
                countm[a[i] - 97]++;
            else
                c++;
        }
        i++;
    }

    while(k<26 && l<=122){
        p[k] = l;
        k++;
        l++;
    }
    
    l=65;

    while(k>=26 && k<52 && l>=65 && l<=90){
        p[k] = l;
        k++;
        l++;
    }

    for(int j=0; j<26; j++){
        printf("%c = %i.\n", j+97, countm[j]);
    }
    
    for(int r=0; r<26; r++){
        printf("%c = %i.\n", r+65, countM[r]);
    }
    printf("? = %i.\n", c);
}