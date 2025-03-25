#include <stdio.h>

int main() {
    float precoAtual, desconto, novoPreco;
    int codigo;

    // Solicita ao usuário que insira o preço atual do produto
    printf("Digite o preço atual do produto: R$ ");
    scanf("%f", &precoAtual);

    // Solicita ao usuário que insira o código do produto
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    // Determina o percentual de desconto com base no preço atual
    if (precoAtual <= 30.00) {
        desconto = 0.0; // Sem desconto
    } else if (precoAtual > 30.00 && precoAtual <= 100.00) {
        desconto = 0.10; // 10% de desconto
    } else {
        desconto = 0.15; // 15% de desconto
    }

    // Calcula o valor do desconto e o novo preço
    float valorDesconto = precoAtual * desconto;
    novoPreco = precoAtual - valorDesconto;

    // Exibe os resultados
    printf("Preço atual: R$ %.2f\n", precoAtual);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Novo preço: R$ %.2f\n", novoPreco);

    return 0;
}