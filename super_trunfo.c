#include <stdio.h>

int main(){
    // Variaveis Carta 1
    char estado1;
    char codigocarta1[5];
    char cidade1[20];
    float pib1;
    float area1;
    int populacao1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    // Variaveis Carta 2
    char estado2;
    char codigocarta2[5];
    char cidade2[20];
    float pib2;
    float area2;
    int populacao2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    //Saida de dados
    printf("Bem vindo ao SuperTrunfo!\n");
    printf("Vamos começar a cadastrar a primeira carta!\n");
    //ENTRADA DE DADOS Carta 1
    printf("Digite o Estado da carta 1(1 letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Agora digite o código(ex:A01, B03): ");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade(em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reis): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) (populacao1/area1);
    printf("Densidade populacional da Carta 1 é: %.2f\n", densidadepopulacional1);

    pibpercapita1 = (float)(pib1/populacao1);
    printf("PIB per Capita da Carta 1 é: %.2f", pibpercapita1);

    printf("Agora vamos cadastrar a Carta2:\n");

    //ENTRADA DE DADOS Carta 2
    printf("Digite o Estado da carta 2(1 letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Agora digite o código(ex:A01, B03): ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade(em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    // MOSTRAR CARTA1
    printf("Por favor, confirme as informações da carta 1: \n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);


    //MOSTRAR CARTA 2
    printf("Por favor, confirme as informações da carta 2: \n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);


    return 0;
}

