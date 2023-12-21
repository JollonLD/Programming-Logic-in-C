//Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).


#include <stdio.h>
#include <stdlib.h>


int main(){

  float t[12];
  float media;
  float soma = 0;
  int count=0;

  for(int i=0; i<12; i++){
    printf(" Mes %i: ", i+1);
    scanf("%f", &t[i]);
    soma = soma + t[i];
  }

  media = soma/12;
  
  for(int i=0; i<12; i++){
    if(t[i]>media)
      count++;
  }
  
  printf("\n\n");
  
  printf("Media das temperaturas: %.2f\n\n", media);
  
  if(count==0)
    printf("Nenhum mês teve temperatura acima da média");
  
  else{
    printf("Meses com a temperatua acima da média:\n");

    if(t[0]>media)
      printf("1 - Janeiro.\n");
    if(t[1]>media)
      printf("2 - Fevereiro.\n");
    if(t[2]>media)
      printf("3 - Março.\n");
    if(t[3]>media)
      printf("4 - Abril.\n");
    if(t[4]>media)
      printf("5 - Maio.\n");
    if(t[5]>media)
      printf("6 - Junho.\n");
    if(t[6]>media)
      printf("7 - Julho.\n");
    if(t[7]>media)
      printf("8 - Agosto.\n");
    if(t[8]>media)
      printf("9 - Setembro.\n");
    if(t[9]>media)
      printf("10 - Outubro.\n");
    if(t[10]>media)
      printf("11 - Novembro.\n");
    if(t[11]>media)
      printf("12 - Dezembro.\n");
  }
}