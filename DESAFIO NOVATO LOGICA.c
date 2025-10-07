#include <stdio.h>

int main (){

    // --- DECLARAÇÃO DE VARIÁVEIS ---
    char Estado1[30], Estado2[30];
    char Codigo1[5], Codigo2[5];
    char Cidade1[30], Cidade2[30];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float pib1, pib2;
    int Pontosturisticos1, Pontosturisticos2;
    float pibpercapta1, pibpercapta2;
    float densidadepopulacional1, densidadepopulacional2;
    double superpoder1, superpoder2;

    // --- COLETA DE DADOS CARTA 1 ---
    printf("--- CARTA 1 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", Estado1);
    printf("Digite o Codigo da carta: ");
    scanf(" %[^\n]" , Codigo1);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a populacao: ");
    scanf(" %d", &Populacao1);
    printf("Digite a Area em km²: ");
    scanf(" %f", &Area1);
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &Pontosturisticos1);

    // --- COLETA DE DADOS CARTA 2 ---
    printf("\n--- CARTA 2 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", Estado2);
    printf("Digite o Codigo da carta: ");
    scanf(" %[^\n]" , Codigo2);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a populacao: ");
    scanf(" %d", &Populacao2);
    printf("Digite a Area em km²: ");
    scanf(" %f", &Area2);
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &Pontosturisticos2);
    
    // --- CÁLCULOS ---
    // Calcula o PIB per capita, evitando divisão por zero
    if (Populacao1 > 0) { pibpercapta1 = pib1 / Populacao1; } else { pibpercapta1 = 0; }
    if (Populacao2 > 0) { pibpercapta2 = pib2 / Populacao2; } else { pibpercapta2 = 0; }

    // Calcula a Densidade Populacional, evitando divisão por zero
    if (Area1 > 0) { densidadepopulacional1 = (float)Populacao1 / Area1; } else { densidadepopulacional1 = 0; }
    if (Area2 > 0) { densidadepopulacional2 = (float)Populacao2 / Area2; } else { densidadepopulacional2 = 0; }

    // Calcula o "Superpoder" de cada carta
    superpoder1 = (double) Populacao1 + Area1 + pib1 + Pontosturisticos1 + pibpercapta1 + densidadepopulacional1;
    superpoder2 = (double) Populacao2 + Area2 + pib2 + Pontosturisticos2 + pibpercapta2 + densidadepopulacional2;

    // --- EXIBIÇÃO E COMPARAÇÃO DOS RESULTADOS COM IF-ELSE ---
    printf ("\n\n- - - COMPARACAO INDIVIDUAL - - -\n");

    // Comparação de População
    printf("\n[1] Populacao:\n");
    printf("  > %s: %d\n", Cidade1, Populacao1);
    printf("  > %s: %d\n", Cidade2, Populacao2);
    if (Populacao1 > Populacao2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }

    // Comparação de Área
    printf("\n[2] Area:\n");
    printf("  > %s: %.2f km²\n", Cidade1, Area1);
    printf("  > %s: %.2f km²\n", Cidade2, Area2);
    if (Area1 > Area2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (Area2 > Area1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }

    // Comparação de PIB
    printf("\n[3] PIB:\n");
    printf("  > %s: R$ %.2f\n", Cidade1, pib1);
    printf("  > %s: R$ %.2f\n", Cidade2, pib2);
    if (pib1 > pib2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (pib2 > pib1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }

    // Comparação de Pontos Turísticos
    printf("\n[4] Pontos Turisticos:\n");
    printf("  > %s: %d\n", Cidade1, Pontosturisticos1);
    printf("  > %s: %d\n", Cidade2, Pontosturisticos2);
    if (Pontosturisticos1 > Pontosturisticos2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (Pontosturisticos2 > Pontosturisticos1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }
    
    // Comparação de PIB per Capita
    printf("\n[5] PIB per Capita:\n");
    printf("  > %s: R$ %.2f\n", Cidade1, pibpercapta1);
    printf("  > %s: R$ %.2f\n", Cidade2, pibpercapta2);
    if (pibpercapta1 > pibpercapta2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (pibpercapta2 > pibpercapta1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }

    // Comparação de Densidade Populacional
    printf("\n[6] Densidade Populacional:\n");
    printf("  > %s: %.2f hab/km²\n", Cidade1, densidadepopulacional1);
    printf("  > %s: %.2f hab/km²\n", Cidade2, densidadepopulacional2);
    if (densidadepopulacional1 > densidadepopulacional2) {
        printf("  Resultado: %s vence!\n", Cidade1);
    } else if (densidadepopulacional2 > densidadepopulacional1) {
        printf("  Resultado: %s vence!\n", Cidade2);
    } else {
        printf("  Resultado: Empate!\n");
    }

    // --- RESULTADO FINAL DO DUELO ---
    printf("\n\n- - - RESULTADO FINAL DO DUELO - - -\n");
    printf("Superpoder Carta 1 (%s): %.0f\n", Codigo1, superpoder1);
    printf("Superpoder Carta 2 (%s): %.0f\n", Codigo2, superpoder2);
    
    if (superpoder1 > superpoder2) {
        printf("\n>>> A CARTA 1 (%s) VENCEU O DUELO! <<<\n", Cidade1);
    } else if (superpoder2 > superpoder1) {
        printf("\n>>> A CARTA 2 (%s) VENCEU O DUELO! <<<\n", Cidade2);
    } else {
        printf("\n>>> O DUELO TERMINOU EM EMPATE! <<<\n");
    }

    return 0;
}