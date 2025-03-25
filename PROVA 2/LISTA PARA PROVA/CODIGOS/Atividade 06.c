#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Faça uma função em C chamada DOBRO que receba um valor do tipo float e retorne
o dobro do mesmo.*/

float dobro(float x){
    printf("-----------------------------------------------\n");
    printf("              digite um numero:\n");
    scanf("%f", &x);
    printf("-----------------------------------------------\n");
    printf("        O dobro de %.2f eh %.2f\n",x, x*2);
    printf("-----------------------------------------------\n");
}

int main(){
    float x;
    dobro(x);
}