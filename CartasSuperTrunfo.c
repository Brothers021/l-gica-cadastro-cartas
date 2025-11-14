#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
// primeira cidade
char cidade1[50]; // Salvador
char codigopostal1[10]; // 40000-000
int populacao1; // 2.57 milhões 
float area1; // 693,442 km²
float pib1; // 62.954 bilhões
int pontosturisticos1; //14
float densidadepopulacional1; // 3.486,96 habitantes por km²
float PIBpercapita1; // 21.706,06

// Segunda cidade

char cidade2[50]; // Fortaleza
char codigopostal2[10]; // 29000-000
int populacao2; // 2.57 milhões
float area2; //312,353 km²
float pib2; //73,4 bilhões
int pontosturisticos2; //10
float densidadepopulacional2; // 7.775,52 habitantes por km²
float PIBpercapita2; // 27.164,45

  // Área para entrada de dados
  printf("=== cadastro da primeira cidade ===\n");
  printf("Nome da cidade: ");
  scanf("%49s", cidade1); 

  printf("Código postal:");
  scanf("%9s", codigopostal1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhões):");
  scanf("%f", &pib1); 

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosturisticos1);

  printf("densidadepopulacional1: ");
  scanf("%f", &densidadepopulacional1);

  printf("PIBpercapita1: ");
  scanf("%f", &PIBpercapita1);

  // Entarda das segundas cidades

  printf("\n=== cadastro da segunda cidade ===\n");
  printf("Nome da cidade: ");
  scanf("%49s",cidade2);  // Vitoria

  printf("código postal: ");
  scanf("%9s", codigopostal2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB (em Bilhões): ");
  scanf("%f", &pib2);

  printf("Númeo de pontos turisticos:");
  scanf("%d", &pontosturisticos2);  

  printf("densidadepopulacional2: ");
  scanf("%f", &densidadepopulacional2);

  printf("PIBpercapita2: ");
  scanf("%f", &PIBpercapita2);


  // Área para exibição dos dados da cidade 1
  
printf("\n=== carta da primeira cidade ===\n");
printf("Cidade: %s\n", cidade1);
printf("Código postal: %s\n", codigopostal1);
printf("População: %d\n", populacao1);
printf("Área (em km²): %2.f\n", area1);
printf("PIB (em milhões): %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontosturisticos1);

 // Área para exibição dos dados da cidade 2

 printf("\n=== carta da segunda cidade ===\n");
 printf("Cidade: %s\n", cidade2);
 printf("Código postal: %s\n", codigopostal2);
 printf("População: %d\n", populacao2);
 printf("Área (em km²): %.2f\n", area2);
 printf("PIB (em milhões): %.2f\n", pib2);
 printf("Número de pontos tuísticos: %d\n", pontosturisticos2); 


 
return 0;
} 
