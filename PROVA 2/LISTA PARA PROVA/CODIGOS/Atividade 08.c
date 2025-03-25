#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*Faça uma função em C chamada TROCA que receba duas variáveis inteiras (X e Y) e
troque o conteúdo entre elas.*/

void troca(int x, int y){
    printf("Digite dois valores para trocar eles:\n");
    scanf("%d %d", &x, &y);
    int aux = x;
    int aux2 = y;
    printf("          Antes x = %d, y = %d\n", x,y);
    printf("-----------------------------------------------\n");
    printf("           x = %d, y = %d\n", aux2, aux);
    printf("-----------------------------------------------\n");
}

int main(){
    int x,y;
    troca(x,y);
}