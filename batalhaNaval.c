#include <stdio.h>

int main() {

    int tabuleiro[5][5] = {0};
    
    // Navio 1 horizontal
    tabuleiro[0][1] = 1;
    tabuleiro[0][2] = 1;
    tabuleiro[0][3] = 1;
    
    // Navio 2 vertical
    tabuleiro[2][3] = 1;
    tabuleiro[3][3] = 1;
    tabuleiro[4][3] = 1;
    
    printf("Batalha Naval!\n\n");

    // Tabuleiro
    printf("    A B C D E\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d ", i+1);
        for (int j = 0; j < 5; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}