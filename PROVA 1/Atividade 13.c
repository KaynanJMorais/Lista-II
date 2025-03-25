#include <stdio.h>

int main() {
    float preco;
    int codigo;

    // Solicita ao usuário que insira o preço do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    // Solicita ao usuário que insira o código de origem
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);

    // Determina a procedência com base no código de origem
    printf("Preço do produto: R$ %.2f\n", preco);
    printf("Procedência: ");

    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo >= 7 && codigo <= 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else {
        printf("Código de origem inválido.\n");
    }

    return 0;
}