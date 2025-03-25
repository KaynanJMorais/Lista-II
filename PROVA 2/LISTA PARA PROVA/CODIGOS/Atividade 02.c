#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Supondo que todo carro tem um modelo, marca, ano, cor e preço. Faça um programa
que leia as informações de 10 carros que uma concessionária possui para revenda e
imprima na tela o modelo, marca, cor e o ano dos carros que possuem preço abaixo de
R$ 80.000,00. Faça funções específicas a para leitura e impressão dos dados.*/

void leiturac(char modelo[][10], char marca[][10], int ano[], char cor[][10], float valor[]){
    int i;
    printf("-----------------------------------------------\n");
    printf("               TABELA DE CARROS:\n");
    printf("-----------------------------------------------\n");
    for(i=0;i<2;i++){
        printf("         Digite o modelo do carro:\n");
        scanf("%s" , modelo[i]);
        printf("-----------------------------------------------\n");
        printf("          Digite a marca do carro:\n");
        scanf("%s", marca[i]);
        printf("-----------------------------------------------\n");
        printf("          Digite o ano do carro:\n");
        scanf("%d", &ano[i]);
        printf("-----------------------------------------------\n");
        printf("          Digite a cor do carro:\n");
        scanf("%s", cor[i]);
        printf("-----------------------------------------------\n");
        printf("          Digite o valor do carro:\n");
        scanf("%f", &valor[i]);
        printf("\n");
    
    }
}
void mostrar(char modelo[][10], char marca[][10], int ano[], char cor[][10], float valor[]){
    int i;
    printf("-----------------------------------------------\n");
    printf("           CARROS ABAIXO DE 80.000\n");
    for(i=0;i<2;i++){
        if(valor[i] < 80000.00){
            printf("-----------------------------------------------\n");
            printf("             Modelo: %s\n", modelo[i]);
            printf("-----------------------------------------------\n");
            printf("              Marca: %s\n", marca[i]);
            printf("-----------------------------------------------\n");
            printf("              Cor: %s\n", cor[i]);
            printf("-----------------------------------------------\n");
            printf("               Ano: %d\n", ano[i]);
            printf("-----------------------------------------------\n");
            printf("               Valor: %.2f\n", valor[i]);
            printf("-----------------------------------------------\n");
        }
    }
}

void gravarregis(char modelo[][10], char marca[][10], int ano[], char cor[][10], float valor[]){
    FILE *arquivo = fopen("registro.txt", "w+");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo para escrito.\n");
        return;
    }

    for(int i=0; i<2;i++){
        fprintf(arquivo, "Modelo: %s\n", modelo[i]);
        fprintf(arquivo, "Marca: %s\n", marca[i]);
        fprintf(arquivo, "Ano: %d\n", ano[i]);
        fprintf(arquivo, "Cor: %s\n", cor[i]);
        fprintf(arquivo, "Valor: %.2f\n", valor[i]);
    }
    fclose(arquivo);
    printf("Registros salvos com sucesso em 'registro.txt'.\n");
}


int main(){
    char modelo[3];
    char marca[3];
    int ano[3];
    float valor[3];
    char cor[3][10];

    leiturac(modelo,marca,ano,valor,cor);
    printf("\n");
    mostrar(modelo,marca,ano,valor,cor);
    printf("\n");
    gravarregis(modelo,marca,ano,valor,cor);
}
