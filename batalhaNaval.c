#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    //1. Preenche o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //2. Coloca alguns navios no tabuleiro (3 = navios)
    tabuleiro[2][8] = 3;
    tabuleiro[2][9] = 3;
    tabuleiro[2][7] = 3;

    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    tabuleiro[4][5] = 3;

    tabuleiro[4][2] = 3;
    tabuleiro[5][3] = 3;
    tabuleiro[6][4] = 3;

    //3. Habilidade Cone (forma pirâmide)
    int topo = 1;
    int centro = 4;
    for(i = 0; i < 3; i++){ //Altura da Pirâmide
        for(j = centro - i; j <= centro + i; j++) { //Largura da Pirâmide
            tabuleiro[topo + i][j] = 5; //Marca a área afetada pela habilidade
        }
    }

    //Cruz (5x5)
    int meio = 7; //Centro da Cruz
    for(i = meio - 2; i <= meio + 2; i++) {
        tabuleiro[meio][i] = 5; //Marca a linha vertical da cruz
        tabuleiro[i][meio] = 5; //Marca a linha horizontal da cruz
    }

    //Losango (Octaedro 3x3)
    int centroX = 7, centroY = 2;
    tabuleiro[centroX - 1][centroY] = 5; //Topo
    tabuleiro[centroX][centroY - 1] = 5; //Meio Esquerda
    tabuleiro[centroX][centroY] = 5; //Meio Centro
    tabuleiro[centroX][centroY + 1] = 5; //Meio Direita
    tabuleiro[centroX + 1][centroY] = 5; //Base

    //4. Imprime o tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}