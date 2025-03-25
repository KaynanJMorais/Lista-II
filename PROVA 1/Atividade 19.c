#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita ao usuário que insira o peso e a altura
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o IMC
    printf("Seu IMC é: %.2f\n", imc);

    // Determina o grau de obesidade
    if (imc < 20.0) {
        printf("Você está abaixo do peso ideal.\n");
    } else if (imc >= 20.0 && imc < 25.0) {
        printf("Parabéns! Você está em seu peso normal!\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Você está acima do seu peso (sobrepeso).\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Obesidade moderada (grau I).\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Obesidade severa (grau II).\n");
    } else {
        printf("Obesidade mórbida (grau III).\n");
    }

    return 0;
}