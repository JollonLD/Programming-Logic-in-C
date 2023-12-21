#include <stdio.h>
int fatcalc(int);

int main(){

  int n;

  printf("N: ");
  scanf("%d", &n);

  printf("%d! = %d", n, fatcalc(n));
}

int fatcalc(int n){

  int fat1=1, fat=1;
  
  for(int i=n; i>=1; i--){
    fat *= fat1*i;
  }
  return fat;
}