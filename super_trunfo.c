#include <stdio.h>
 int main(){
 	char estado; 
	char codigo[4]; 
	char cidade[100]; 
	int populacao; 
	int pontostur; 
	float area; 
	float pib; 
	printf("CARTA 1\n"); 
	printf("Insira a letra inicial do estado que você escolheu para cadastro:"); 
	scanf(" %c", &estado); 
	printf("Insira o código do estado que você escolheu para cadastro:");
	scanf(" %s", &codigo);
	printf("Insira o nome da cidade que você escolheu para cadastro:"); 
	scanf(" %99[^\n]", cidade);
	printf("Insira qual o índice populacional da cidade que você escolheu para cadastro:");
	scanf("%d", &populacao);
	printf("Insira a área em km² da cidade que você escolheu para cadastro:");
	scanf("%f", &area);
	printf("Insira o valor do PIB da cidade que você escolheu para cadastro:");
	scanf("%f", &pib);
	printf("Insira a quantidade de pontos turísticos da cidade que você escolheu para cadastro:");
	scanf("%d", &pontostur);
  printf("\n");

  char estado2; 
	char codigo2[4]; 
	char cidade2[100]; 
	int populacao2; 
	int pontostur2; 
	float area2; 
	float pib2; 

  printf("CARTA 2\n"); 
	printf("Insira a letra inicial do estado que você escolheu para cadastro:"); 
	scanf(" %c", &estado2); 
	printf("Insira o código do estado que você escolheu para cadastro:");
	scanf(" %s", &codigo2);
	printf("Insira o nome da cidade que você escolheu para cadastro:"); 
	scanf(" %99[^\n]", cidade2);
	printf("Insira qual o índice populacional da cidade que você escolheu para cadastro:");
	scanf("%d", &populacao2);
	printf("Insira a área em km² da cidade que você escolheu para cadastro:");
	scanf("%f", &area2);
	printf("Insira o valor do PIB da cidade que você escolheu para cadastro:");
	scanf("%f", &pib2);
	printf("Insira a quantidade de pontos turísticos da cidade que você escolheu para cadastro:");
	scanf("%d", &pontostur2);
	printf("\n");

  printf("CARTA 1\n");
	printf("Estado: %c\n", estado);
	printf("Código: %s\n", codigo);
	printf("Nome da cidade: %s\n", cidade);
	printf("População: %d\n", populacao);
	printf("Área: %f km²\n", area);
	printf("PIB: %f bilhões de reais\n ", pib);
	printf("Número de pontos turísticos: %d\n", pontostur);
	printf("\n");

  printf("CARTA 2\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %f km²\n", area2);
	printf("PIB: %f bilhões de reais\n ", pib2);
	printf("Número de pontos turísticos: %d\n", pontostur2);
	printf("\n");
	return 0;
 }
