#include <stdio.h>
#include <math.h>

int main() {
    int tipo, meses;
    float investimento, valorCorrigido;

    // Solicita ao usuário que insira o tipo de investimento
    printf("Digite o tipo de investimento (1 - Poupança, 2 - Fundos de renda fixa): ");
    scanf("%d", &tipo);

    // Solicita ao usuário que insira a quantidade de meses
    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    // Solicita ao usuário que insira o valor do investimento
    printf("Digite o valor do investimento: R$ ");
    scanf("%f", &investimento);

    // Verifica o tipo de investimento e calcula o valor corrigido
    if (tipo == 1) {
        // Poupança: 0,5% ao mês
        valorCorrigido = investimento * pow(1 + 0.005, meses);
    } else if (tipo == 2) {
        // Fundos de renda fixa: 4% ao mês
        valorCorrigido = investimento * pow(1 + 0.04, meses);
    } else {
        printf("Tipo de investimento inválido.\n");
        return 1; // Encerra o programa em caso de tipo inválido
    }

    // Exibe o resultado
    printf("Valor corrigido após %d meses: R$ %.2f\n", meses, valorCorrigido);

    return 0;
}