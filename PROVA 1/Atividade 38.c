#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vetor[4],i;

    printf("Digite o vetor para gerar o vetor inverso:\n");
    for(i=0;i<4;i++){
        printf("%d ", i+1);
        scanf("%d",&vetor[i]);
        }
    for(i=4-1;i>=0;i--){
        printf("%d ",vetor[i]);
    }

    }
