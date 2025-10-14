#include <stdio.h>

int main() {
    int i, j;
    // 0 representa água, 3 representa parte de um navio
   int tabuleiro[10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 3, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    printf("Tabuleiro do jogo:\n"); // Imprime o tabuleiro
    for(int i = 0; i < 10; i++) { // Percorre as linhas
        for(int j = 0; j < 10; j++) { // Percorre as colunas 
            printf("%d ", tabuleiro[i][j]); // Imprime o valor na posição [i][j]
        }
        printf("\n");
    
   }
    
   printf("Posições dos navios (representadas por 3):\n"); // Imprime as posições dos navios
   for(i = 0; i < 10; i++) { // Percorre as linhas
       for(j = 0; j < 10; j++) { // Percorre as colunas
           if(tabuleiro[i][j] == 3) { // Verifica se há um navio na posição [i][j]
               printf("Navio na posição [%d][%d]\n", i, j); // Imprime a posição do navio
           }
       }

    }


    return 0;
}