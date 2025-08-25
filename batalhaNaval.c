#include <stdio.h>

int main() {
    // Definindo o tamanho do tabuleiro
    int tabuleiro[5][5] = {0}; // 5x5 para simplicidade

    // Posicionamento do navio horizontal (linha 1, colunas 1 a 3)
    int navioHorizontalLinha = 1;
    int navioHorizontalColunaInicio = 1;
    int navioHorizontalTamanho = 3;
    for(int i = 0; i < navioHorizontalTamanho; i++){
        tabuleiro[navioHorizontalLinha][navioHorizontalColunaInicio + i] = 1; // 1 representa navio
    }

    // Posicionamento do navio vertical (coluna 4, linhas 2 a 4)
    int navioVerticalColuna = 4;
    int navioVerticalLinhaInicio = 2;
    int navioVerticalTamanho = 3;
    for(int i = 0; i < navioVerticalTamanho; i++){
        tabuleiro[navioVerticalLinhaInicio + i][navioVerticalColuna] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(tabuleiro[i][j] == 1){
                printf("Navio em: Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    return 0;
}

