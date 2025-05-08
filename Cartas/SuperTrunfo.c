#include <stdio.h>

int main() {
    char estado1, estado2; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    char cidade1[50], cidade2[50];
    char codigo1[20], codigo2[20];

    // Entrada da Carta 1
    printf("Digite a letra do seu estado A-H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    float densidade1 = populacao1 / area1;
    float percapita1 = pib1 / populacao1;
    float inversa_densidade1 = 1.0f / densidade1;
    float superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + inversa_densidade1;

    // Entrada da Carta 2
    printf("\nDigite a letra do seu estado A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código (ex: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    float densidade2 = populacao2 / area2;
    float percapita2 = pib2 / populacao2;
    float inversa_densidade2 = 1.0f / densidade2;
    float superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + inversa_densidade2;

    // Impressão dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");

    int resultado;

    resultado = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pontos1 > pontos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = densidade1 < densidade2; // menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = percapita1 > percapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = superpoder1 > superpoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}