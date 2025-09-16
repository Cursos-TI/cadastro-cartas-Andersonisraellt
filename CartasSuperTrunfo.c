#include <stdio.h>

int main(){
  //Definição de arrays para inclusão das cartas

  char estado[20];
  char cidade[20];
  char codigo[20];
  int população;
  float area;
  float pib;
  int numerodepontosturisticos;

  int quantidade =3;
  for (int i = 0; i <quantidade; i++) {

    // Entrada de dados
  printf("Digite o estado: \n");
  scanf("%29s", estado);

  printf("Digite a cidade: \n");
  scanf("%29s", cidade);

  printf("Digite o código: \n");
  scanf("%9s", codigo);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  pritf("Digite a área: \n");
  scanf("%f, &area");

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos tirísticos: \n");
  scanf("%d", &numerodepontosturisticos);


   
  }
}
  
    

   