#include <stdio.h>
#include <string.h>

/*Faça uma função recursiva em C chamada FIB(n) que receba o inteiro n e devolva o
n-ésimo termo da sequência de Fibonacci, definida recursivamente por:

fib(n) = fib(n-1)+fib(n-2) se n >= 3
fib(n) = 1 se 0 < n < 3 */

int fabionate(int n){
    if(n>=3){
        return fabionate(n-1)+fabionate(n-2);
    }
    if(n>0 && n<3){
        return 1;
    }
}

int main(){
     int n,resultado;
    printf("Digite um numero:\n");
    scanf("%d", &n);

    resultado = fabionate(n);

    printf("resultado: %d", resultado);
}
