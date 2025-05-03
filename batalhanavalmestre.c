#include <stdio.h>

int main(){

    int tabuleiro [10][10] = {0};
    int navio1[3]={3,3,3};
    int navio2[3]={3,3,3};
    
    printf("TABULEIRO BATALHA NAVAL\n");
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    };
    printf("\n");

    //Posicionamento dos navios:
    for (int i=0; i<3; i++){
        tabuleiro[0][i]=navio1[i];
    };
    for (int j=5; j<8; j++){
        for (int i=0; i<3; i++){
        tabuleiro[j][4]=navio2[i];
        };
    };
    //Posicionamento dos navios em diagonal:
    for (int i=2; i>=0; i--) {
        for (int j=6; j<9; j++){
            if (i+j==8){
                tabuleiro[i][j]=3;
            };
        };
    };
    for (int i=5;i<8;i++) {
        for (int j=6; j<9; j++){
            if(i=j-1){
                tabuleiro[i][j]=3;
            };
        }
    };
    //Posicionamento da habilidade CONE:
    for (int i=1; i<4; i++){
        for (int j=0; j<5; j++){
            if (i+j == 3){
                tabuleiro[i][j]=5;
                for (j=0; j<i+2; j++){
                    if (i+j>=3){
                        tabuleiro[i][j]=5;
                    }
                }
            } 
        }
    }

    //Posicionamento da habilidade CRUZ (centro em (8,2)):
    int x=8;
    int y=2;
    for (int i=0; i<10; i++){
        if(i<x+2 && i>x-2){
            tabuleiro[i][y]=5;
        }
    }
    for (int j=0; j<5;j++){
        if(j<y+3 && j>y-3){
            tabuleiro[x][j]=5;
        }
    }

    //Posicionamento da habilidade OCTAEDRO (centro em (3,8)):
    int z=3;
    int w=8;
    for (int i=0; i<5; i++){
        if(i<z+2 && i>z-2){
            tabuleiro[i][w]=5;
        }
    for (int j=0; j<10;j++){
        if(j<w+2 && j>w-2){
            tabuleiro[z][j]=5;
        }
    }
        
    }
        
    printf("TABULEIRO COM NAVIOS E HABILIDADES POSICIONADOS\n");
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    };

    return 0;
}