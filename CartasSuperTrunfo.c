#include <stdio.h>

int main() {
    // Variáveis da carta A
    char estadoA[3];
    char codigoDaCartaA[35];
    char nomeDaCidadeA[35];
    int populacaoA;
    float areaPorKm2A;
    float pibA;
    int pontosTuristicosA;

    // Variáveis da carta B
    char estadoB[3];
    char codigoDaCartaB[35];
    char nomeDaCidadeB[35];
    int populacaoB;
    float areaPorKm2B;
    float pibB;
    int pontosTuristicosB;

    // Entrada de dados da carta A
    printf("Digite o estado da carta A: ");
    scanf("%s", estadoA);

    printf("Digite o código da carta A: ");
    scanf("%s", codigoDaCartaA);

    printf("Digite o nome da cidade da carta A: ");
    scanf("%s", nomeDaCidadeA);

    printf("Digite a população da carta A: ");
    scanf("%d", &populacaoA);

    printf("Digite a área da carta A (km²): ");
    scanf("%f", &areaPorKm2A);

    printf("Digite o PIB da carta A (em bilhões): ");
    scanf("%f", &pibA);

    printf("Digite o número de pontos turísticos da carta A: ");
    scanf("%d", &pontosTuristicosA);

    printf("\n------------------------\n");

    // Entrada de dados da carta B
    printf("Digite o estado da carta B: ");
    scanf("%s", estadoB);

    printf("Digite o código da carta B: ");
    scanf("%s", codigoDaCartaB);

    printf("Digite o nome da cidade da carta B: ");
    scanf("%s", nomeDaCidadeB);

    printf("Digite a população da carta B: ");
    scanf("%d", &populacaoB);

    printf("Digite a área da carta B (km²): ");
    scanf("%f", &areaPorKm2B);

    printf("Digite o PIB da carta B (em bilhões): ");
    scanf("%f", &pibB);

    printf("Digite o número de pontos turísticos da carta B: ");
    scanf("%d", &pontosTuristicosB);

    // Exibição dos dados
    printf("\n=== Dados da Carta A ===\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoDaCartaA);
    printf("Cidade: %s\n", nomeDaCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaPorKm2A);
    printf("PIB: R$ %.2f bilhões\n", pibA);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA);

    printf("\n=== Dados da Carta B ===\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoDaCartaB);
    printf("Cidade: %s\n", nomeDaCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaPorKm2B);
    printf("PIB: R$ %.2f bilhões\n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);

    return 0;
}
