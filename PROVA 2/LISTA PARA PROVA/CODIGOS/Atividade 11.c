#include <stdio.h>
#include <string.h>

/*Faça uma função em C chamada PAR, que deve retornar o valor inteiro “0” se o
número recebido por parâmetro for é par.*/

int lu(int *x){
    if(*x%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int x,par;
    printf("-----------------------------------------------\n");
    printf("   Digite um numero para ver se ele e par:\n");
    scanf("%d", &x);
    
    par = lu(&x);
    printf("-----------------------------------------------\n");
    if(par == 0){
        printf("                    Par\n");
    }
    else{
        printf("                    Impar\n");
    }
    printf("-----------------------------------------------\n");
}