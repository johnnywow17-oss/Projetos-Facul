#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Variaveis Carta 1
    char estado1;
    char codigocarta1[5];
    char cidade1[20];
    float pib1;
    float area1;
    unsigned long int populacao1;
    int pontosturisticos1, atributo1, atributo2;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1, soma1, soma2;
    float valor1_att1, valor2_att1;
    float valor1_att2, valor2_att2;

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
    char *nome_att1, *nome_att2;
    

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

    printf("\nAgora vamos cadastrar a Carta2:\n");

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
    printf("Densidade populacional da Carta 2 é: %.2f\n", densidadepopulacional2);

    pibpercapita2 = (float) pib2 / populacao2;
    printf("PIB per Capita da Carta 2 é: %.2f\n", pibpercapita2);

    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1.0 / densidadepopulacional2;


    // MOSTRAR CARTA1
    printf("\nPor favor, confirme as informações da carta 1: \n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontosturisticos1);


    //MOSTRAR CARTA 2
    printf("Por favor, confirme as informações da carta 2: \n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", pontosturisticos2);

    //Comparacao dos poderes
    printf("\nAgora vamos comparar os poderes.\n");
    printf("Para isso, será necessario escolher 2 atributos distintos.\n");
    printf("Para comparar os poderes, digite o primeiro atributo a comparar:\n");
    printf("1 - População:\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos tuísticos\n");
    printf("5 - Densidade opulacional\n");
    
    printf("Agora escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    //Switch para pegar o valor
    switch(atributo1) {
        case 1:
            valor1_att1 = populacao1;
            valor2_att1 = populacao2;
            break;
        
        case 2:
            valor1_att1 = area1;
            valor2_att1 = area2;
            break;
        
        case 3:
            valor1_att1 = pib1;
            valor2_att1 = pib2;
            break;

        case 4:
            valor1_att1 = pontosturisticos1;
            valor2_att1 = pontosturisticos2;
            break;
        
        case 5:
            valor1_att1 = 1 / densidadepopulacional1;
            valor2_att1 = 1 / densidadepopulacional2;
            break;

        default:
            printf("Opção invalida");
            break;
    }   
    //Switch para pegar o nome
    switch(atributo1) {
        case 1: nome_att1 = "População"; break;
        case 2: nome_att1 = "Área"; break;
        case 3: nome_att1 = "PIB"; break;
        case 4: nome_att1 = "Pontos Turisticos"; break;
        case 5: nome_att1 = "Densidade Populacional"; break;
        default:
        break;
    }


    printf("Agora vamos escolher o segundo atributo:");
    printf("Lembrando que o atributo DEVE ser diferente do anterior\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");
    printf("Digite o segundo atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo!!");
    } else {
        switch (atributo2)
        {
            case 1:
            valor1_att2 = populacao1;
            valor2_att2 = populacao2;
            break;
        
        case 2:
            valor1_att2 = area1;
            valor2_att2 = area2;
            break;
        
        case 3:
            valor1_att2 = pib1;
            valor2_att2 = pib2;
            break;

        case 4:
            valor1_att2 = pontosturisticos1;
            valor2_att2 = pontosturisticos2;
            break;
        
        case 5:
            valor1_att2 = 1 / densidadepopulacional1;
            valor2_att2 = 1 / densidadepopulacional2;
            break;

        default:
            printf("Opção invalida");
            break;
        }
    }
    switch(atributo1) {
        case 1: nome_att2 = "População"; break;
        case 2: nome_att2 = "Área"; break;
        case 3: nome_att2 = "PIB"; break;
        case 4: nome_att2 = "Pontos Turisticos"; break;
        case 5: nome_att2 = "Densidade Populacional"; break;
        default:
        break;
    }
    
    soma1 = valor1_att1 + valor1_att2;
    soma2 = valor2_att1 + valor2_att2;

    
    printf("\n### Vamos Mostrar os dados ###\n");
    printf("Cidades: %s x %s\n\n",cidade1, cidade2);
    printf("Atributos\n%s e %s\n\n", nome_att1, nome_att2);
    printf("%s:\nCarta 1: %.2f\nCarta 2: %.2f\n\n", nome_att1, valor1_att1, valor2_att1);
    printf("%s:\nCarta 1: %.2f\nCarta 2: %.2f\n\n", nome_att2, valor1_att2, valor2_att2);
    printf("Soma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);
    printf("Resultado: %s\n", (soma1 > soma2) ? "Carta 1 venceu!" : (soma2 > soma1) ? "Carta 2 venceu!" : "Empatou");




    

    


     
    
    
        
    



    return 0;
}