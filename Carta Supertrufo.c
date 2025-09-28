#include <stdio.h>

int main (){

  char Estado1 [30], Estado2 [30];
  char Codigo1 [5], codigo2 [5];
  char Cidade1 [30], Cidade2 [30];
  int Populacao1, Populacao2;
  float Area1, Area2;
  float pib1, pib2;
  int Pontosturisticos1,Pontosturisticos2;

  // Informações da Carta 1

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", Estado1);

  printf("Digite o Código da carta: \n");
  scanf(" %[^\n]" , Codigo1);

  printf("Digite o nome da Cidade: \n");
  scanf(" %[^\n]", Cidade1);

  printf("Digite a população: \n");
  scanf(" %d", &Populacao1);

  printf("Digite a Área em km²: \n");
  scanf(" %f", &Area1);

  printf("Digite o PIB: \n");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de pontos turísticos1: \n");
  scanf(" %d",&Pontosturisticos1);

  // INformações da carta 2

   printf("Digite o nome do Estado2: \n");
  scanf(" %[^\n]", Estado2);

  printf("Digite o Código da carta2: \n");
  scanf(" %[^\n]" , codigo2);

  printf("Digite o nome da Cidade2: \n");
  scanf(" %[^\n]", Cidade2);

  printf("Digite a população2: \n");
  scanf(" %d", &Populacao2);

  printf("Digite a Área em km²2: \n");
  scanf(" %f", &Area2);

  printf("Digite o PIB2: \n");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turísticos2: \n");
  scanf(" %d",&Pontosturisticos2);
  
  // Confirmação de leitura de dados inseridos para cada carta.

    printf("\n\n--- DADOS DA CARTA 1 INSERIDOS ---\n");
    printf("Código: %s, Cidade: %s, Estado: %s\n", Codigo1, Cidade1, Estado1);
    printf("População: %d\n", Populacao1);

    printf("\n--- DADOS DA CARTA 2 INSERIDOS ---\n");
    printf("Código: %s, Cidade: %s, Estado: %s\n", codigo2, Cidade2, Estado2);
    printf("População: %d\n", Populacao2);





  return 0;




   }





