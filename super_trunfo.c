#include <stdio.h>

int main(){
    // Variaveis Carta 1
    char estado1;
    char codigocarta1[5];
    char cidade1[20];
    float pib1;
    float area1;
    unsigned long int populacao1;
    int pontosturisticos1, opcao;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // Variaveis Carta 2
    char estado2;
    char codigocarta2[5];
    char cidade2[20];
    float pib2;
    float area2;
    unsigned long int populacao2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;
    

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
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade(em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reis): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1;
    printf("Densidade populacional da Carta 1 é: %.2f\n", densidadepopulacional1);

    pibpercapita1 = (float) pib1 / populacao1;
    printf("PIB per Capita da Carta 1 é: %.2f\n", pibpercapita1);

    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + 1/densidadepopulacional1;

    printf("Agora vamos cadastrar a Carta2:\n");

    //ENTRADA DE DADOS Carta 2
    printf("Digite o Estado da carta 2(1 letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Agora digite o código(ex:A01, B03): ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade(em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;
    printf("Densidade populacional da Carta 1 é: %.2f\n", densidadepopulacional1);

    pibpercapita2 = (float) pib2 / populacao2;
    printf("PIB per Capita da Carta 1 é: %.2f\n", pibpercapita1);

    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1.0 / densidadepopulacional2;


    // MOSTRAR CARTA1
    printf("Por favor, confirme as informações da carta 1: \n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);


    //MOSTRAR CARTA 2
    printf("Por favor, confirme as informações da carta 2: \n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);

    //Comparacao dos poderes
    printf("Para comparar os poderes, digite o atributo a comparar:\n");
    printf("1 - População:\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos tuísticos\n");
    printf("5 - Densidade opulacional\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        if (populacao1 > populacao2){
            printf("Comparação: População\n");
            printf("\nCarta 1 - %lu\n", populacao1);
            printf("Carta 2 - %lu\n", populacao2);
            printf("\nCarta 1 Venceu (%lu)\n",populacao1);
        } 
        else if (populacao2 > populacao1){
            printf("Comparação: População\n");
            printf("\nCarta 1 - %lu\n", populacao1);
            printf("Carta 2 - %lu\n", populacao2);
            printf("Carta 2 Venceu (%lu)", populacao2);
        } 
        else {
            printf("Deu empate!");
        } break;
        
        case 2:
        if (area1 > area2){
            printf("Comparação: Area\n");
            printf("\nCarta 1 - %.2f\n", area1);
            printf("Carta 2 - %.2f\n", area2);
            printf("Carta 1 venceu! (%.2f)\n", area1);
        } else if(area2 > area1){
            printf("Comparação: Area\n");
            printf("\nCarta 1 - %.2f\n", area1);
            printf("Carta 2 - %.2f\n", area2);
            printf("Carta 2 venceu! (%.2f)\n", area2);
        } else{
            printf("Deu empate!");
        }break;
        
        case 3:
        if (pib1 > pib2){
            printf("Comparação: PIB\n");
            printf("\nCarta 1 - %.2f\n", pib1);
            printf("Carta 2 - %.2f\n", pib2);
            printf("Carta 1 Venceu (%.2f)\n",pib1);
        } 
        else if (pib2 > pib1){
            printf("Comparação: PIB\n");
            printf("\nCarta 1 - %.2f\n", pib1);
            printf("Carta 2 - %.2f\n", pib2);
            printf("Carta 2 Venceu (%.2f)\n", pib2);
        } 
        else {
            printf("Deu empate!");
        } break;
                
        case 4:
        if (pontosturisticos1 > pontosturisticos2){
            printf("Comparação: Pontos Turisticos\n");
            printf("\nCarta 1 - %.d\n", pontosturisticos1);
            printf("Carta 2 - %.d\n", pontosturisticos2);
            printf("Carta 1 Venceu (%d)\n",pontosturisticos1);
        } 
        else if (pontosturisticos2 > pontosturisticos1){
            printf("Comparação: Pontos Turisticos\n");
            printf("\nCarta 1 - %d\n", pontosturisticos1);
            printf("Carta 2 - %d\n", pontosturisticos2);
            printf("Carta 2 Venceu (%d)\n", pontosturisticos2);
        } 
        else {
            printf("Deu empate!");
        } break;
        
        case 5:
        if (densidadepopulacional1 < densidadepopulacional2){
            printf("Comparação: Densidade Populacional\n");
            printf("\nCarta 1 - %.2f\n", densidadepopulacional1);
            printf("Carta 2 - %.2f\n", densidadepopulacional2);
            printf("Carta 1 Venceu (%.2f)\n",densidadepopulacional1);
        } 
        else if (densidadepopulacional2 < densidadepopulacional1){
            printf("Comparação: Densidade Populacional\n");
            printf("\nCarta 1 - %.2f\n", densidadepopulacional1);
            printf("Carta 2 - %.2f\n", densidadepopulacional2);
            printf("Carta 2 Venceu (%.2f)\n", densidadepopulacional2);
        } 
        else {
            printf("Deu empate!");
        } break;
        default:
            printf("Opção inválida");
        }
        
    



    return 0;
}