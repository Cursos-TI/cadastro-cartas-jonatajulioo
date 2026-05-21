#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//carta 1
char letraCarta1;
char codigoCarta1[4];
char nomeCidadeCarta1[50];
int populacaoCarta1;
float areaCarta1;
float pibCarta1;
int pontosTuristicosCarta1;
float pibPerCapitaCarta1;
float densidadeCarta1;
float superPoderCarta1;

//carta 2
char letraCarta2;
char codigoCarta2[4];
char nomeCidadeCarta2[50];
int populacaoCarta2;
float areaCarta2;
float pibCarta2;
int pontosTuristicosCarta2;
float pibPerCapitaCarta2;
float densidadeCarta2;
float superPoderCarta2;

//função para exibir as cartas do jogo
void exibirCartas() {
  // função para exibir as cartas do jogo
  printf("Exibindo as cartas do jogo...\n");

  //carta 1
  printf("\nCarta 1:\n");
  printf("Letra: %c\n", letraCarta1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
  printf("População: %d\n", populacaoCarta1);
  printf("Área: %.2f km²\n", areaCarta1);
  printf("PIB: %.2f\n", pibCarta1);
  printf("Pontos Turísticos: %d\n", pontosTuristicosCarta1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadeCarta1);
  printf("PIB per Capita: %.2f\n", pibPerCapitaCarta1);
  
  //carta 2
  printf("\nCarta 2:\n");
  printf("Letra: %c\n", letraCarta2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
  printf("População: %d\n", populacaoCarta2);
  printf("Área: %.2f km²\n", areaCarta2);
  printf("PIB: %.2f\n", pibCarta2);
  printf("Pontos Turísticos: %d\n", pontosTuristicosCarta2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadeCarta2);
  printf("PIB per Capita: %.2f\n", pibPerCapitaCarta2);
}

//função para cadastrar as cartas padrão do jogo
void cartasPadrao() {
  // função das cartas padrão do jogo
  letraCarta1 = 'A';
  strcpy(codigoCarta1, "A01");
  strcpy(nomeCidadeCarta1, "Cidade A");
  populacaoCarta1 = 6000000;
  areaCarta1 = 500.0;
  pibCarta1 = 2000000000.0;
  pontosTuristicosCarta1 = 8;

  letraCarta2 = 'B';
  strcpy(codigoCarta2, "B01");
  strcpy(nomeCidadeCarta2, "Cidade B");
  populacaoCarta2 = 3000000;
  areaCarta2 = 300.0;
  pibCarta2 = 1500000000.0;
  pontosTuristicosCarta2 = 5;
}

//função para calcular a densidade populacional das cidades
void calcDensidadePopulacional() {
  // função para calcular a densidade populacional das cidades
  densidadeCarta1 = populacaoCarta1 / areaCarta1;
  densidadeCarta2 = populacaoCarta2 / areaCarta2;
}

//funcão para calcular o pib per capita das cidades
void calcPibPerCapita() {
  pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;
  pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;
}

void mostrarMenu() {
  // função para mostrar o menu do jogo
  printf("\nMenu do Jogo:\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Exibir Cartas\n");
  printf("3. Calcular Super Poder\n");
  printf("4. Comparar Cartas\n");
  printf("5. Sair\n");
  iniciarJogo();
}

void iniciarJogo() {
  // função para iniciar o jogo
  int jogoIniciado;
  printf("Digite a opção desejada: ");
  scanf("%d", &jogoIniciado);

  
  switch (jogoIniciado){
    case 1:
      cartasPadrao();
      calcDensidadePopulacional();
      calcPibPerCapita();
      mostrarMenu();
      break;

    case 2:
      exibirCartas();
      mostrarMenu();
      break;

    case 3:
      calcSuperPoder();
      mostrarMenu();
      break;

    case 4:
      compararCartas();
      mostrarMenu();
      break;

    case 5:
      return 0;
      break;
    
    default:
      printf("Opção inválida!\n");
      mostrarMenu();
  }
}

void calcSuperPoder() {
  // função para calcular o super poder das cartas
  printf("\nCalculando o super poder das cartas...\n");
  
  superPoderCarta1 = (pibPerCapitaCarta1 * pontosTuristicosCarta1) / densidadeCarta1;
  superPoderCarta2 = (pibPerCapitaCarta2 * pontosTuristicosCarta2) / densidadeCarta2;

  printf("Super Poder da Carta 1: %.2f\n", superPoderCarta1);
  printf("Super Poder da Carta 2: %.2f\n", superPoderCarta2);

  
}

void compararCartas() {
  // função para comparar as cartas
  printf("\nComparando as cartas...\n");

  if (superPoderCarta1 > superPoderCarta2) {
    printf("A Carta 1 é a vencedora!\n");
  } else if (superPoderCarta2 > superPoderCarta1) {
    printf("A Carta 2 é a vencedora!\n");
  } else {
    printf("As cartas estão empatadas!\n");
  }

  if (densidadeCarta1 > densidadeCarta2) {
    printf("A Carta 1 tem uma densidade populacional maior!\n");
  } else if (densidadeCarta2 > densidadeCarta1) {
    printf("A Carta 2 tem uma densidade populacional maior!\n");
  } else {
    printf("As cartas têm a mesma densidade populacional!\n");
  }

  if (areaCarta1 > areaCarta2) {
    printf("A Carta 1 tem uma área maior!\n");
  } else if (areaCarta2 > areaCarta1) {
    printf("A Carta 2 tem uma área maior!\n");
  } else {
    printf("As cartas têm a mesma área!\n");
  }

  if (populacaoCarta1 > populacaoCarta2) {
    printf("A Carta 1 tem uma população maior!\n");
  } else if (populacaoCarta2 > populacaoCarta1) {
    printf("A Carta 2 tem uma população maior!\n");
  } else {
    printf("As cartas têm a mesma população!\n");
  }

  if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
    printf("A Carta 1 tem mais pontos turísticos!\n");
  } else if (pontosTuristicosCarta2 > pontosTuristicosCarta1) {
    printf("A Carta 2 tem mais pontos turísticos!\n");
  } else {
    printf("As cartas têm o mesmo número de pontos turísticos!\n");
  }
  
  if (pibPerCapitaCarta1 > pibPerCapitaCarta2) {
    printf("A Carta 1 tem um PIB per Capita maior!\n");
  } else if (pibPerCapitaCarta2 > pibPerCapitaCarta1) {
    printf("A Carta 2 tem um PIB per Capita maior!\n");
  } else {
    printf("As cartas têm o mesmo PIB per Capita!\n");
  }
}

int main() {
  mostrarMenu();
  return 0;
}
