#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*TREINANDO INGLÊS TBM*/
/*Faça um programa em C que receba duas notas, calcule e mostre a média aritmética e
a mensagem que está na tabela a seguir:*/

int main(){
    float media,nota1,nota2;

    printf("digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media <= 4)
    printf("Reprovado");
    if(media > 4 && media <= 7)
    printf("Exame");
    if(media > 7)
    printf("Aprovado");
    }