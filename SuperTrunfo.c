#include <stdio.h>

int main() {
    //carta 1
    char  state1[10]; //Declaraçao do estado
    char code1[10]; //Declaraçao do codigo
    char city1[20]; //Declaraçao da cidade
    float area1, gdp1; //Aqui está sendo declarada a area, e o PIB (GDP) para fins de didática, optei por deixar o codigo em inglês
    int num_pt; //Número de pontos turisticos
    int pop1; //Número da população da cidade, dada em inteiro.

    char  state2[1]; //Declaraçao do estado
    char code2[3]; //Declaraçao do codigo
    char city2[20]; //Declaraçao da cidade
    float area2, gdp2; //Aqui está sendo declarada a area, e o PIB (GDP) para fins de didática, optei por deixar o codigo em inglês
    int num_pt_2; //Número de pontos turisticos
    int pop2; //Número da população da cidade, dada em inteiro.



    printf("**********OLA! SEJA BEM VINDO AO JOGO - SUPER TRUNFO *********** \n");
    // Entrada Carta 1
    printf("**CADASTRO CARTA 1:\n");

    printf("INFORME A LETRA CORRESPONDENTE AO ESTADO (A-H): ");
    scanf(" %s", &state1);

    printf("INFORME O CODIGO DA CARTA: ");
    scanf(" %s", &code1);

    printf("INFORME A CIDADE: ");
    scanf(" %s", &city1);

    printf("INFORME A POPULACAO: ");
    scanf(" %d", &pop1);

    printf("INFORME A AREA(km 2): ");
    scanf(" %f", &area2);

    printf("INFORME O PIB (bilhões): ");
    scanf(" %f", &gdp2);

    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf(" %d", &num_pt_2);


    //**//**//   //**//**//   //**//**//   //**//**//   //**//**//   //**//**//   //**//**//
    //Entrada Carta 2

    printf("\n**CADASTRO CARTA 2:\n");

    printf("\nINFORME A LETRA CORRESPONDENTE AO ESTADO (A-H): ");
    scanf(" %s", &state2);

    printf("INFORME O CODIGO DA CARTA: ");
    scanf(" %s", &code2);

    printf("INFORME A CIDADE: ");
    scanf(" %s", &city2);

    printf("INFORME A POPULACAO: ");
    scanf(" %d", &pop2);

    printf("INFORME A AREA(km 2): ");
    scanf(" %f", &area2);

    printf("INFORME O PIB (bilhões): ");
    scanf(" %f", &gdp2);

    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf(" %d", &num_pt_2);


    // Exibição Carta 1
    printf("\nEstado: %s",state1);
    printf("\n Codigo: %s",code1);
    printf("\n Cidade : %s",city1);
    printf("\n Populacao: %d",pop1);
    printf("\n Area: %f",area1);
    printf("\n Ponto Turistico: %d",num_pt);

    printf("\n \n \n");

    // Exibição Carta 2
    printf("\nEstado: %s",state2);
    printf("\n Codigo: %s",code2);
    printf("\n Cidade : %s",city2);
    printf("\n Populacao: %d",pop2);
    printf("\n Area: %f",area2);
    printf("\n Ponto Turistico: %d",num_pt_2);

    printf("\n **********FIM DO JOGO - SUPER TRUNFO- QUEM FOI O VENCEDOR ? *********** \n");

        return 0;



}
