#include<stdio.h>

int main(){

    // Minhas variáveis
    char estado;
    char codigo[20];
    char nomeDaCidade[30];
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;

    // a estrutura foi feita sem \n para que a entrada de daddos fique na mesma linha da pergunta
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado); // espaço antes de %c para capturar o caractere corretamente
    printf("Digite o codigo: ");
    scanf("%s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeDaCidade);
    printf("Digite a População: ");
    scanf("%d", &populacao);
    printf("Digite a Área: ");
    scanf("%f", &area);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo );
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado); 
    printf("Digite o codigo: ");
    scanf("%s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeDaCidade);
    printf("Digite a População: ");
    scanf("%d", &populacao);
    printf("Digite a Área: ");
    scanf("%f", &area);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo );
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turísticos: %d\n", numeroDePontosTuristicos);

 
    return 0;
}