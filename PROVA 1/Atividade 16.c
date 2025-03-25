#include <stdio.h>

int main() {
    float a, b, c;

    // Solicita ao usuário que insira as medidas dos lados do triângulo
    printf("Digite a medida do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite a medida do segundo lado: ");
    scanf("%f", &b);
    printf("Digite a medida do terceiro lado: ");
    scanf("%f", &c);

    // Verifica se as medidas podem formar um triângulo
    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        printf("As medidas %.2f, %.2f e %.2f podem representar um triângulo.\n", a, b, c);
    } else {
        printf("As medidas %.2f, %.2f e %.2f não podem representar um triângulo.\n", a, b, c);
    }

    return 0;
}