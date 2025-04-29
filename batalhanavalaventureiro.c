#include <stdio.h>

int main(){

    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
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
        
    printf("TABULEIRO COM NAVIOS POSICIONADOS\n");
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    };

    return 0;
}