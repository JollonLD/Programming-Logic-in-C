#include <stdio.h>

int divisao(int, int);

int main(){

  int dividendo;
  int divisor;

  printf("Dividendo: ");
  scanf("%d", &dividendo);
  printf("Divisor: ");
  scanf("%d", &divisor);

  printf("A divisão de %d por %d é: %d", dividendo, divisor, divisao(dividendo, divisor));

  return 0;
}

int divisao(int n, int m){

  int resultado=n;
  int i=0;
  
  while(resultado>=0){
    resultado += -m;
    if(resultado>=0)
      i++;
  }

  return i;
}