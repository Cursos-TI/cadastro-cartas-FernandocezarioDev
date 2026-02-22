#include <stdio.h>

int main() {

    // ===== DECLARAÇÃO DAS VARIÁVEIS =====
    
    char codigo1[4], codigo2[4];
    
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    
    
    // ===== CADASTRO CARTA 1 =====
    
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    
    
    // ===== CADASTRO CARTA 2 =====
    
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    
    
    // ===== CÁLCULOS =====
    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;
    
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);
    
    
    // ===== EXIBIÇÃO DOS DADOS =====
    
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.8f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.8f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    
    // ===== COMPARAÇÕES =====
    
    printf("\n=== Resultado das Comparacoes ===\n");
    
    // População
    printf("Populacao: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // Área
    printf("Area: %s\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // PIB
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // Pontos turísticos
    printf("Pontos Turisticos: %s\n", (pontos1 > pontos2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // Densidade (MENOR vence)
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // PIB per capita
    printf("PIB per capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    // Super Poder
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu" : "Carta 2 venceu");
    
    return 0;
}