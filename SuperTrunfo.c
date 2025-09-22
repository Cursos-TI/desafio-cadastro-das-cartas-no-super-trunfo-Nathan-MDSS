#include<stdio.h>

int main(){
    // Minhas variáveis
    // variáveis para a carta 1
    char estado1;
    char codigo1[10];
    char nomeDaCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;
    float densiPop1;
    float pibPerCapita1;
    float superPoder1;
    
    

    // variáveis para a carta 2
    char estado2;
    char codigo2[10];
    char nomeDaCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densiPop2;
    float pibPerCapita2;
    float superPoder2;

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
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
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
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos1);
    densiPop1 = (float)populacao1 / area1; // densidade populacional da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    // Consertado o cáuculo do PIB per capita 
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita da carta 1
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);
    densiPop2 = (float)populacao2 / area2; // densidade populacional da carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    // Concertado o cáuculo do PIB per capita 
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB per capita da carta 2
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");
    // variaveis para o caulculo do super poder
    float invDensiPop1 = area1 / populacao1;
    float invDensiPop2 = area2 / populacao2;


    printf("===Comparação de Cartas===:\n");
//Comparações com if
printf("Comparando a área:\n");
if(area1 > area2){
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, area1 );
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, area2 );
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, area1 );
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, area2 );
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}
printf("\n");
printf("Comparando a PIB:\n");
if(pib1 > pib2){
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, pib1 );
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, pib2 );
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, pib1 );
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, pib2 );
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}
printf("\n");
printf("Comparando o número de pontos turísticos:\n");
if(numeroDePontosTuristicos1 > numeroDePontosTuristicos2){
    printf(" Carta 1 - %s: %d\n", nomeDaCidade1, numeroDePontosTuristicos1 );
    printf(" Carta 2 - %s: %d\n", nomeDaCidade2, numeroDePontosTuristicos2 );
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %d\n", nomeDaCidade1, numeroDePontosTuristicos1);
    printf(" Carta 2 - %s: %d\n", nomeDaCidade2, numeroDePontosTuristicos2);
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}
printf("\n");
printf("Comparando a desidade populacional:\n");
// a menor vence
if(densiPop1 < densiPop2){
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, densiPop1);
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, densiPop2);
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, densiPop1);
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, densiPop2);
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}
printf("\n");
printf("Comparando o PIB per capita:\n");
if(pibPerCapita1 > pibPerCapita2){
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, pibPerCapita1 );
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, pibPerCapita2 );
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, pibPerCapita1);
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, pibPerCapita2);
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}
printf("\n");
printf("Super Poder:\n");
superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + invDensiPop1;
superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroDePontosTuristicos2 + pibPerCapita2 + invDensiPop2;
if(superPoder1 > superPoder2){
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, superPoder1);
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
    printf("Resultado: Carta 1 - %s venceu!\n", nomeDaCidade1);
} else {
    printf(" Carta 1 - %s: %.2f\n", nomeDaCidade1, superPoder1);
    printf(" Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
    printf("Resultado: Carta 2 - %s venceu!\n", nomeDaCidade2);
}





   /*  printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2); - ok
    printf("PIB: %d\n", pib1 > pib2); - ok
    printf("Pontos Turísticos: %d\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2); - ok
    printf("Densidade Populacional: %d\n", densiPop1 < densiPop2); - ok
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2); - ok
    float invDensiPop1 = area1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + invDensiPop1;
    float invDensiPop2 = area2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroDePontosTuristicos2 + pibPerCapita2 + invDensiPop2;
    printf("Super Poder: %d\n", superPoder1 > superPoder2); */

    return 0;
}