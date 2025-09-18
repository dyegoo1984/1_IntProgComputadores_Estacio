//============================================================================================
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 1
//
// OBJETIVO DESTA PARTE:
// Implementar o cadastro e a listagem de livros usando um Array estático.
// Foco em Structs, entrada/saida de dados e organização básica.
//
//============================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constantes globais

#define MAX_LIVROS 50
#define TAM_STRING 100

// Definição da estrutura (Struct)
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// Função para limpar o buffer de entrada
void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != "\n" && c != EOF);
}

// Função Principal

int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    //Menu
    printf("================================================\n");
    printf("              BIBLIOTECA - PARTE 1\n");
    printf("================================================\n");
    printf("1 - Cadastrar novo livro\n");
    printf("2 - Listar todos os livros\n");
    printf("3 - Sair\n");
    printf("-------------------------------\n");
    printf("Escolha uma opção: ");

    //Lê a opção do usuário.
    scanf("%d", &opcao);
    limparBufferEntrada();

    // processamento da opção

    switch (opcao){
        case 1:
            printf(" - - - Cadastro de novo livro - - - \n");
            if(totalLivros < MAX_LIVROS){
                printf("Digite o nome do livro: \n");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);
                printf("Digite o autor: \n");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);
                printf("Digite a editora: \n");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);
            }
                
    }
}