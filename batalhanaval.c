#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int i, j;

    char nomecolunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    tabuleiro[1][2] = 3; // marcação do navio
    tabuleiro[1][3] = 3; // marcação do navio
    tabuleiro[1][4] = 3; // marcação do navio 
    tabuleiro[5][2] = 3; // marcação do navio
    tabuleiro[6][3] = 3; // marcação do navio 
    tabuleiro[7][4] = 3; // marcação do navio

    // Imprime os nomes das colunas
    for (i = 0; i < 10; i++) {
        printf("%c ", nomecolunas[i]);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Imprime o número da linha
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}

