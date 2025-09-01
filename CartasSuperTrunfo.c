#include <stdio.h>
int main(){
    char estado1[30], estado2[30];
    char codigo_carta1[30], codigo_carta2[30];
    char nome_cidade1[30], nome_cidade2[30];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade1, densidade2;
    float percapita1, percapita2;

        printf("#######################################\n");
        printf("--------------SUPER TRUNFO-------------\n");
        printf("Vamos cadastrar duas cartas para o jogo\n");
        printf("#######################################\n");

        printf("------------Carta número 01------------\n");
        printf("Digite o nome do Estado da carta 01: ");
            scanf(" %s", estado1);
        printf("Digite o código da carta 01: ");
            scanf(" %s", codigo_carta1);
        printf("Digite o nome da Cidade da carta 01: ");
            scanf(" %s", nome_cidade1);
        printf("Digite a população da cidade: ");
            scanf(" %d", &pop1);
        printf("Digite a área em km²: ");
            scanf(" %f", &area1);
        printf("Digite o PIB: ");
            scanf(" %f", &pib1);
        printf("Digite a quantidade de pontos turísticos: ");
            scanf(" %d", &ponto_turistico1);
            printf("#######################################\n");

     densidade1 = (float)(pop1 / area1);
     percapita1 = (float)(pib1 / pop1);

        printf("------------Carta número 02------------\n");
        printf("Digite o nome do Estado da carta 02: ");
            scanf(" %s", estado2);
        printf("Digite o código da carta 02: ");
            scanf(" %s", codigo_carta2);
        printf("Digite o nome da Cidade da carta 02: ");
            scanf(" %s", nome_cidade2);
        printf("Digite a população da cidade: ");
            scanf(" %d", &pop2);
        printf("Digite a área em km²: ");
            scanf(" %f", &area2);
        printf("Digite o PIB: ");
            scanf(" %f", &pib2);
        printf("Digite a quantidade de pontos turísticos: ");
            scanf(" %d", &ponto_turistico2);
        printf("#######################################\n");

      densidade2 = (float)(pop2 / area2);  
      percapita2 = (float)(pib2 / pop2);

            printf("----------CARTA 01---------\n");
            printf("Nome: %s\n", estado1);
            printf("Código %s\n", codigo_carta1);
            printf("Cidade: %s\n", nome_cidade1);
            printf("População: %d\n", pop1);
            printf("Área: %f km²\n", area1);
            printf("PIB: %f bilhões de reais\n", pib1);
            printf("Quantidade de pontos turísticos: %d\n", ponto_turistico1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", percapita1);

            printf("#######################################\n");
            printf("#######################################\n");

            printf("----------CARTA 02---------\n");
            printf("Nome: %s\n", estado2);
            printf("Código %s\n", codigo_carta2);
            printf("Cidade: %s\n", nome_cidade2);
            printf("População: %d\n", pop2);
            printf("Área: %f km²\n", area2);
            printf("PIB: %f bilhões de reais\n", pib2);
            printf("Quantidade de pontos turísticos: %d\n", ponto_turistico2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", percapita2);

    return 0;
}
