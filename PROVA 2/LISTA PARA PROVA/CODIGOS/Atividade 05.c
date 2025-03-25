#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C chamada CUBO que receba um valor do tipo float e retorne a
potência elevado a 3 do mesmo.*/

float cubo(float x){
    printf("Digite um numero para calcular o cubo:\n");
    printf("-----------------------------------------------\n");
    scanf("%f", &x);
    return pow(x,3);
}

int main(){
    int x;
    printf("%.2f\n", cubo(x));
}