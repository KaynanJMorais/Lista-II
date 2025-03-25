#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int matB[10][15], maiorvalor,linhamaior,colunamaior,i,j;

    printf("Digite o valor da sua matriz\n");
    for(i=0;i<10;i++){
        for(j=0;j<15;j++){
            printf("Elemento [%d][%d]: ",i+1,j+1);
            scanf("%d",&matB[i][j]);
    }
    }
    maiorvalor = matB[0][0];
    linhamaior = 0;
    colunamaior = 0;

    for(i=0;i<10;i++){
        for(j=0;j<15;j++){
            if(matB[i][j] > maiorvalor){
                maiorvalor = matB[i][j];
                linhamaior = i;
                colunamaior = j;
            }
        }
    }
    printf("\n");
    printf("MATRIZ:\n");
    printf("\n");
    for(i=0;i<10;i++){
        for(j=0;j<15;j++){
            printf("%d ",matB[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    printf("Maior valor: %d\n",maiorvalor);
    printf("Este numero esta localizado\n");
    printf("Linha: %d Coluna: %d",linhamaior + 1, colunamaior +1);

}