#include <stdio.h>

int main(){

  float n[20];

  for(int i=0; i<20; i++){
    printf("N[%i] = ",i);
    scanf("%f", &n[i]);
  }

  printf("N[20] = %.2f", n[19]);
  for(int i=18; i>=0; i--){
    printf(", %.2f", n[i]);
  }

return 0;

}