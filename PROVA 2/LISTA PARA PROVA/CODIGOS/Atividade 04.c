#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C que recebe uma string S e um inteiro positivo N e exiba a
string S por N vezes seguidas na tela.*/

void imprimir(int n, char nome[30]){
    printf("Digite alguma palavra:\n");
    scanf("%s", &nome);
    printf("Quantas vezes deseja repetir essa palavra:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    printf("%s\n", &nome);
    }
}

int main(){
    int n;
    char nome[10];
    imprimir(n,nome);
}