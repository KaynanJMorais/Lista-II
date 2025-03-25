#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    float inverso,n,fat;

    printf("Digite o numero que deseja calcular o fatorial e veja seu inverso: ");
    scanf("%f", &n);
    fat = 1;
    
    for(i=n;i>0;i--){
        fat = fat * i;
    }
    inverso = 1/n;

    printf("Fatorial: %.2f\n", fat);
    printf("Inverso: %.2f\n", inverso);
}