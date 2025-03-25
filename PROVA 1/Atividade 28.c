#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1; // Inicializa ehPrimo como 1 (verdadeiro)

    // Solicita ao usuário que insira um número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        printf("O número deve ser maior que 1.\n");
        return 1; // Encerra o programa se o número não for positivo
    }

    // Verifica se o número é primo
    for (i = 2; i * i <= numero; i++) { // Verifica até a raiz quadrada do número
        if (numero % i == 0) {
            ehPrimo = 0; // Se encontrar um divisor, não é primo
            break; // Sai do loop
        }
    }

    // Exibe o resultado
    if (ehPrimo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}