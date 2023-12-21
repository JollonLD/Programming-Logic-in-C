#include <stdio.h>


int main(){


    float q[20];
    float menor;
    int p;

    printf("Q[0] = ");
    scanf("%f", &q[0]);

    while(q[0]<=0){
        printf("Q[0] = ");
        scanf("%f", &q[0]);
    }

    menor = q[0];

    for(int i=1; i<20; i++){
        printf("Q[%i] = ", i);
            scanf("%f", &q[i]);

        while(q[i]<=0){
            printf("Q[%i] = ", i);
            scanf("%f", &q[i]);
        }

        if(q[i]<menor){
            menor = q[i];
        }

    }
    printf("\n\n");

    printf("Vetor: \n");

    printf("Q[20] = ");

    printf("%.2f", q[0]);

    for(int i=1; i<20; i++){
        printf(", %.2f", q[i]);
    }

    for(int i=0; i<20; i++){
        if(q[i]==menor){
            p=i;
        }
    }
    printf("\n\n");
    printf("O vetor Q[%i] = %.2f é o menor.\n", p, menor);


return 0;

}