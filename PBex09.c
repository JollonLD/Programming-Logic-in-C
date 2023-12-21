#include <stdio.h>
#include <string.h>
#define max 1000

int main(){

    char cpf[14];
    int CPF[11];
    int soma1=0, soma2=0;
    int mult[2];
    int i;
    int j=10;
    int k=0;

    printf("CPF(xxx.xxx.xxx-xx): ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strlen(cpf)-1] = '\0';
    

    for(i=0; i<15; i++){
        if(cpf[i]!='.' && cpf[i]!='-'){
            sscanf(&cpf[i], "%d", &CPF[k]);
            k++;
        }
    }
    i=0;
    while(i<9 && j>=2){
        soma1 += j*CPF[i];
        i++;
        j--;
    }
    i=1;
    j=10;
    while(i<10 && j>=2){
        soma2 += j*CPF[i];
        i++;
        j--;
    }

    printf("%i\n",soma1);
    printf("%i\n",soma2);

    mult[0] = soma1%11;
    mult[1] = soma2%11;

    if(mult[0]==CPF[9] && mult[1]==CPF[10])
        printf("CPF valido.\n");
    else
        printf("CPF invalido.\n");
}   