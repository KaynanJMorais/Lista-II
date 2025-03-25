#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Faça uma função em C chamada METADE que divida um valor do tipo float
(passado como parâmetro) pela metade.*/

float metade(float *x){
    printf("-----------------------------------------------\n");
    printf("A metade de %.2f eh %.2f\n", *x, *x/2);
}

int main(){
    float x;
    printf("Digite um valor para dividir pela metade: ");
    scanf("%f", &x);

    metade(&x);
}