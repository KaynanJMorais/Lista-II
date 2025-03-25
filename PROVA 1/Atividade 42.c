#include <stdio.h>

#define LINHAS_A 3
#define COLUNAS_A 5
#define LINHAS_B 5
#define COLUNAS_B 3

int main() {
    float A[LINHAS_A][COLUNAS_A], B[LINHAS_B][COLUNAS_B], produto[LINHAS_A][COLUNAS_B];

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (3x5):\n");
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_A; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Leitura da matriz B
    printf("Digite os elementos da matriz B (5x3):\n");
    for (int i = 0; i < LINHAS_B; i++) {
        for (int j = 0; j < COLUNAS_B; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    // Inicializa a matriz produto com zeros
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_B; j++) {
            produto[i][j] = 0;
        }
    }

    // Cálculo do produto A * B
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_B; j++) {
            for (int k = 0; k < COLUNAS_A; k++) {
                produto[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Impressão da matriz produto
    printf("Matriz produto (A * B):\n");
    for (int i = 0; i < LINHAS_A; i++) {
        for (int j = 0; j < COLUNAS_B; j++) {
            printf("%.2f ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}