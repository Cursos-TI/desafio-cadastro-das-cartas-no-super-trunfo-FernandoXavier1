#include <stdio.h>

int main() {

    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

        printf("Digite o nome da cidade: ");
        fgets(cidades[i].nome, 50, stdin);

        printf("Digite a população: ");
        scanf("%d", &cidades[i].populacao);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &cidades[i].area);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%lf", &cidades[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);

        printf("\nCidade %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome: %s", cidades[i].nome); 
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2lf bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);

    return 0;
}
