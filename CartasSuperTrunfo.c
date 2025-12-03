#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Primeira cidade
  char Estado1[3], cidade1[50], codigopostal1[10];
  unsigned long int populacao1;
  float area1, pib1, densidadepopulacional1, pibpercapita1;
  int pontosturisticos1;

  // Segunda cidade
  char Estado2[3], cidade2[50], codigopostal2[10];
  unsigned long int populacao2;
  float area2, pib2, densidadepopulacional2, pibpercapita2;
  int pontosturisticos2;

  float superpoder1, superpoder2;
  

  // Cadastro da primeira cidade
  printf("=== Cadastro da primeira cidade ===\n");
  printf("Estado: "); scanf("%2s", Estado1);
  printf("Cidade: "); scanf(" %49[^\n]", cidade1);
  printf("Código postal: "); scanf("%9s", codigopostal1);
  printf("População: "); scanf("%lu", &populacao1);
  printf("Área (km²): "); scanf("%f", &area1);
  printf("PIB (bilhões): "); scanf("%f", &pib1);
  printf("Pontos turísticos: "); scanf("%d", &pontosturisticos1);

  // Cadastro da segunda cidade
  printf("\n=== Cadastro da segunda cidade ===\n");
  printf("Estado: "); scanf("%2s", Estado2);
  printf("Cidade: "); scanf(" %49[^\n]", cidade2);
  printf("Código postal: "); scanf("%9s", codigopostal2);
  printf("População: "); scanf("%lu", &populacao2);
  printf("Área (km²): "); scanf("%f", &area2);
  printf("PIB (bilhões): "); scanf("%f", &pib2);
  printf("Pontos turísticos: "); scanf("%d", &pontosturisticos2);

  // Cálculos
  densidadepopulacional1 = (float)populacao1 / area1;
  densidadepopulacional2 = (float)populacao2 / area2;

  pibpercapita1 = (pib1 * 1000000) / populacao1;
  pibpercapita2 = (pib2 * 1000000) / populacao2;

  superpoder1 = populacao1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);
  superpoder2 = populacao2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

  // Exibição das cartas
  printf("\n=== Carta da primeira cidade ===\n");
  printf("Estado: %s\nCidade: %s\nCódigo postal: %s\n", Estado1, cidade1, codigopostal1);
  printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
  printf("Pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n", 
         pontosturisticos1, densidadepopulacional1, pibpercapita1);

  printf("\n=== Carta da segunda cidade ===\n");
  printf("Estado: %s\nCidade: %s\nCódigo postal: %s\n", Estado2, cidade2, codigopostal2);
  printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
  printf("Pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n", 
         pontosturisticos2, densidadepopulacional2, pibpercapita2);

// menu interativo para escolha dos atributos
         int opcao1, opcao2;
         printf("\n=== Escolha o primeiro atributo.===\n");
         printf("1 - População\n2 - Área\n3 - PIB\n4 - PIB per capita\n5 - Pontos turísticos\n6 - Super poder\n7 - Densidade populacional\n");
         scanf("%d", &opcao1);

// Segundo menu dinâmico
         printf("\n=== Escolha o segundo atributo. ===\n");
         for(int num = 1; num <=7; num++) {
           if (num != opcao1) {
             switch (num) {
            case 1: printf("1. - População\n"); break; 
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. PIB per capita"); break;
            case 5: printf("");
            case 6: printf("");
            case 7: printf("");
              }
           }
        }

         // menu interativo
         int opcao;
         printf("\n@@@ Bem Vindo ao Jogo @@@\n");
  printf("\n### Menu de Comparação ###\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("Digite sua opção: ");
  scanf("%d", &opcao);

  printf("\n### Comparação ###\n");
  printf("Cidade 1: %s (%s)\n", cidade1, Estado1);
  printf("Cidade 2: %s (%s)\n", cidade2, Estado2);

  switch (opcao) 
  {
  case 1:
    printf("População: %lu vs %lu\n", populacao1, populacao2);
    if (populacao1 > populacao2)
    {
     printf("Vencedor: %s\n", cidade1);
    } else if (populacao2 > populacao1) {
     printf("Vencedor: %s!\n", cidade2);
    } else {
      printf("Empate!\n");
    }
    break;

    case 2:
    printf("Área: %.2f vs %2.f\n", area1, area2);
    if (area1 > area2)
    {
     printf("Vencedor: %s\n", cidade1);
    } else if (area2 > area1) {
     printf("Vencedor: %s\n", cidade2);
    } else {
      printf("Empate!\n");
    }
    break;

      case 3:
    printf("PIB: %.2f vs %.2f\n", pib1, pib2);
    if (pib1 > pib2)
    {
     printf("Vencedor: %s\n", cidade1);
    } else if (pib2 > pib1) {
     printf("Vencedor: %s!\n", cidade2);
    } else {
      printf("Empate!\n");
    }
    break;

      case 4:
    printf("Ponto turistícos: %d vs %d\n", pontosturisticos1, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
    {
     printf("Vencedor: %s\n", cidade1);
    } else if (pontosturisticos2 > pontosturisticos1) {
     printf("Vencedor: %s\n", cidade2);
    } else {
      printf("Empate!\n");
    }
    break;

      case 5:
    printf("Densidade: %.2f vs %.2f\n", densidadepopulacional1, densidadepopulacional2);
    if (densidadepopulacional1 < densidadepopulacional2)
    {
     printf("Vencedor: %s\n", cidade1);
    } else if (densidadepopulacional2 < densidadepopulacional1) {
     printf("Vencedor: %s\n", cidade2);
    } else {
      printf("Empate!\n");
    }
    break;

  default:
  printf("Opção inválida");
    break;
  }

  // Comparações
  printf("\n=== Resultado do Super Trunfo ===\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
  printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
  printf("PIB per capita: Carta 2 venceu (%d)\n", pibpercapita1 < pibpercapita2);
  printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

  // Comparação específica (população)
  printf("\n--- Comparação de cartas (População) ---\n");
  printf("Carta 1 - %s (%s): %lu\n", cidade1, Estado1, populacao1);
  printf("Carta 2 - %s (%s): %lu\n", cidade2, Estado2, populacao2);

  if (populacao1 > populacao2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  else if (populacao2 > populacao1)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
  else
    printf("Resultado: Empate!\n");

  return 0;
}