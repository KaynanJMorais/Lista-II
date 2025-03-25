#include <stdio.h>

int main() {
    float salario, novoSalario;
    int percentual;

    // Solicita ao usuário que insira o salário do funcionário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Determina o percentual de aumento com base na faixa salarial
    if (salario <= 300.00) {
        percentual = 50;
    } else if (salario > 300.00 && salario <= 500.00) {
        percentual = 40;
    } else if (salario > 500.00 && salario <= 700.00) {
        percentual = 30;
    } else if (salario > 700.00 && salario <= 800.00) {
        percentual = 20;
    } else if (salario > 800.00 && salario <= 1000.00) {
        percentual = 10;
    } else {
        percentual = 5; // Para salários acima de R$ 1000, o aumento é de 5%
    }

    // Calcula o novo salário
    novoSalario = salario + (salario * percentual / 100);

    // Exibe o resultado
    printf("Salário original: R$ %.2f\n", salario);
    printf("Percentual de aumento: %d%%\n", percentual);
    printf("Novo salário: R$ %.2f\n", novoSalario);

    return 0;
}