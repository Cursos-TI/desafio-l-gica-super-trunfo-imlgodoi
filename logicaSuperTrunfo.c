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

      // Menu de seleção de atributos
    int attr1, attr2;
    printf("\nEscolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &attr1);

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo para comparacao (diferente do primeiro):\n");
    for(int i=1;i<=6;i++){
        if(i != attr1){
            switch(i){
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Digite o numero da opcao: ");
    scanf("%d", &attr2);

    // Função auxiliar para comparação de cada atributo
    float val1, val2;
    float soma1 = 0, soma2 = 0;

    for(int j=0;j<2;j++){
        int current = (j==0)?attr1:attr2;

        switch(current){
            case 1: // Populacao
                val1 = populacao1;
                val2 = populacao2;
                printf("\nPopulacao:\nCarta 1 - %s: %.0f\nCarta 2 - %s: %.0f\n", cidade1, val1, cidade2, val2);
                break;
            case 2: // Area
                val1 = area1;
                val2 = area2;
                printf("\nArea:\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n", cidade1, val1, cidade2, val2);
                break;
            case 3: // PIB
                val1 = pib1;
                val2 = pib2;
                printf("\nPIB:\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n", cidade1, val1, cidade2, val2);
                break;
            case 4: // Pontos Turisticos
                val1 = pontosTuristicos1;
                val2 = pontosTuristicos2;
                printf("\nPontos Turisticos:\nCarta 1 - %s: %.0f\nCarta 2 - %s: %.0f\n", cidade1, val1, cidade2, val2);
                break;
            case 5: // Densidade Populacional (menor vence)
                val1 = densidade1;
                val2 = densidade2;
                printf("\nDensidade Populacional:\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n", cidade1, val1, cidade2, val2);
                // inverter valores para somar corretamente
                float temp1 = (val1 < val2)?1:0;
                float temp2 = (val2 < val1)?1:0;
                soma1 += temp1;
                soma2 += temp2;
                continue;
            case 6: // PIB per Capita
                val1 = pibPerCapita1;
                val2 = pibPerCapita2;
                printf("\nPIB per Capita:\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n", cidade1, val1, cidade2, val2);
                break;
        }
        // Soma os valores para determinar vencedor final
        soma1 += val1;
        soma2 += val2;
    }

    printf("\nSoma dos atributos:\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n", cidade1, soma1, cidade2, soma2);

    // Resultado final usando operador ternário
    soma1 > soma2 ? printf("\nResultado Final: Carta 1 (%s) venceu!\n", cidade1) :
    soma2 > soma1 ? printf("\nResultado Final: Carta 2 (%s) venceu!\n", cidade2) :
    printf("\nResultado Final: Empate!\n");

    return 0;
}