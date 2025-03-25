#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*Faça uma função em C que receba três números e usando a função DOBRO da
questão anterior imprima o dobro de cada um dos números. Use no mínimo 2 funções.*/

void numeros(float *n1,float *n2, float *n3){
    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", n1, n2, n3);
}
void dobrar(float n1,float n2, float n3){
    printf("O dobro de %.2f é %.2f\n", n1, n1*2);
    printf("-----------------------------------------------\n");
    printf("O dobro de %.2f é %.2f\n", n2, n2*2);
    printf("-----------------------------------------------\n");
    printf("O dobro de %.2f é %.2f\n", n3, n3*2);
    printf("-----------------------------------------------\n");
}

int main(){
    float n1,n2,n3;
    numeros(&n1,&n2,&n3);
    dobrar(n1,n2,n3);
}