#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Faça uma função em C que leia um vetor A de 30 elementos float e, usando o
procedimento METADE (criado na questão anterior), divida todos seus elementos
pela metade.*/

void metade(float *a){
    for(int i=0;i<3;i++){
        printf("A metade de %.2f é %.2f\n", a[i], a[i] / 2);
    }
    
}

int main(){
    float a[3];
    printf("Digite 30 numeros para calcular a metade deles:\n");
    for(int i=0;i<3;i++){
        scanf("%f", &a[i]);
    }

    metade(&a);
}