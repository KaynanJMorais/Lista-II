#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    // Solicita ao usuário que insira a altura
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    // Solicita ao usuário que insira o sexo
    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); // O espaço antes de %c é para ignorar qualquer espaço em branco

    // Calcula o peso ideal com base no sexo
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58; // Fórmula para homens
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7; // Fórmula para mulheres
    } else {
        printf("Sexo inválido. Por favor, insira 'M' para masculino ou 'F' para feminino.\n");
        return 1; // Encerra o programa em caso de sexo inválido
    }

    // Exibe o resultado
    printf("O peso ideal para uma pessoa de %.2f metros de altura é: %.2f kg\n", altura, pesoIdeal);

    return 0;
}