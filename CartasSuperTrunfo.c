#include <stdio.h>

int  main() {
  //Variáveis 
    char estado[30];
    char cidade[30];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
  
    int quantidade = 2;
    for (int i = 0; i < quantidade; i++) {

    // Entrada de dados
    printf("Digite o estado: \n");
    scanf("%29s", estado);
    printf("Digite a cidade: \n");
    scanf("%29s", cidade);
    printf("Digite o código: \n");
    scanf("%9s", codigo);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);
    
    // Impressão
    
    printf("DADOS DA CARTA\n");
    printf("O estado é: %s\n", estado);
    printf("A cidade é: %s\n", cidade);
    printf("O código é: %s\n", codigo);
    printf("A população é: %d\n", populacao);
    printf("A área é: %.2f\n", area);
    printf("O pib é: %.2f\n", pib);
    printf("O número de pontos turísticos é: %d\n", numerodepontosturisticos);
    printf("-----------------------------\n");
    }
    return 0;
}