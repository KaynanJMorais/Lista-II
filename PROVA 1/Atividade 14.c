#include <stdio.h>

int main() {
    float preco, aumento, imposto, novoPreco;
    int categoria;
    char situacao;

    // Solicita ao usuário que insira o preço do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    // Solicita ao usuário que insira a categoria do produto
    printf("Digite a categoria do produto (1 - Limpeza, 2 - Alimentação, 3 - Vestuário): ");
    scanf("%d", &categoria);

    // Solicita ao usuário que insira a situação do produto
    printf("Digite a situação do produto (R - Refrigeração, N - Não Refrigeração): ");
    scanf(" %c", &situacao); // O espaço antes de %c é para ignorar qualquer espaço em branco

    // Calcula o aumento com base no preço e na categoria
    if (preco <= 25.00) {
        if (categoria == 1) {
            aumento = preco * 0.05; // 5% para limpeza
        } else if (categoria == 2) {
            aumento = preco * 0.08; // 8% para alimentação
        } else if (categoria == 3) {
            aumento = preco * 0.10; // 10% para vestuário
        }
    } else {
        if (categoria == 1) {
            aumento = preco * 0.12; // 12% para limpeza
        } else if (categoria == 2) {
            aumento = preco * 0.15; // 15% para alimentação
        } else if (categoria == 3) {
            aumento = preco * 0.18; // 18% para vestuário
        }
    }

    // Calcula o imposto
    if (categoria == 2 && situacao == 'R') {
        imposto = preco * 0.05; // 5% se categoria 2 e situação R
    } else {
        imposto = preco * 0.08; // 8% caso contrário
    }

    // Calcula o novo preço
    novoPreco = preco + aumento - imposto;

    // Exibe os resultados
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Novo preço: R$ %.2f\n", novoPreco);

    // Classificação do novo preço
    printf("Classificação: ");
    if (novoPreco <= 50.00) {
        printf("Barato\n");
    } else if (novoPreco > 50.00 && novoPreco < 120.00) {
        printf("Normal\n");
    } else {
        printf("Caro\n");
    }

    return 0;
}