//Meu nome: Ivan de Souza Bahia
//Matricula: 202503637253
//Desafio proposto pelo prof. Sérgio Cardoso

#include <stdio.h>


int main() {
    //Carta1
    char estado[2];       // Código do estado (1 caractere alfanumérico)
    char codigo[4];       // Código da cidade (3 caracteres alfanuméricos)
    char cidade[11];      // Nome da cidade (10 caracteres alfanuméricos)
    double populacao;     // População (double)
    double area;          // Área (double)
    double pib;           // PIB (double)
    int ptur;             // Número de pontos turísticos (inteiro)
    //Carta2
    char estado2[2];       
    char codigo2[4];       
    char cidade2[11];      
    double populacao2;     
    double area2;         
    double pib2;           
    int ptur2;            
    

    printf("\nENTRADA DE DADOS DA CARTA 1\n");
    printf("\n");
    printf("Entre com o codigo do estado (1 caractere alfanumerico): ");
    scanf("%1s", estado);

    printf("Entre com o codigo da carta1 (3 caracteres alfanumericos): ");
    scanf("%3s", codigo);

    printf("Entre com o nome da cidade (ate 10 caracteres): ");
    scanf("%10s", cidade);

    printf("Entre com a populacao da cidade: ");
    scanf("%lf", &populacao);

    printf("Entre com a area da cidade): ");
    scanf("%lf", &area);

    printf("Entre com o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("Entre com o numero de pontos turisticos: ");
    scanf("%d", &ptur);
      
//-------------------------------------------------------------------------------------

    printf("\nENTRADA DE DADOS DA CARTA 2\n");
    printf("\n");
    printf("Entre com o codigo do estado (1 caractere alfanumerico): ");
    scanf("%1s", estado2);

    printf("Entre com o codigo da carta1 (3 caracteres alfanumericos): ");
    scanf("%3s", codigo2);

    printf("Entre com o nome da cidade (ate 10 caracteres): ");
    scanf("%10s", cidade2);

    printf("Entre com a populacao da cidade: ");
    scanf("%lf", &populacao2);

    printf("Entre com a area da cidade): ");
    scanf("%lf", &area2);

    printf("Entre com o PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("Entre com o numero de pontos turisticos: ");
    scanf("%d", &ptur2);

     printf("\nDADOS DA CARTA_1:\n");
    
    printf("Codigo do Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %.2lf\n", populacao);
    printf("Area: %.2lf\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", ptur);
    
    printf("\nDADOS DA CARTA_2:\n");
    
    printf("Codigo do Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %.2lf\n", populacao2);
    printf("Area: %.2lf\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ptur2);
    
    return 0;
}
