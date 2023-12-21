#include <stdio.h>

int ncontra(int, int);

int ncasas(int);

int main(){

  int n;

  printf("N: ");
  scanf("%d", &n);
  printf("Nº de casas: %d\n", ncasas(n));
  printf("O numero ao contrario: %d\n", ncontra(n, ncasas(n)));
}

int ncasas(int n){

  int d=1, i=1;
  int count = 0;
  
  while(d!=0){
    d = n/i;
    i = 10 * i;
    if(d!=0)
      count++;
  }

  return count;
}

int ncontra(int num, int count){

  int d=1, numinvert=0;
  int p=1;
  double i=1;
  
  for(int j=0; i<count; j++){
    i *= i*10;
  }

  while(d!=0){
    d = num/i;
    if(d!=0)
      numinvert += d*p;

    num = num - i*d;
    p = p*10;
    i = i/10;
  }
  
  return numinvert;
}