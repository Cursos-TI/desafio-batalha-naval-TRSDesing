#include <stdio.h>

//Define a matriz e o vetor
#define LINHA 10
#define COLUNA 10

//Armazena os barcos usando o void pra ficar mais ou menos "organizado".
void navios(){
    //Primeiro navio
    Tabuleiro[0][3] = 1;
    Tabuleiro[1][3] = 1;
    Tabuleiro[2][3] = 1;
    Tabuleiro[3][3] = 1;
    Tabuleiro[4][3] = 1;
    
    Tabuleiro[2][1] = 1;
    Tabuleiro[2][2] = 1;
    Tabuleiro[2][4] = 1;
    Tabuleiro[2][5] = 1;

    //Segundo navio
    Tabuleiro[5][2] = 2;
    Tabuleiro[6][1] = 2;
    Tabuleiro[6][2] = 2;
    Tabuleiro[6][3] = 2;
    
    Tabuleiro[7][0] = 2;
    Tabuleiro[7][1] = 2;
    Tabuleiro[7][2] = 2;
    Tabuleiro[7][3] = 2;
    Tabuleiro[7][4] = 2;

    //Terceiro navio
    Tabuleiro[3][7] = 3;
    Tabuleiro[4][7] = 3;
    Tabuleiro[4][6] = 3;
    Tabuleiro[4][8] = 3;
    
    Tabuleiro[5][7] = 3;
    Tabuleiro[5][5] = 3;
    Tabuleiro[5][6] = 3;
    Tabuleiro[5][8] = 3;
    Tabuleiro[5][9] = 3;
    
    Tabuleiro[6][7] = 3;
    Tabuleiro[6][6] = 3;
    Tabuleiro[6][8] = 3;
    Tabuleiro[7][7] = 3;
}

int main(){
    //"Chamando" e atribuindo valores
    char colunas[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int Tabuleiro[LINHA][COLUNA];

    //Base do tabuleiro
    for(int i = 0; i < LINHA; i++){ //int i igual a zero, i menor que LINHA, incrementa
        for(int j = 0; j < COLUNA; j++){ //j igual a zero, j menor que COLUNA, incrementa
            Tabuleiro[i][j] = 0;
        }
    }

    //Navios
    navios(); //"Chama" o void

    //titulo do tabuleiro
    printf("### TABULEIRO BATALHA NAVAL ###\n");
    printf("  ");

    //Mostrar "corpo" do tabuleiro
    for(int i = 0; i < COLUNA; i++){
        printf("%c ", colunas[i]);
    }
    
    printf("\n"); //espaço

    for(int i = 0; i < LINHA; i++){
        printf("%d ", i);
        for(int j = 0; j < COLUNA; j++){
            printf("%d ", Tabuleiro[i][j]);
        }
    }
    return 0;
}
