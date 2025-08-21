#include<stdio.h>

int main(){

    // Minhas variáveis
    // variáveis para a carta 1
    char estado1;
    char codigo1[10];
    char nomeDaCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;
    float densiPop1;
    float pibPerCapita1;
    
    

    // variáveis para a carta 2
    char estado2;
    char codigo2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densiPop2;
    float pibPerCapita2;
    // Aqui eu optei por usar variáveis separadas para cada carta.
    // tive que adcionar quebras de linha para melhorar a legibilidade do código.


    // a estrutura foi feita sem \n para que a entrada de dados fique na mesma linha da pergunta
    printf("===Super Trunfo===\n");
    printf("Cadastre a Carta 1:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1); // espaço antes de %c para capturar o caractere corretamente
    printf("Digite o codigo: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade1);  // tirei o ponteiro "&" porque como é um array não precisa e estava causando erro
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("\n");

    printf("Cadastre a Carta 2:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2); 
    printf("Digite o codigo:\n ");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade2); // tirei o ponteiro "&" porque como é um array não precisa e estava causando erro
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos1);
    densiPop1 = populacao1 / area1; // densidade populacional da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    pibPerCapita1 = pib1 / populacao1; // PIB per capita da carta 1
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);
    densiPop2 = populacao2 / area2; // densidade populacional da carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    pibPerCapita2 = pib2 / populacao2; // PIB per capita da carta 2
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
