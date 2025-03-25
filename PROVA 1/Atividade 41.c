#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int soma = 0,i,j,matriz[3][3];

    printf("Digite o valor da matriz e calcule sua diagonal principal:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("matriz\n");
    printf("\n");

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }

    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
            soma += matriz[i][j];
            }
        }
    }
        printf("Soma da diagonal principal: %d\n",soma);
}