#include <stdio.h>
#include <string.h>
#define max 100

int main(){

    int dia;
    char mes[max];
    int ano;

    printf("Mês: ");
    fgets(mes, sizeof(mes), stdin);
    mes[strlen(mes)-1] = '\0';

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Ano: ");
    scanf("%d", &ano);

    printf("Nasceu em %d de %s de %d.\n", dia, mes, ano);
}