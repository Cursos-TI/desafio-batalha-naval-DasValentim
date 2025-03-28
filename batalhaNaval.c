#include <stdio.h>

void aplicar_habilidade(int tab[10][10], int habilidade[5][5], int x, int y) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(x+i-2 >= 0 && x+i-2 < 10 && y+j-2 >= 0 && y+j-2 < 10) {
                if(habilidade[i][j] == 1 && tab[x+i-2][y+j-2] != 3) {
                    tab[x+i-2][y+j-2] = 5;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[10][10] = {0};
    
    // Navio 1
    tabuleiro[1][2] = 3; 
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;
    
    // Navio 2
    tabuleiro[4][7] = 3; 
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    
    // Navio 3
    tabuleiro[5][2] = 3; 
    tabuleiro[6][2] = 3;
    tabuleiro[7][2] = 3;

    // Habilidades
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    
    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };
    
    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    // Aplicação das habilidades
    aplicar_habilidade(tabuleiro, cone, 3, 3);      // Cone centrado em D4
    aplicar_habilidade(tabuleiro, cruz, 5, 7);      // Cruz centrada em H6
    aplicar_habilidade(tabuleiro, octaedro, 6, 2);  // Octaedro centrado em C7

    // Tabuleiro
    printf("       Batalha Naval!\n\n");
    printf("     A B C D E F G H I J\n");
    for(int i = 0; i < 10; i++) {
        printf("%2d  ", i+1);
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Coordenadas dos navios
    printf("\nNavio 1:\n");
    printf("C2, D2, E2\n");
    
    printf("\nNavio 2:\n");
    printf("H5, H6, H7\n");
    
    printf("\nNavio 3:\n");
    printf("C6, C7, C8\n");

    return 0;
}