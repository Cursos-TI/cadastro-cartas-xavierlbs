#include <stdio.h>
int main() {

  //Declaração das Variáveis
  char nome_estado1[20] = "Rio de Janeiro", nome_estado2[20] = "Rio de Janeiro";
  char codigo1[20] = "A01", codigo2[20] = "A02";
  char nome_cidade1[20] = "Itaboraí", nome_cidade2[20] = "Niterói";
  int populacao1, populacao2;
  int area1, area2;
  float pib1, pib2;
  int pontos_turisticos1 = 15, pontos_turisticos2 = 45;
  float densidade1, densidade2;
  float pib_per_capita1, pib_per_capita2;
  double super_poder_carta1, super_poder_carta2;

  //Carta 1
  populacao1 = 224267;
  area1 = 430;
  pib1 = 6.3;
  densidade1 = (float)populacao1 / area1;
  pib_per_capita1 = (float)pib1 * 1000000000 / (populacao1);
  super_poder_carta1 = (double)populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + densidade1 + pib_per_capita1;

  //Impressão da Carta 1
  printf("---------Carta A01-----------\n");
  printf("Nome do Estado: %s\n", nome_estado1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("Quantitativo populacional: %d\n", populacao1);
  printf("Area em quilômetros quadrados: %d\n", area1);
  printf("PIB anual da cidade: %.2f bilhões\n", pib1);
  printf("Quantidade aproximada de pontos turístico na cidade: %d\n", pontos_turisticos1);
  printf("Densidade demografica da cidade: %.2f\n", densidade1);
  printf("PIB per capita anual da cidade: %.2f\n", pib_per_capita1);
  printf("O super poder é nível: %.0f \n", super_poder_carta1);

  //Carta 2
  populacao2 = 516787;
  area2 = 134;
  pib2 = 66.34;
  densidade2 = (float)populacao2 / area2;
  pib_per_capita2 = (float)pib2 * 1000000000 / (populacao2);
  super_poder_carta2 = (double)populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + densidade2 + pib_per_capita2;

  //Impressão da Carta 2
  printf("---------Carta A02-----------\n");
  printf("Nome do Estado: %s\n", nome_estado2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("Quantitativo populacional: %d\n", populacao2);
  printf("Area em quilômetros quadrados: %d\n", area2);
  printf("PIB anual da cidade: %.2f bilhões\n", pib2);
  printf("Quantidade aproximada de pontos turístico na cidade: %d\n", pontos_turisticos2);
  printf("Densidade demografica da cidade: %.2f\n", densidade2);
  printf("PIB per capita anual da cidade: %.2f\n", pib_per_capita2);
  printf("O super poder é nível: %.0f \n", super_poder_carta2);

  printf("\n \n \n A carta um tem mais poder que a carta 2? %d \n", super_poder_carta1 > super_poder_carta2);
  printf("\n \n \n A carta um tem o mesmo poder que a carta 2? %d \n", super_poder_carta1 == super_poder_carta2);
  printf("\n \n \n A carta um tem menos poder que a carta 2? %d \n", super_poder_carta1 < super_poder_carta2);

  return 0;
}