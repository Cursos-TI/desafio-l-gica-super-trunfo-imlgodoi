#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
#include <stdio.h>

// Desafio Super Trunfo - Comparação de Cartas (Nível Básico - Mestre)

int main() {
  // Variáveis das cartas
  char estado1[30], estado2[30];
  char cidade1[50], cidade2[50];
  char codigo1[10], codigo2[10];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Variáveis para cálculos
  float densidade1, densidade2;
  float pibPerCapita1, pibPerCapita2;

  // Entrada de dados da Carta 1
  printf("Digite o estado da primeira carta: ");
  scanf(" %s", estado1);

  printf("Digite o codigo da primeira carta: ");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a area em km2: ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada de dados da Carta 2
  printf("Digite o estado da segunda carta: ");
  scanf(" %s", estado2);

  printf("Digite o codigo da segunda carta: ");
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a area em km2: ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculos
  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;

  densidade2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Exibição das cartas
  printf("\n== Carta 1 ==\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n== Carta 2 ==\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    // Menu Interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &opcao);

    printf("\n== Resultado da Comparacao ==\n");

    switch(opcao) {
        case 1: // Populacao
            printf("Carta 1 - %s: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 2: // Area
            printf("Carta 1 - %s: %.2f km2\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km2\n", cidade2, area2);
            if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 3: // PIB
            printf("Carta 1 - %s: %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 4: // Pontos Turisticos
            printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 5: // Densidade Populacional (menor vence)
            printf("Carta 1 - %s: %.2f hab/km2\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km2\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 6: // PIB per Capita
            printf("Carta 1 - %s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f reais\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}