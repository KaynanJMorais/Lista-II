#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int matA[3][5],matB[3][5],matsoma[3][5],i,j;

    printf("Digite a matA\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("[%d][%d]",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("[%d][%d]",i+1,j+1);
            scanf("%d",&matB[i][j]);
            }
        }

     for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            matsoma[i][j]=matA[i][j]+matB[i][j];
            printf("%d\t", matsoma[i][j]);
        }
            printf("\n");
        }

}