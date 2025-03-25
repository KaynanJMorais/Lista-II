#include <stdio.h>

int main() {
    float salario, gratificacao, salarioComGratificacao, imposto, valorFinal;

    // Solicita ao usuário que insira o salário do funcionário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Determina a gratificação com base no salário
    if (salario <= 350.00) {
        gratificacao = 100.00;
    } else if (salario <= 600.00) {
        gratificacao = 75.00;
    } else if (salario <= 900.00) {
        gratificacao = 50.00;
    } else {
        gratificacao = 35.00;
    }

    // Calcula o salário com gratificação
    salarioComGratificacao = salario + gratificacao;

    // Calcula o imposto de 7% sobre o salário sem gratificação
    imposto = salario * 0.07;

    // Calcula o valor final a receber
    valorFinal = salarioComGratificacao - imposto;

    // Exibe o resultado
    printf("Salário: R$ %.2f\n", salario);
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Valor a receber: R$ %.2f\n", valorFinal);

    return 0;
}