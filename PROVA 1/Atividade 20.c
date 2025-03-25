#include <stdio.h>

int main() {
    char cpf[15]; // Para armazenar o CPF
    int horasTrabalhadas;
    float salario, salarioExcedente;

    // Solicita ao usuário que insira o CPF
    printf("Digite o CPF do operário: ");
    scanf("%s", cpf);

    // Solicita ao usuário que insira o número de horas trabalhadas
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    // Calcula o salário
    if (horasTrabalhadas > 50) {
        // Salário normal para as primeiras 50 horas
        salario = 50 * 10.00; // R$ 10,00 por hora
        // Salário excedente para as horas acima de 50
        salarioExcedente = (horasTrabalhadas - 50) * 20.00; // R$ 20,00 por hora excedente
    } else {
        salario = horasTrabalhadas * 10.00; // R$ 10,00 por hora
        salarioExcedente = 0.0; // Zera a variável de salário excedente
    }

    // Salário total é a soma do salário normal e do salário excedente
    float salarioTotal = salario + salarioExcedente;

    // Exibe os resultados
    printf("CPF do operário: %s\n", cpf);
    printf("Salário total: R$ %.2f\n", salarioTotal);
    printf("Salário excedente: R$ %.2f\n", salarioExcedente);

    return 0;
}