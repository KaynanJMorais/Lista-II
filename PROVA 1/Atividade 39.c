#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vetA[10],vetB[10],i;

    for(i=0;i<10;i++){
        printf("Digite o vet A ");
        scanf("%d",&vetA[i]);
        printf("Digite o vet B ");
        scanf("%d",&vetB[i]);
    }

    for(i=0;i<10;i++){
        printf("[%d] %d\n",i+1, vetA[i]);
        printf("[%d] %d\n",i+1, vetB[i]);
    }
}