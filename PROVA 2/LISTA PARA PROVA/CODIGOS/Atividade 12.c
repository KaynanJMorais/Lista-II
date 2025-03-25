#include <stdio.h>
#include <string.h>

/*Faça uma única função em C que retorna o MENOR, o MAIOR e a SOMA de um
vetor com 50 elementos passados por parâmetro. A impressão dos resultados deve ser
feita no programa main. Faça uma versão utilizando ponteiros e outra utilizando
struct.*/

void completa(int *vetor, int *menor, int *maior, int *soma) {
    *menor = 99999;
    *maior = -9999;
    *soma = 0;
    printf("Digite um numero\n");
    for(int i=0;i<3;i++){
    scanf("%d", &vetor[i]);
    }
    for(int i=0;i<3;i++){
        *soma += vetor[i];
        if(*maior < vetor[i]){
            *maior = vetor[i];
        }
        if(*menor > vetor[i]){
            *menor = vetor[i];
    }
    }
}

int main(){
    int *v, soma, maior,menor;

    completa(v,&menor,&maior,&soma);
    printf("Soma: %d\n", soma);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}