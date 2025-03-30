#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n\n== Cartas Cadastradas ==\n");
    printf("\nCarta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
