#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo_da_carta1[5], nome_da_cidade1[50];
    int populacao1;
    float area_em_km2_1, pib1;
    int num_pontos_turisticos1;

    // Coleta de dados da primeira carta
    printf("Dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_da_carta1);
    printf("Nome da Cidade: ");
    scanf(" %\n", nome_da_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos_turisticos1);
    printf("\n");

    // Declaração das variáveis para a segunda carta
    char estado2, codigo_da_carta2[5], nome_da_cidade2[50];
    int populacao2;
    float area_em_km2_2, pib2;
    int num_pontos_turisticos2;

    // Coleta de dados da segunda carta
    printf("Dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_da_carta2);
    printf("Nome da Cidade: ");
    scanf(" %\n", nome_da_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos_turisticos2);
    printf("\n");

    // Exibir os dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area_em_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("\n");

    // Exibir os dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area_em_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);

    return 0;
}
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
