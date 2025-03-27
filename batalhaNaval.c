#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};
    
    // Navio 1 Horizontal
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;
    
    // Navio 2 Vertical
    tabuleiro[3][6] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    
    // Navio 3 Diagonal 
    tabuleiro[7][2] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[9][0] = 3;
    
    // Navio 4 Diagonal 
    tabuleiro[0][7] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][9] = 3;
    
    printf("       Batalha Naval!\n\n");

    // Tabuleiro
    printf("     A B C D E F G H I J\n");
    for(int i = 0; i < 10; i++) {
        printf("%2d  ", i+1);
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Coordenadas dos navios
    printf("\nNavio 1 - Horizontal:\n");
    printf("C2, D2, E2\n");
    
    printf("\nNavio 2 - Vertical:\n");
    printf("G4, G5, G6, G7\n");
    
    printf("\nNavio 3 - Diagonal:\n");
    printf("A10, B9, C8\n");
    
    printf("\nNavio 4 - Diagonal:\n");
    printf("H1, I2, J3\n");
    
    return 0;
}