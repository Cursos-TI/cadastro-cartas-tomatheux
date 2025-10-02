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
  scanf(" %[^\n]" , Codigo2);

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
    printf("Código: %s, Cidade: %s, Estado: %s\n", Codigo2, Cidade2, Estado2);
    printf("População: %d\n", Populacao2);


   

                // *--- VERIFICAÇÃO DE CÁLCULOS SEGUROS ---*

// Para o PIB per capita1
if (Populacao1 > 0) {
    pibpercapta1 = pib1 / Populacao1;
} else {
    pibpercapta1 = 0; // Define como 0 se a população for 0
}

// Para a densidade populacional
if (Area1 > 0) {
    densidadepopulacional1 = Populacao1 / Area1;
} else {
    densidadepopulacional1 = 0; // Define como 0 se a área for 0
}
  

// Para o PIB per capita2
if (Populacao2 > 0) {
    pibpercapta2 = pib2 / Populacao2;
} else {
    pibpercapta2 = 0; // Define como 0 se a população for 0
}

// Para a densidade populacional
if (Area2 > 0) {
    densidadepopulacional2 = Populacao2 / Area2;
} else {
    densidadepopulacional2 = 0; // Define como 0 se a área for 0
}


  // EXIBIÇÃO DOS RESULTADOS

   printf ("\n\n - - -  RESULTADOS CALCULADOS - - - \n");
   printf(" A densidade da carta 1 é: %f\n",densidadepopulacional1);
   printf("O pibe per capta da cidade 1 é: %f\n",pibpercapta1);



   printf(" A densidade da carta 2 é: %f\n",densidadepopulacional2);
   printf("O pibe per capta da cidade 2 é: %f\n",pibpercapta2);





  return 0;




   }

