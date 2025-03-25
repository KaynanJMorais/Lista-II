#include <stdio.h>

int main() {
    float preco, novoPreco;
    int percentual;

    // Solicita ao usuário que insira o preço do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    // Determina o percentual de aumento com base no preço
    if (preco <= 50.00) {
        percentual = 5;
    } else if (preco > 50.00 && preco <= 100.00) {
        percentual = 10;
    } else {
        percentual = 15;
    }

    // Calcula o novo preço
    novoPreco = preco + (preco * percentual / 100);

    // Classifica o novo preço
    char* classificacao;
    if (novoPreco <= 80.00) {
        classificacao = "Barato";
    } else if (novoPreco > 80.00 && novoPreco <= 120.00) {
        classificacao = "Normal";
    } else if (novoPreco > 120.00 && novoPreco <= 200.00) {
        classificacao = "Caro";
    } else {
        classificacao = "Muito caro";
    }

    // Exibe o resultado
    printf("Preço original: R$ %.2f\n", preco);
    printf("Percentual de aumento: %d%%\n", percentual);
    printf("Novo preço: R$ %.2f\n", novoPreco);
    printf("Classificação: %s\n", classificacao);

    return 0;
}