#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 2
#define MAX_DISCIPLINAS 5

typedef struct {
    char nome[50];
    float notas_media[MAX_DISCIPLINAS];
    float notas_final[MAX_DISCIPLINAS];
} Estudante;

void coletarDados(Estudante estudantes[], char materias[][50]) {
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Informe o nome do estudante %d: ", i + 1);
        scanf(" %[^\n]", estudantes[i].nome);
        
        for (int j = 0; j < MAX_DISCIPLINAS; j++) {
            printf("Informe a média da disciplina %s: ", materias[j]);
            scanf("%f", &estudantes[i].notas_media[j]);
            printf("Informe a nota da prova final da disciplina %s (0 se não houver prova final): ", materias[j]);
            scanf("%f", &estudantes[i].notas_final[j]);
        }
    }
}

void mostrarReprovados(Estudante *estudantes, char materias[][50]) {
    printf("\nEstudantes reprovados e suas disciplinas:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        int reprovado = 0;
        printf("Estudante: %s\n", estudantes[i].nome);
        for (int j = 0; j < MAX_DISCIPLINAS; j++) {
            if(estudantes[i].notas_final[j] >= 0){
                float nota_final = (estudantes[i].notas_media[j] + estudantes[i].notas_final[j]) / 2;
                if (nota_final < 6.0) { // Considerando 6.0 como a média mínima para aprovação
                    printf("  Reprovado em: %s\n", materias[j]);
                    reprovado = 1;
                }
            }
        }
        if (!reprovado) {
            printf("  Aprovado em todas as disciplinas.\n");
        }
    }
}

void gravarRegistros(Estudante estudantes[], char materias[][50]) {
    FILE *arquivo = fopen("registros.txt", "w+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < MAX_ALUNOS; i++) {
        fprintf(arquivo, "Estudante: %s\n", estudantes[i].nome);
        for (int j = 0; j < MAX_DISCIPLINAS; j++) {
            fprintf(arquivo, "  Disciplina: %s, Média: %.2f, Prova Final: %.2f\n", materias[j], estudantes[i].notas_media[j], estudantes[i].notas_final[j]);
        }
    }

    fclose(arquivo);
    printf("Registros salvos com sucesso em 'registros.txt'.\n");
}

void carregarRegistros(Estudante estudantes[], char materias[][50]) {
    FILE *arquivo = fopen("registros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    for (int i = 0; i < MAX_ALUNOS; i++) {
        fscanf(arquivo, "Estudante: %[^\n]\n", estudantes[i].nome);
        for (int j = 0; j < MAX_DISCIPLINAS; j++) {
            fscanf(arquivo, "  Disciplina: %[^,], Média: %f, Prova Final: %f\n", materias[j], &estudantes[i].notas_media[j], &estudantes[i].notas_final[j]);
        }
    }

    fclose(arquivo);
    printf("Registros carregados com sucesso de 'registros.txt'.\n");
}

int main() {
    Estudante estudantes[MAX_ALUNOS];
    char materias[MAX_DISCIPLINAS][50] = {
        "Cálculo",
        "Programação",
        "Vetores",
        "Introdução",
        "Inglês"
    };

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Coletar dados dos estudantes\n");
        printf("2. Mostrar estudantes reprovados\n");
        printf("3. Gravar registros em arquivo\n");
        printf("4. Carregar registros de arquivo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                coletarDados(estudantes, materias);
                break;
            case 2:
                mostrarReprovados(estudantes, materias);
                break;
            case 3:
                gravarRegistros(estudantes, materias);
                break;
            case 4:
                carregarRegistros(estudantes, materias);
                break;
        }
    } while(opcao != 0);
    
    return 0;
}