#include <stdio.h>

int main (){

    #include <stdio.h>

int main (){

  char Estado1 [30], Estado2 [30];
  char Codigo1 [5], Codigo2 [5];
  char Cidade1 [30], Cidade2 [30];
  int Populacao1, Populacao2;
  float Area1, Area2;
  float pib1, pib2;
  int Pontosturisticos1,Pontosturisticos2;
  float pibpercapta1, pibpercapta2;
  float densidadepopulacional1, densidadepopulacional2;
  double superpoder1, superpoder2;
  int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;
  int carta1_venceu, carta2_venceu, foi_empate;

  // --- Coleta de dados CARTA 1 ---
  printf("--- CARTA 1 ---\n");
  printf("Digite o nome do Estado: ");
  scanf(" %[^\n]", Estado1);
  printf("Digite o Código da carta: ");
  scanf(" %[^\n]" , Codigo1);
  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]", Cidade1);
  printf("Digite a população: ");
  scanf(" %d", &Populacao1);
  printf("Digite a Área em km²: ");
  scanf(" %f", &Area1);
  printf("Digite o PIB: ");
  scanf(" %f", &pib1);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d",&Pontosturisticos1);

  // --- Coleta de dados CARTA 2 ---
  printf("\n--- CARTA 2 ---\n");
  printf("Digite o nome do Estado: ");
  scanf(" %[^\n]", Estado2);
  printf("Digite o Código da carta: ");
  scanf(" %[^\n]" , Codigo2);
  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]", Cidade2);
  printf("Digite a população: ");
  scanf(" %d", &Populacao2);
  printf("Digite a Área em km²: ");
  scanf(" %f", &Area2);
  printf("Digite o PIB: ");
  scanf(" %f", &pib2);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d",&Pontosturisticos2);
 
  // --- CÁLCULOS SEGUROS ---
  if (Populacao1 > 0) { pibpercapta1 = pib1 / Populacao1; } else { pibpercapta1 = 0; }
  if (Area1 > 0) { densidadepopulacional1 = (float)Populacao1 / Area1; } else { densidadepopulacional1 = 0; }
  if (Populacao2 > 0) { pibpercapta2 = pib2 / Populacao2; } else { pibpercapta2 = 0; }
  if (Area2 > 0) { densidadepopulacional2 = (float)Populacao2 / Area2; } else { densidadepopulacional2 = 0; }

  // --- COMPARAÇÕES ---
  resultadoA = (Populacao1 > Populacao2);
  resultadoB = (Area1 > Area2);
  resultadoC = (pib1 > pib2);
  resultadoD = (Pontosturisticos1 > Pontosturisticos2);
  resultadoE = (pibpercapta1 > pibpercapta2);
  resultadoF = (densidadepopulacional1 > densidadepopulacional2);
  
  superpoder1 = (double) Populacao1 + Area1 + pib1 + Pontosturisticos1 + pibpercapta1 + densidadepopulacional1;
  superpoder2 = (double) Populacao2 + Area2 + pib2 + Pontosturisticos2 + pibpercapta2 + densidadepopulacional2;

  resultadoG = (superpoder1 > superpoder2);
  carta1_venceu = (superpoder1 > superpoder2);
  carta2_venceu = (superpoder2 > superpoder1);
  foi_empate = (superpoder1 == superpoder2);

  // --- EXIBIÇÃO DOS RESULTADOS ---
  printf ("\n\n- - - COMPARACAO INDIVIDUAL (1 = Carta 1 Vence, 0 = Nao Vence) - - -\n");
  printf("Na Populacao? \t\t\t Resultado: %d\n", resultadoA);
  printf("Na Area? \t\t\t Resultado: %d\n", resultadoB);
  printf("No PIB? \t\t\t Resultado: %d\n", resultadoC);
  printf("Nos Pontos Turisticos? \t\t Resultado: %d\n", resultadoD);
  printf("No PIB per Capita? \t\t Resultado: %d\n", resultadoE);
  printf("Na Densidade Populacional? \t Resultado: %d\n", resultadoF);

  printf("\n- - - RESULTADO FINAL (1 = Sim, 0 = Nao) - - -\n");
  printf("Superpoder Carta 1 (%s): %.0f\n", Codigo1, superpoder1);
  printf("Superpoder Carta 2 (%s): %.0f\n", Codigo2, superpoder2);
  
  printf("\nA carta 1 venceu o duelo? \t\t Resultado: %d\n", carta1_venceu);
  printf("A carta 2 venceu o duelo? \t\t Resultado: %d\n", carta2_venceu);
  printf("O duelo terminou em empate? \t\t Resultado: %d\n", foi_empate);

  return 0;
}
}


