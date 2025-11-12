#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
// primeira cidade
char cidade1[50];
char codigopostal1[10];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

// Segunda cidade

char cidade2[50];
char codigopostal2[10];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

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

  printf("PIB (em Milhões):");
  scanf("%f", &pib1); 

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosturisticos1);



  // Área para exibição dos dados da cidade
  

return 0;
} 
