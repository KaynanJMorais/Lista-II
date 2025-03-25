#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int mat[5][4], matT[4][5],i,j;

    printf("Digite a matriz [2][3]\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("[%d][%d]",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("Matriz\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ", mat[i][j]);
            }
            printf("\n");
            }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            matT[j][i] = mat[i][j];
        }
    }
    printf("Matriz Transposta:\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d ", matT[i][j]);
    }
    printf("\n");
    }

}