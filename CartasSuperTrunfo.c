#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char letraCarta1 = 'A';
  char codigoCarta1[3] = "A01";
  char nomeCidadeCarta1[50] = "Cidade A";
  int populacaoCarta1 = 6000000;
  float areaCarta1 = 500.0;
  float pibCarta1 = 2000000000.0;
  int pontosTuristicosCarta1 = 8;

  char letraCarta2 = 'B';
  char codigoCarta2[3] = "B01";
  char nomeCidadeCarta2[50] = "Cidade B";
  int populacaoCarta2 = 3000000;
  float areaCarta2 = 300.0;
  float pibCarta2 = 1500000000.0;
  int pontosTuristicosCarta2 = 5;
  
  char letraCarta3;
  char codigoCarta3[3];
  char nomeCidadeCarta3[50];
  int populacaoCarta3;
  float areaCarta3;
  float pibCarta3;
  int pontosTuristicosCarta3;



  // Área para entrada de dados
  printf("Digite a letra da carta 3: ");
  scanf(" %c", &letraCarta3);
  if (letraCarta3 == 'A' || letraCarta3 == 'B') {
    printf("Letra da carta já utilizada. Por favor, escolha outra letra.\n");
    return 1; // Encerra o programa com erro
  }
  printf("Digite o código da carta 3: ");
  scanf("%s", codigoCarta3);

  if (strcmp(codigoCarta3, codigoCarta1) == 0 || strcmp(codigoCarta3, codigoCarta2) == 0) {
    printf("Código da carta já utilizado. Por favor, escolha outro código.\n");
    return 1; // Encerra o programa com erro
  }
  printf("Digite o nome da cidade da carta 3: ");
  scanf("%s", nomeCidadeCarta3);

  printf("Digite a população da cidade da carta 3: ");
  scanf("%d", &populacaoCarta3);

  printf("Digite a área da cidade da carta 3: ");
  scanf("%f", &areaCarta3);

  printf("Digite o PIB da cidade da carta 3: ");
  scanf("%f", &pibCarta3);

  printf("Digite o número de pontos turísticos da cidade da carta 3: ");
  scanf("%d", &pontosTuristicosCarta3);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Letra: %c\n", letraCarta1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
  printf("População: %d\n", populacaoCarta1);
  printf("Área: %.2f km²\n", areaCarta1);
  printf("PIB: %.2f\n", pibCarta1);
  printf("Pontos Turísticos: %d\n", pontosTuristicosCarta1);

  printf("\nCarta 2:\n");
  printf("Letra: %c\n", letraCarta2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
  printf("População: %d\n", populacaoCarta2);
  printf("Área: %.2f km²\n", areaCarta2);
  printf("PIB: %.2f\n", pibCarta2);
  printf("Pontos Turísticos: %d\n", pontosTuristicosCarta2);

  printf("\nCarta 3:\n");
  printf("Letra: %c\n", letraCarta3);
  printf("Código: %s\n", codigoCarta3);
  printf("Nome da Cidade: %s\n", nomeCidadeCarta3);
  printf("População: %d\n", populacaoCarta3);
  printf("Área: %.2f km²\n", areaCarta3);
  printf("PIB: %.2f\n", pibCarta3);
  printf("Pontos Turísticos: %d\n", pontosTuristicosCarta3);

return 0;
} 
