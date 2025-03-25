#include <stdio.h>

#define LINHAS 15
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int contagem[100] = {0}; // Supondo que os elementos da matriz sejam inteiros entre 0 e 99
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz A[15][5]:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            contagem[matriz[i][j]]++; // Incrementa a contagem do elemento
        }
    }

    // Impressão da matriz
    printf("\nMatriz A[15][5]:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Verificação e impressão dos elementos repetidos
    printf("\nElementos repetidos:\n");
    for (i = 0; i < 100; i++) { // Verifica os elementos de 0 a 99
        if (contagem[i] > 1) {
            printf("O elemento %d aparece %d vezes em A.\n", i, contagem[i]);
        }
    }

    return 0;
}