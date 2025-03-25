#include <stdio.h>
#include <string.h>

/*Faça uma função em C que receba dois números inteiros x e y. Essa função deve
verificar se x é divisível por y. No caso positivo, a função deve retornar 1, caso
contrário 0. Escreva também um algoritmo para testar tal função.*/

int d(int x,int y){
    if(x % y == 0){
        return 1;
    }
    if(x % y !=0){
        return 0;
    }
}

int main(){
    int x,y,divisivel;
    printf("-----------------------------------------------\n");
    printf("       Verificador se o X divide por Y:\n");
    printf("-----------------------------------------------\n");
    printf("         Digite dois valores X e Y\n");
    scanf("%d %d", &x, &y);
    
    divisivel = d(x,y);
    printf("-----------------------------------------------\n");
    if(divisivel == 1){
        printf("Ele e divisivel\n");
    }
    if(divisivel ==0){
        printf("Ele não e divisivel\n");
    }
}