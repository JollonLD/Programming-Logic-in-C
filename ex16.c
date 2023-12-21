/*
Utilize uma lista para resolver o problema a seguir. Uma empresa paga seus vendedores com base em comissões. 
O vendedor recebe $200 por semana mais 9 por cento de suas vendas brutas daquela semana. 
Por exemplo, um vendedor que teve vendas brutas de $3000 em uma semana recebe $200 mais 9 por cento de $3000, ou seja, um total de $470. 
Escreva um programa (usando um array de contadores) que determine quantos vendedores receberam salários nos seguintes intervalos de valores:
$200 - $299
$300 - $399
$400 - $499
$500 - $599
$600 - $699
$700 - $799
$800 - $899
$900 - $999
$1000 em diante
Desafio: Crie uma fórmula para chegar na posição da lista a partir do salário, sem fazer vários ifs aninhados.
*/

#include <stdio.h>

int main(){

    int n;
    float s[n], c[n];
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0;

    printf("Informe o nº de funcionário: ");
    scanf("%i", &n);

    printf("\n");
    printf("Venda de cada funcionário:\n\n");

    for(int i=0; i<n; i++){
        printf("Funcionário %i: ", i+1);
        scanf("%f", &c[i]);
    }
    printf("\n\n");
    
    for(int i=0; i<n; i++){
        s[i] = c[i]*0.09 + 200;
    }

    printf("Salários:\n");

    for(int i=0; i<n; i++){
        printf("Funcionário %i: %.2f\n", i+1, s[i]);
    }

    printf("\n\n");

    for(int i=0; i<n; i++){
      if(s[i]>=200 && s[i]<=299){
        cont1++;
      }
      if(s[i]>=300 && s[i]<=399){
        cont2++;
      }
      if(s[i]>=400 && s[i]<=499){
        cont3++;
      }
      if(s[i]>=500 && s[i]<=599){
        cont4++;
      }
      if(s[i]>=600 && s[i]<=699){
        cont5++;
      }
      if(s[i]>=700 && s[i]<=799){
        cont6++;
      }
      if(s[i]>=800 && s[i]<=899){
        cont7++;
      }
      if(s[i]>=900 && s[i]<=999){
        cont8++;
      }
      if(s[i]>=1000){
        cont9++;
      }
    }

    printf("Nº de salários entre 200 e 299: %i\n", cont1);
    printf("Nº de salários entre 300 e 399: %i\n", cont2);
    printf("Nº de salários entre 400 e 499: %i\n", cont3);
    printf("Nº de salários entre 500 e 599: %i\n", cont4);
    printf("Nº de salários entre 600 e 699: %i\n", cont5);
    printf("Nº de salários entre 700 e 799: %i\n", cont6);
    printf("Nº de salários entre 800 e 899: %i\n", cont7);
    printf("Nº de salários entre 900 e 999: %i\n", cont8);
    printf("Nº de salários maiores ou igual a 1000: %i\n", cont9);


    return 0;
}