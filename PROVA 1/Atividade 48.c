#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i,j, n = 0;
    float m[3][3], media = 0,soma = 0;

    printf("Digite a matriz\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d]: ",i+1,j+1);
            scanf("%f", &m[i][j]);
        }
    }
    printf("\nMATRIZ\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                n ++;
                soma += m[i][j];
                media = soma/n;
            }
        }
    }


    printf("A media da matriz diagonal e: %.2f", media);
    
}