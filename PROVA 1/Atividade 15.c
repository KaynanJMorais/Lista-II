#include <stdio.h>

int main() {
    float horasExtras, horasFaltas, H, gratificacao;

    // Solicita ao usuário que insira o número de horas extras
    printf("Digite o número de horas extras: ");
    scanf("%f", &horasExtras);

    // Solicita ao usuário que insira o número de horas faltas
    printf("Digite o número de horas faltas: ");
    scanf("%f", &horasFaltas);

    // Calcula H
    H = horasExtras - (2.0 / 3.0) * horasFaltas;

    // Determina a gratificação com base no valor de H
    if (H > 2400) {
        gratificacao = 500.00;
    } else if (H > 1800) {
        gratificacao = 400.00;
    } else if (H > 1200) {
        gratificacao = 300.00;
    } else if (H > 600) {
        gratificacao = 200.00;
    } else {
        gratificacao = 100.00;
    }

    // Exibe o resultado
    printf("Valor da gratificação: R$ %.2f\n", gratificacao);

    return 0;
}