#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    char start;
    char continuar = 's';
    
    printf("\n\n");

    printf("Dseja Jogar?(s/n)\nR: ");
    scanf(" %c", &start);
    
    while(start =='s' && continuar =='s'){
    
    char tabuleiro[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
    int l, c;
    int countXl=0, countXj=0;
    int countOl=0, countOj=0;
    int countE=0;
    int countXdp=0;
    int countXds=0;
    int countOdp=0;
    int countOds=0;
    char player;
    
    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

            printf("%c  ", tabuleiro[i][j]);
        }
        
        printf("\n");
    }

    printf("\n\n");

    printf("Deseja jogar com 2 jogadores? (s/n)\nR: ");
    scanf(" %c", &player);
    

    printf("\n");

    if(player == 'S' || player == 's'){
        
        while(countXl!=3 && countXj!=3 && countOl!=3 && countOj!=3 && countE<9 && countXdp!=3 && countXds!=3 && countOdp!=3 && countOds!=3){
    
            for(int i=0; i<9; i++){
    
                if(i%2 == 0){
                    printf("Jogada jogador 1:\n");

                    printf("Linha: ");
                    scanf("%i", &l);

                    while(l<0 || l>2){
                        printf("Linha: ");
                        scanf("%i", &l);
                    }

                    printf("Coluna: ");
                    scanf("%i", &c);

                    while(c<0 || c>2){
                        printf("Coluna: ");
                        scanf("%i", &c);
                    }   
            
                    while(tabuleiro[l][c] != '.'){
                        printf("Linha: ");
                        scanf("%i", &l);

                        while(l<0 || l>2){
                            printf("Linha: ");
                            scanf("%i", &l);
                        }

                        printf("Coluna: ");
                        scanf("%i", &c);

                        while(c<0 || c>2){
                            printf("Coluna: ");
                            scanf("%i", &c);
                        }
                    }

                    tabuleiro[l][c] = 'X';

                    printf("\n\n");

                    for(int k=0; k<3; k++){

                        for(int z=0; z<3; z++){

                            printf("%c  ", tabuleiro[k][z]);
                        }

                        printf("\n");
                    }
                }
        
                printf("\n");

                if(i%2 != 0){
                    printf("Jogada jogador 2:\n");
        
                    printf("Linha: ");
                    scanf("%i", &l);

                    while(l<0 || l>2){
                        printf("Linha: ");
                        scanf("%i", &l);
                    }

                    printf("Coluna: ");
                    scanf("%i", &c);

                    while(c<0 || c>2){
                        printf("Coluna: ");
                        scanf("%i", &c);
                    }

                    while(tabuleiro[l][c] != '.'){
                        printf("Linha: ");
                        scanf("%i", &l);

                        while(l<0 || l>2){
                            printf("Linha: ");
                            scanf("%i", &l);
                        }

                        printf("Coluna: ");
                        scanf("%i", &c);

                        while(c<0 || c>2){
                            printf("Coluna: ");
                            scanf("%i", &c);
                        }
                    }  

                    printf("\n\n");

                    tabuleiro[l][c] = 'O';
    
                    for(int k=0; k<3; k++){

                        for(int z=0; z<3; z++){

                            printf("%c  ", tabuleiro[k][z]);
                        }

                        printf("\n");
                    }

                    printf("\n\n");
                }
                
                countXl=0;
                countOl=0;
                countXj=0;
                countOj=0;
                countXdp=0;
                countXds=0;
                countOdp=0;
                countOds=0;

                for(int k=0; k<3; k++){
                    if(tabuleiro[k][0] == 'X')
                        countXl++;
                }

                for(int z=0; z<3; z++){
                    if(tabuleiro[0][z] == 'X')
                        countXj++;
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][0] == 'O')
                        countOl++;
                }
                for(int z=0; z<3; z++){
                    if(tabuleiro[0][z] == 'O')
                        countOj++;
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][k]=='X')
                        countXdp++;
                }
                for(int k=0; k<3; k++){                   
                    if(tabuleiro[k][-k+2]=='X')
                        countXds++;                   
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][k]=='O')
                        countOdp++;
                }
                for(int k=2; k>=0; k--){
                    if(tabuleiro[k][-k+2]=='O')
                        countOds++;
                }

                countE++;

                if(countXl==3)
                    break;
                if(countXj==3)
                    break;
                if(countOl==3)
                    break;
                if(countOj==3)
                    break;
                if(countXdp==3)
                    break;
                if(countXds==3)
                    break;
                if(countOdp==3)
                    break;
                if(countOds==3)
                    break;
                if(countE==9)
                    break;
            }
        }
    }

    if(player == 'N' ||player == 'n'){

        while(countXl!=3 && countXj!=3 && countOl!=3 && countOj!=3 && countE<9 && countXdp!=3 && countXds!=3 && countOdp!=3 && countOds!=3){
    
            for(int i=0; i<9; i++){
    
                if(i%2 == 0){
                    printf("Jogada jogador 1:\n");

                    printf("Linha: ");
                    scanf("%i", &l);

                    while(l<0 || l>2){
                        printf("Linha: ");
                        scanf("%i", &l);
                    }

                    printf("Coluna: ");
                    scanf("%i", &c);

                    while(c<0 || c>2){
                        printf("Coluna: ");
                        scanf("%i", &c);
                    }   
            
                    while(tabuleiro[l][c] != '.'){
                        printf("Linha: ");
                        scanf("%i", &l);

                        while(l<0 || l>2){
                            printf("Linha: ");
                            scanf("%i", &l);
                        }

                        printf("Coluna: ");
                        scanf("%i", &c);

                        while(c<0 || c>2){
                            printf("Coluna: ");
                            scanf("%i", &c);
                        }
                    }

                    tabuleiro[l][c] = 'X';

                    printf("\n\n");

                    for(int k=0; k<3; k++){

                        for(int z=0; z<3; z++){

                            printf("%c  ", tabuleiro[k][z]);
                        }

                        printf("\n");
                    }
                }
        
                printf("\n");

                if(i%2 != 0){
                    
                    srand(time(NULL));

                    l = rand()%3;
                    c = rand()%3;
                        
                    while(tabuleiro[l][c] != '.'){
                        l = rand()%3;
                        c = rand()%3;
                    }

                    tabuleiro[l][c] = 'O';

                    for(int k=0; k<3; k++){

                        for(int z=0; z<3; z++){

                            printf("%c  ", tabuleiro[k][z]);
                        }

                        printf("\n");
                    }

                    printf("\n\n");

                }

                countXl=0;
                countOl=0;
                countXj=0;
                countOj=0;
                countXdp=0;
                countXds=0;
                countOdp=0;
                countOds=0;

                for(int k=0; k<3; k++){
                    if(tabuleiro[k][0] == 'X')
                        countXl++;
                }

                for(int z=0; z<3; z++){
                    if(tabuleiro[0][z] == 'X')
                        countXj++;
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][0] == 'O')
                        countOl++;
                }
                for(int z=0; z<3; z++){
                    if(tabuleiro[0][z] == 'O')
                        countOj++;
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][k]=='X')
                        countXdp++;
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][-k+2]=='X')
                        countXds++;    
                }
                for(int k=0; k<3; k++){
                    if(tabuleiro[k][k]=='O')
                        countOdp++;
                }
                for(int k=0; k<3; k++){                   
                    if(tabuleiro[k][-k+2]=='O')
                        countOds++;                   
                }

                countE++;

                if(countXl==3)
                    break;
                if(countXj==3)
                    break;
                if(countOl==3)
                    break;
                if(countOj==3)
                    break;
                if(countXdp==3)
                    break;
                if(countXds==3)
                    break;
                if(countOdp==3)
                    break;
                if(countOds==3)
                    break;
                if(countE==9)
                    break;
            }
        }
    }

    if(countE==9)
    printf("Empate!!!!");
    if(countXl==3)
    printf("JOGADOR 1 VENCEDOR!!!");
    if(countXj==3)
    printf("JOGADOR 1 VENCEDOR!!!");
    if(countXdp==3)
    printf("JOGADOR 1 VENCEDOR!!!");
    if(countXds==3)
    printf("JOGADOR 1 VENCEDOR!!!");
    if(countOl==3 && player == 's')
    printf("JOGADOR 2 VENCEDOR!!!");
    if(countOj==3 && player == 's')
    printf("JOGADOR 2 VENCEDOR!!!");
    if(countOdp==3 && player == 's')
    printf("JOGADOR 2 VENCEDOR!!!");
    if(countOds==3 && player == 's')
    printf("JOGADOR 2 VENCEDOR!!!");
    if(countOl==3 && player == 'n')
    printf("COMPUTADOR VENCEDOR!!!");
    if(countOj==3 && player == 'n')
    printf("COMPUTADOR VENCEDOR!!!");
    if(countOdp==3 && player == 'n')
    printf("COMPUTADOR VENCEDOR!!!");
    if(countOds==3 && player == 'n')
    printf("COMPUTADOR VENCEDOR!!!");
    
    printf("\n\n");
    printf("Continuar?(s/n)\nR: ");
    scanf(" %c", &continuar);
    printf("\n\n");
    }
}