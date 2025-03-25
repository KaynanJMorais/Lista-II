#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;

    // Solicita ao usuário que insira o nome
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Usando fgets para ler o nome

    // Solicita ao usuário que insira o sexo
    printf("Digite o seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); // O espaço antes de %c é para ignorar qualquer espaço em branco

    // Solicita ao usuário que insira a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verifica as condições e exibe as mensagens apropriadas
    if (idade < 18) {
        printf("%sMENOR\n", nome);
    } else if (sexo == 'M' && idade > 65) {
        printf("%sAPOSENTADO\n", nome);
    } else if (sexo == 'F' && idade > 60) {
        printf("%sAPOSENTADA\n", nome);
    }

    return 0;
}