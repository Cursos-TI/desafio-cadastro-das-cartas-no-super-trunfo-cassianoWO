#include <stdio.h>
int main(){
    char estado1[30], estado2[30];
    char codigo_carta1[30], codigo_carta2[30];
    char nome_cidade1[30], nome_cidade2[30];
    long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;

    int resultado_pop = (pop1 > pop2);
    int resultado_area = (area1 > area2);
    int resultado_pib = (pib1 > pib2);
    int resultado_ponto_turistico = (ponto_turistico1 > ponto_turistico2);
    int resultado_densidade = ((1 / densidade1) > (1 / densidade2));
    int resultado_percapita = (percapita1 > percapita2);
    int resultado_superPoder = (superPoder1 > superPoder2);


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
            scanf(" %ld", &pop1);
        printf("Digite a área em km²: ");
            scanf(" %f", &area1);
        printf("Digite o PIB: ");
            scanf(" %f", &pib1);
        printf("Digite a quantidade de pontos turísticos: ");
            scanf(" %d", &ponto_turistico1);
            printf("#######################################\n");

     densidade1 = (float)(pop1 / area1);
     percapita1 = (float)(pib1 / pop1);
     superPoder1 = (float)(pop1 + area1 + pib1 + ponto_turistico1 + (1 / densidade1));

        printf("------------Carta número 02------------\n");
        printf("Digite o nome do Estado da carta 02: ");
            scanf(" %s", estado2);
        printf("Digite o código da carta 02: ");
            scanf(" %s", codigo_carta2);
        printf("Digite o nome da Cidade da carta 02: ");
            scanf(" %s", nome_cidade2);
        printf("Digite a população da cidade: ");
            scanf(" %ld", &pop2);
        printf("Digite a área em km²: ");
            scanf(" %f", &area2);
        printf("Digite o PIB: ");
            scanf(" %f", &pib2);
        printf("Digite a quantidade de pontos turísticos: ");
            scanf(" %d", &ponto_turistico2);
        printf("#######################################\n");

      densidade2 = (float)(pop2 / area2);  
      percapita2 = (float)(pib2 / pop2);
      superPoder2 = (float)(pop2 + area2 + pib2 + ponto_turistico2 + (1 / densidade2));

            printf("----------CARTA 01---------\n");
            printf("Nome: %s\n", estado1);
            printf("Código %s\n", codigo_carta1);
            printf("Cidade: %s\n", nome_cidade1);
            printf("População: %ld habitantes\n", pop1);
            printf("Área: %f km²\n", area1);
            printf("PIB: %f bilhões de reais\n", pib1);
            printf("Quantidade de pontos turísticos: %d\n", ponto_turistico1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", percapita1);
            printf("Super Poder: %.2f\n", superPoder1);

            printf("#######################################\n");
            printf("#######################################\n");

            printf("----------CARTA 02---------\n");
            printf("Nome: %s\n", estado2);
            printf("Código %s\n", codigo_carta2);
            printf("Cidade: %s\n", nome_cidade2);
            printf("População: %ld habitantes\n", pop2);
            printf("Área: %f km²\n", area2);
            printf("PIB: %f bilhões de reais\n", pib2);
            printf("Quantidade de pontos turísticos: %d\n", ponto_turistico2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", percapita2);
            printf("Super Poder: %.2f\n", superPoder2);

                printf("A carta %s tem maior população que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_pop);
                printf("A carta %s tem maior área que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_area);
                printf("A carta %s tem maior PIB que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_pib);
                printf("A carta %s tem maior quantidade de pontos turísticos que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_ponto_turistico);
                printf("A carta %s tem menor densidade populacional que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_densidade);
                printf("A carta %s tem maior PIB per Capita que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_percapita);
                printf("A carta %s tem maior Super Poder que a carta %s? %d\n", nome_cidade1, nome_cidade2, resultado_superPoder);

    return 0;
}
