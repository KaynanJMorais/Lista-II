#include <stdio.h>

#define LINHAS 5
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];
    int resultado[LINHAS][3]; // Para armazenar maior, menor e soma

    // Leitura da matriz original
    printf("Digite os elementos da matriz (5 linhas e 10 colunas):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Processamento para encontrar maior, menor e soma
    for (int i = 0; i < LINHAS; i++) {
        int maior = matriz[i][0];
        int menor = matriz[i][0];
        int soma = 0;

        for (int j = 0; j < COLUNAS; j++) {
            // Atualiza maior e menor
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
            // Calcula a soma
            soma += matriz[i][j];
        }

        // Armazena os resultados na matriz resultado
        resultado[i][0] = maior; // Maior
        resultado[i][1] = menor; // Menor
        resultado[i][2] = soma;   // Soma
    }

    // Impressão da matriz resultado
    printf("\nMatriz com o maior, menor e soma de cada linha:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Linha %d: Maior = %d, Menor = %d, Soma = %d\n", i + 1, resultado[i][0], resultado[i][1], resultado[i][2]);
    }

    return 0;
}