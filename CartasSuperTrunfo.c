#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo_da_carta1[5], nome_da_cidade1[50];
    int populacao1;
    float area_em_km2_1, pib1;
    float densidade_populacional;
    float PIB_per_capita;
    int num_pontos_turisticos1;

    // Coleta de dados da primeira carta
    printf("Dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_da_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos_turisticos1);
    printf("\n");

    //densidade populacional
    densidade_populacional = (float)populacao1 / (area_em_km2_1 + (area_em_km2_1 == 0)); // Evita divisão por zero
    PIB_per_capita = pib1 / (float)(populacao1 + (populacao1 == 0)); // Evita divisão por zero


   // Exibição dos resultados
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f Reias\n", PIB_per_capita);

    // Declaração das variáveis para a segunda carta
    char estado2, codigo_da_carta2[5], nome_da_cidade2[50];
    int populacao2;
    float area_em_km2_2, pib2;
    float densidade_populacional2;
    float PIB_per_capita2;
    int num_pontos_turisticos2;

    // Coleta de dados da segunda carta
    printf("Dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_da_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("População: ");
    scanf("%i", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos_turisticos2);
    printf("\n");

    //densidade populacional
    densidade_populacional2 = (float)populacao2 / (area_em_km2_2 + (area_em_km2_2 == 0)); // Evita divisão por zero
    PIB_per_capita2 = pib2 / (float)(populacao2 + (populacao2 == 0)); // Evita divisão por zero


   // Exibição dos resultados
    printf("Densidade populacional2: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita2: %.2f Reias\n", PIB_per_capita2);


    // Exibir os dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area_em_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade populacional é: %.2f \n", densidade_populacional);
    printf("PIB per Capita é %d \n", PIB_per_capita);
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
    printf("Densidade populacional é: %.2f \n", densidade_populacional2);
    printf("PIB per Capita é %d \n", PIB_per_capita2);

        printf("Comparando População:\n");
    if (populacao1 > populacao2) {
        printf("A carta vencedora é: %s (População: %d)\n", nome_da_cidade1, populacao1);
    } else { 
        printf("A carta vencedora é: %s (População: %d)\n", nome_da_cidade2, populacao2);
    }

    return 0;
}