#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // primeira cidade
char Estado1[3]; // BA
char cidade1[50]; // Salvador
char codigopostal1[10]; // 40000-000
float populacao1; // 2.57 milhões 
float area1; // 693,442 km²
float pib1; // 62.954 bilhões
int pontosturisticos1; //14
float densidadepopulacional1; // 3.486,96 habitantes por km²
float pibpercapita1; // 21.706,06

// Segunda cidade
char Estado2[3]; // CE
char cidade2[50]; // Fortaleza
char codigopostal2[10]; // 29000-000
float populacao2; // 2.57 milhões
float area2; //312,353 km²
float pib2; //73,4 bilhões
int pontosturisticos2; //10
float densidadepopulacional2; // 7.775,52 habitantes por km²
float pibpercapita2; // 27.164,45

  // Área para entrada de dados
  printf("=== cadastro da primeira cidade ===\n");
  printf("Estado: ");
  scanf("%2s", Estado1);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", cidade1); 

  printf("Código postal:");
  scanf("%9s", codigopostal1);

  printf("População: ");
  scanf("%f", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhões):");
  scanf("%f", &pib1); 

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosturisticos1);

  printf("densidade populacional1: ");
  scanf("%f", &densidadepopulacional1);

  printf("pib per capita1: ");
  scanf("%f", &pibpercapita1);

  // Entarda das segundas cidades

  printf("\n=== cadastro da segunda cidade ===\n");
  printf("Estado2: ");
  scanf("%2s", Estado2);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", cidade2); 

  printf("código postal: ");
  scanf("%9s", codigopostal2);

  printf("População: ");
  scanf("%f", &populacao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB (em Bilhões): ");
  scanf("%f", &pib2);

  printf("Númeo de pontos turisticos:");
  scanf("%d", &pontosturisticos2);  

  printf("densidade populacional2: ");
  scanf("%f", &densidadepopulacional2);

  printf("PIB per capita2: ");
  scanf("%f", &pibpercapita2);


  // Área para exibição dos dados da cidade 1
  
printf("\n=== carta da primeira cidade ===\n");
printf("Estado: %s\n", Estado1);
printf("Cidade: %s\n", cidade1);
printf("Código postal: %s\n", codigopostal1);
printf("População: %f\n", populacao1);
printf("Área (em km²): %.2f\n", area1);
printf("PIB (em milhões): %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontosturisticos1);
printf("densidade populacional1: %.2f\n", densidadepopulacional1);
printf("pib per capita1: %.2f\n", pibpercapita1);
 // Área para exibição dos dados da cidade 2

 printf("\n=== carta da segunda cidade ===\n");
 printf("Estado: %s\n", Estado2);
 printf("Cidade: %s\n", cidade2);
 printf("Código postal: %s\n", codigopostal2);
 printf("População: %f\n", populacao2);
 printf("Área (em km²): %.2f\n", area2);
 printf("PIB (em milhões): %.2f\n", pib2);
 printf("Número de pontos tuísticos: %d\n", pontosturisticos2); 
 printf("densidade populacional2: %.2f\n", densidadepopulacional2);
 printf("pib per capita2: %.2f\n", pibpercapita2);

 
return 0;
} 
