/* Programa de cartas para informar dados de algumas cidades 
do Brasil. 
*/

#include <stdio.h>

int main()
{

//Declaracao de variaveis
    // Carta 1
	 char estado[2]; //Letra correspondente ao ao estado
	 char codigo[4]; //Codigo da carta
	 char cidade[10]; //Nome da cidade
	 float populacao; //Numero de habitantes
	 float area; //Area territorial
	 float pib; //PIB da cidade
	 int ptur; // Quantidade de pontos turistico
	 float dp; //Densidade populacional
	 float pibper; //Pib per capita
	 
	 // Carta 2
	 char estado2[2]; //Letra correspondente ao ao estado
	 char codigo2[4]; //Codigo da carta
	 char cidade2[10]; //Nome da cidade
	 float populacao2; //Numero de habitantes
	 float area2; //Area territorial
	 float pib2; //PIB da cidade
	 int ptur2; // Quantidade de pontos turistico
	 float dp2; //Densidade populacional
	 float pibper2; //Pib per capita

//Entrada de dados

	printf("\nEntrada de dados da Carta 1:\n");
	
	printf("Entre com o estado:"); //Coleta a letra do estado
	scanf("%1s", estado);
	
	
	printf("\n"); 
	
	printf("Entre como o codigo da carta:"); //Coleta o código da carta
	scanf("%3s", codigo);
	
	printf("\n"); //Salta uma linha
	
	printf("Entre com o nome da cidade:"); //Coleta o nome da cidade
	scanf("%s",cidade);
	
	printf("\n"); 
	
	printf("Entre com a populacao da cidade: "); //Coleta a população da cidade
	scanf("%f", &populacao);
	
	printf("\n"); 
	
	printf("Entre com a a area territorial da cidade: "); //Coleta a área territorial da cidade
	scanf("%f", &area);
	
	printf("\n"); 
	
	printf("Entre com o PIB da cidade: "); //Coleta o PIB da cidade
	scanf("%f", &pib);
	
	printf("\n"); 
	
	printf("Entre com a quantidade de pontos turiristicos: "); //Coleta a quantidade de pontos turisticos da cidade
	scanf("%i", &ptur);
	
	printf("\n"); 

	//--------------------------------------------------------------
	 printf("\nEntrada de dados da Carta 2:\n");
	
	printf("Entre com o estado:"); //Coleta a letra do estado
	scanf("%1s", estado2);
	
	
	printf("\n"); 
	
	printf("Entre como o codigo da carta:");
	scanf("%3s", codigo2);
	
	printf("\n"); //Salta uma linha
	
	printf("Entre com o nome da cidade:");
	scanf("%s",cidade2);
	
	printf("\n"); 
	
	printf("Entre com a populacao da cidade: ");
	scanf("%f", &populacao2);
	
	printf("\n"); 
	
	printf("Entre com a a area territorial da cidade: ");
	scanf("%f", &area2);
	
	printf("\n"); 
	
	printf("Entre com o PIB da cidade: ");
	scanf("%f", &pib2);
	
	printf("\n"); 
	
	printf("Entre com a quantidade de pontos turiristicos: ");
	scanf("%i", &ptur2);
	
	printf("\n"); 
	//Calculo da densidade populacional da carta 1
	dp = populacao / area;
	pibper = pib / populacao;
	
	//Calculo da densidade populacional da carta 2
	dp2 = populacao2 / area2;
	pibper2 = pib2 / populacao2;
	
	
	printf("\nEXIBICAO DOS DADOS DA CARTA 1:\n\n");
	printf("Codigo do Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
	printf("Nome: %s\n", cidade);
	printf("Populacao: %.2f habitantes\n", populacao);
	printf("Area territorial: %.2f Km2\n", area);
	printf("PIB da cidade: %.2f Milhoes de Reais\n", pib);
	printf("Pontos turisticos: %i\n", ptur);
	printf("Densidade Populacional: %.2f hab/km2\n", dp);
	printf("Renda per capita: %.2f Reais/hab.\n", pibper);
	//--------------------------------------------
	printf("\nEXIBICAO DOS DADOS DA CARTA 2:\n\n");
	printf("Codigo do Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
	printf("Nome: %S\n", cidade2);
	printf("Populacao: %.2f\n", populacao2);
	printf("Area km2: %.2f\n", area2);
	printf("PIB da cidade: %.2f\n", pib2);
	printf("Pontos turisticos: %i\n", ptur2);
	printf("Densidade Populacional: %.2f hab/km2\n", dp2);
	printf("Renda per capita: %.2f Reais/hab.\n", pibper2);

return 0;


}

