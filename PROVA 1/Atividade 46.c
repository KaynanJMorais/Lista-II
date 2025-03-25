#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v[3][3],i,j,a,soma = 0;

    printf("Digite a matriz\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d]: ",i+1,j+1);
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");
    printf("MATRIZ");
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Digite um valor para ver quantas vezes ele aparece na matriz: ");
    scanf("%d", &a);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(v[i][j] == a){
                soma += 1;
            }
        }
    }
    printf("\n");
    printf("este numero se repete: %d vezes\n",soma);
    system("pause");
}