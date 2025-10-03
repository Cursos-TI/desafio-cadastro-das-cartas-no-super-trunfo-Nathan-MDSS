#include<stdio.h>
#include <stdlib.h>
#include <time.h>

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
    densiPop1 = populacao1 / area1; // densidade populacional da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    // Consertado o cáuculo do PIB per capita 
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita da carta 1
    // pibPerCapita1 = pib1 / populacao1;
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
    densiPop2 = populacao2 / area2; // densidade populacional da carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    // Consertado o cáuculo do PIB per capita 
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB per capita da carta 2
   // pibPerCapita1 = pib1 / populacao1;
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

     int  escolhaComp1, escolhaComp2;
     int resultado1, resultado2;
     printf("===Comparação de Cartas===:\n");
     printf("Escolha um atributo para comparar: \n");
     printf("Cidade 1: %s e Cidade 2: %s\n", nomeDaCidade1, nomeDaCidade2);
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de pontos turísticos\n");
     printf("5 - Densidade demográfica\n");
     scanf("%d", &escolhaComp1);
     printf("\n");   

     switch (escolhaComp1) {
        case 1:
        printf("Você escolheu população\n");
        printf("População da Cidade 1: %lu e  População Cidade 2: %lu\n", populacao1, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
          printf("\n");  
        break;
        case 2: 
        printf("Você escolheu área\n");
        printf("Área da Cidade 1: %2.f e Área Cidade 2: %2.f\n", area1, area2);
        resultado1 = area1 > area2 ? 1 : 0;
          printf("\n");  
        break;
        case 3:
        printf("Você escolheu PIB\n");
        printf("PIB da Cidade 1: %2.f e PIB da Cidade 2: %2.f\n", pib1, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
          printf("\n");  
        break;
        case 4: 
        printf("Você escolheu Número de pontos turísticos\n");
        printf("Número de pontos Cidade 1: %d e Número de pontos da Cidade 2: %d\n", numeroDePontosTuristicos1, numeroDePontosTuristicos2);
        resultado1 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0;
          printf("\n");  
        break;
        case 5:
        printf("Densidade demográfica\n");
        printf("Densidade demográfica da Cidade 1: %2.f e Densidade demográfica da Cidade 2: %2.f\n", densiPop1, densiPop2);
        resultado1 = densiPop1 < densiPop2 ? 1 : 0;
          printf("\n");  
        break;
        default: 
        printf("Opção de jogo inválida!\n");
        return 0;
        break;
     }

     printf("Escolha um segundo atributo\n");
     printf("Atenção você deve escolher um atributo diferente do primeiro.\n");
     printf("Cidade 1: %s e Cidade 2: %s\n", nomeDaCidade1, nomeDaCidade2);
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de pontos turísticos\n");
     printf("5 - Densidade demográfica\n");
     scanf("%d", &escolhaComp2);


     if (escolhaComp1 == escolhaComp2) {
         printf("Você escolheu o mesmo atributo!\n");
            return 0;
     } else {
      switch (escolhaComp2) {
        case 1:
        printf("Você escolheu população\n");
        printf("População da Cidade 1: %lu e  População Cidade 2: %lu\n", populacao1, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2: 
        printf("Você escolheu área\n");
        printf("Área da Cidade 1: %2.f e Área Cidade 2: %2.f\n", area1, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        printf("Você escolheu PIB\n");
        printf("PIB da Cidade 1: %2.f e PIB da Cidade 2: %2.f\n", pib1, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
        case 4: 
        printf("Você escolheu Número de pontos turísticos\n");
        printf("Número de pontos Cidade 1: %d e Número de pontos da Cidade 2: %d\n", numeroDePontosTuristicos1, numeroDePontosTuristicos2);
        resultado2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0;
        break;
        case 5:
        printf("Densidade demográfica\n");
        printf("Densidade demográfica da Cidade 1: %2.f e Densidade demográfica da Cidade 2: %2.f\n", densiPop1, densiPop2);
        break;
        resultado2 = densiPop1 < densiPop2 ? 1 : 0;
        default: 
        printf("Opção de jogo inválida!\n");
         return 0;
        break;
         }
     }

     if (resultado1 == 1 && resultado2 == 1) {
        printf("Carta 1 venceu!!");
     } else if (resultado1 == 0 && resultado2 == 0)
     {
       printf("Carta 2 venceu!!");
     } else {
        printf("Empate");
     }
     
     




     
    
  /*   printf("===Comparação de Cartas===:\n");
    int  escolhaComp;
    printf("Escolha um atributo para comparar: \n");
    printf("Cidade 1: %s e Cidade 2: %s\n", nomeDaCidade1, nomeDaCidade2);
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &escolhaComp);
    printf("\n");

    switch (escolhaComp)
    {
    case 1:
        printf("Você escolheu comparar a População\n");
        printf("População da carta 1: %d e População da carta 2: %d\n", populacao1, populacao2);
        break;
    case 2:
        printf("Você escolheu comparar a Área\n");
        printf("Área da carta 1: %2.f e Área da carta 2: %2.f\n", area1, area2);
        break;
    case 3:
        printf("Você escolheu comparar o PIB\n");
         printf("PIB da carta 1: %2.f e PIB da carta 2: %2.f\n", pib1, pib2);
        break;
    case 4:
        printf("Você escolheu comparar o Número de pontos turísticos\n");
        printf("Pontos turísticos da carta 1: %d e Pontos turísticos da carta 2: %d\n", numeroDePontosTuristicos1, numeroDePontosTuristicos2);
        break;
    case 5:
        printf("Você escolheu comparar a Densidade populacional\n");
        printf("Densidade populacional da carta 1: %.2f e Densidade populacional da carta 2: %.2f\n", densiPop1, densiPop2);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    if (escolhaComp == 1) {
        if(populacao1 > populacao2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade1);
        } else if (populacao1 < populacao2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaComp == 2)
    {
        if(area1 > area2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade1);
        } else if (area1 < area2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaComp == 3) {
        if(pib1 > pib2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade1);
        } else if (pib1 < pib2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaComp == 4) {
        if(numeroDePontosTuristicos1 > numeroDePontosTuristicos2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade1);
        } else if (numeroDePontosTuristicos1 < numeroDePontosTuristicos2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaComp == 5) {
        if(densiPop1 < densiPop2) { // menor densidade populacional ganha
            printf("A cidade %s ganhou!\n", nomeDaCidade1);
        } else if (densiPop1 > densiPop2) {
            printf("A cidade %s ganhou!\n", nomeDaCidade2);
        } else {
            printf("Empate!\n");
        }
    } else {
        printf("Não foi possível comparar as cartas.\n");
    } */

    
    
/*      printf("===Comparação de Cartas===:\n");
    //resultado = 1 carta 1 ganhou, resultado = 0 2 ganhou
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2);
    printf("Densidade Populacional: %d\n", densiPop1 < densiPop2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    float invDensiPop1 = area1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + invDensiPop1;
    float invDensiPop2 = area2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroDePontosTuristicos2 + pibPerCapita2 + invDensiPop2;
    printf("Super Poder: %d\n", superPoder1 > superPoder2); */

    return 0;
}