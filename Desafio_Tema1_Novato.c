// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 1 - Desafio Nível Novato: Criando as Cartas do Super Trunfo

#include <stdio.h>

int main(){

    //Declaração de variáveis

    char estado1, estado2, codigo1[3], codigo2[3], nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2, numPontosTur1, numPontosTur2;
    float area1, area2, pib1, pib2;

    //Coleta de dados

    printf("Bem vindo ao SUPER TRUNFO - PAÍSES, neste módulo iremos cadastrar nossas cartas. \nSiga as instruções até o final para confirmar o cadastramento. \n \nCADASTRAMENTO DA CARTA 1 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado1);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", &codigo1);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("\nPopulação: ");
    scanf("%d", &populacao1);

    printf("\nÁrea (km²): ");
    scanf("%f", &area1);

    printf("\nPIB: ");
    scanf("%f", &pib1);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur1);

    printf("Carta 1 Cadastrada com sucesso. \n \n \nCADASTRAMENTO DA CARTA 2 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado2);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", &codigo2);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("\nPopulação: ");
    scanf("%d", &populacao2);

    printf("\nÁrea (km²): ");
    scanf("%f", &area2);

    printf("\nPIB: ");
    scanf("%f", &pib2);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur2);

    printf("\nCarta 2 cadastrada com sucesso\n");

    //Impressão dos dados

    printf("******************************\n     SUPER TRUNFO - PAÍSES \n******************************\n");
    printf("* CARTA 1 \n* \n");
    printf("** Estado: %c\n", estado1);
    printf("** Código: %s\n", codigo1);
    printf("** Nome da Cidade: %s\n", nomeCidade1);
    printf("** População: %d\n", populacao1);
    printf("** Área: %f km²\n", area1);
    printf("** PIB: %f\n", pib1);
    printf("** População: %d\n", populacao1);
    printf("** Número de pontos turísticos: %d\n", numPontosTur1);
    printf("******************************\n");
    printf("* CARTA 2 \n* \n");
    printf("** Estado: %c\n", estado2);
    printf("** Código: %s\n", codigo2);
    printf("** Nome da Cidade: %s\n", nomeCidade2);
    printf("** População: %d\n", populacao2);
    printf("** Área: %f km² \n", area2);
    printf("** PIB: %f\n", pib2);
    printf("** População: %d\n", populacao2);
    printf("** Número de pontos turísticos: %d\n", numPontosTur2);
    printf("*\n*\n*\n* Fim");
}