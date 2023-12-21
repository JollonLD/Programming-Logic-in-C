#include<stdio.h>
#include<string.h>

int main(){
  char A[100],B[100],C[100],D[100];

  printf("Escreva uma frase: ");
  fgets(A,sizeof(A),stdin);
  A[strlen(A)-1] = '\0';

  printf("Escreva uma palavra que contém no A: ");
  fgets(B,sizeof(B),stdin);
  B[strlen(B)-1] = '\0';
  

  printf("Escreva uma palavra para substituir no B: ");
  fgets(C,sizeof(C),stdin);
  C[strlen(C)-1] = '\0';

  int tamanhoA = strlen(A);
  int tamanhoB = strlen(B);
  int tamanhoC = strlen(C);
  
  //j(para o B),i(para o A),k(para o D)
  int j=0,i=0,k=0;

  for(i=0;i<tamanhoA;i++){
    if(A[i] == B[j]){
      j++;
      if(j==tamanhoB){
        //concatenar,dar um novo valor para o k e resetar j
        strcat(D,C);
        k = k + tamanhoC;
        j = 0;
      }
    }
    else{
        //atribuir valor,soma k,resetar j
        D[k] = A[i];
        k++;
        j=0;
    }
  }
  D[k]='\0';
  printf("%s",D);
  return 0;
    
}