#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica a divisibilidade
    if (numero % 10 == 0) {
        printf("O número %d é divisível por 10.\n", numero);
    } else if (numero % 5 == 0) {
        printf("O número %d é divisível por 5.\n", numero);
    } else if (numero % 2 == 0) {
        printf("O número %d é divisível por 2.\n", numero);
    } else {
        printf("O número %d não é divisível por 10, 5 ou 2.\n", numero);
    }

    return 0;
}