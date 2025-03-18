#include <stdio.h>

int main(){

    //definição das variaveis das cartas 1 e 2

    char estado1, estado2; //coleta a letra de um estado
    char codigo1[5], codigo2[5]; //coleta o código da carta
    char nomedacidade1[100], nomedacidade2[100]; //coleta o nome da cidade
    int populacao1, populacao2; //coleta o número de habitantes na cidade
    float area1, area2; //coleta a área em km² da cidade
    float pib1, pib2; //coleta o PIB da cidade
    int numerodepontosturisticos1, numerodepontosturisticos2; // coleta o número de pontos turísticos da cidade
    // Declaração para armazenar a densidade populacional e o PIB per capita
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;


    //apresentação da carta 1 e coleta de dados.

    printf("*** Seja bem-vindo a carta de número 1 ***\n"); //Apresentação da carta

    printf("Digite o estado (letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1); // Espaço antes de %c para consumir o '\n' que fica no buffer


    printf("Digite o Código (exemplo: A01, B03): \n");
    scanf("%s", codigo1); // coleta o código da carta

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1); // coleta a cidade

    printf("Digite o Número de habitantes: \n");
    scanf("%d", &populacao1); // coleta o número de habitantes

    printf("Digite a área em km²: \n");
    scanf("%f", &area1); // coleta a área

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1); // coleta o PIB

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1); // Coleta os pontos turísticos

    // Cálculos da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1; // Densidade populacional
    pibPerCapita1 = pib1  / populacao1; // PIB per capita 

    //exibição dos dados da *** CARTA 1 ***

    printf(" *** RESULTADO CARTA 1 ***\n");

    printf("Estado: %c\n", estado1); //Exibe o estado
    printf("Código: %s\n", codigo1); //Exibe o código da carta
    printf("Cidade: %s\n", nomedacidade1); //Exibe o nome da cidade
    printf("População: %d\n", populacao1); //Exibe a população
    printf("Área: %.2f km²\n", area1); //Exibe a Área em km²
    printf("PIB: %.2f bilhões de reais\n", pib1); //Exibe o PIB
    printf("Números de pontos turísticos: %d\n",numerodepontosturisticos1); // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Exibe a densidade populacional
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1); // Exibe o PIB per capita

    //***Apresentação e coleta de dados da carta 2***

    printf("*** Seja bem-vindo a carta de número 2 ***\n");

    printf("Digite o estado (Letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);


    printf("Digite o Código (exemplo: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite o Número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2  / populacao2;


    //Exibe os dados  da *** carta 2 ***

    printf(" *** RESULTADO CARTA 2 ***\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
