#include <stdio.h>
#include <string.h>

#define MAX_OBRAS 3000
#define MAX_NOME 100
#define MAX_EDITORA 100
#define MAX_PALAVRAS_CHAVES 200
#define MAX_ASSUNTO 100

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    char autor[MAX_NOME];
    char editora[MAX_EDITORA];
    char doado;
    int numPaginas;
    char palavrasChaves[MAX_PALAVRAS_CHAVES];
    char assunto[MAX_ASSUNTO];
} Obra;

Obra biblioteca[MAX_OBRAS];

int pesquisarPorCodigo(int codigo) {
    for (int i = 0; i < MAX_OBRAS; i++) {
        if (biblioteca[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

int contarObrasPorAutor(const char* autor) {
    int contador = 0;
    for (int i = 0; i < MAX_OBRAS; i++) {
        if (strcmp(biblioteca[i].autor, autor) == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    biblioteca[0].codigo = 1001;
    strcpy(biblioteca[0].nome, "Obra de Exemplo 1");
    strcpy(biblioteca[0].autor, "Autor A");
    strcpy(biblioteca[0].editora, "Editora A");
    biblioteca[0].doado = 'C';
    biblioteca[0].numPaginas = 200;
    strcpy(biblioteca[0].palavrasChaves, "exemplo, teste");
    strcpy(biblioteca[0].assunto, "Ciências Exatas");

    biblioteca[1].codigo = 1002;
    strcpy(biblioteca[1].nome, "Obra de Exemplo 2");
    strcpy(biblioteca[1].autor, "Autor B");
    strcpy(biblioteca[1].editora, "Editora B");
    biblioteca[1].doado = 'D';
    biblioteca[1].numPaginas = 150;
    strcpy(biblioteca[1].palavrasChaves, "exemplo, teste");
    strcpy(biblioteca[1].assunto, "Ciências Humanas");

    int codigoParaPesquisar = 1001;
    int posicao = pesquisarPorCodigo(codigoParaPesquisar);
    if (posicao != -1) {
        printf("Código encontrado na posição: %d\n", posicao);
    } else {
        printf("Código não encontrado.\n");
    }

    const char* autorParaContar = "Autor A";
    int totalObras = contarObrasPorAutor(autorParaContar);
    printf("Total de obras do autor '%s': %d\n", autorParaContar, totalObras);

    return 0;
}