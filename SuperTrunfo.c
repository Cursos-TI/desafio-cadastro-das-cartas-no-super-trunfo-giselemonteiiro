#include <stdio.h>

/*  Informações do programa super trunfo em C
|   Variaveis:
|   state1 e state2 (tipo char) recebe do usuario o nome do Estado
|   code1 e code2 (tipo char) recebe do usuario o código do Estado
|   city1 e city2 (tipo char) recebe do usuario o nome da Cidade
|   city1 e city2 (tipo char) recebe do usuario o nome da Cidade
|   area1 e area2 (tipo float1) recebe do usuario número da área dada em Km²
|   pib1 e pib2 (tipo float1) recebe do usuario número do PIB (Produto Interno Bruto)
|   num_pt e num_pt_2 (tipo int) recebe do usuario o número de pontos turísticos naquela cidade
|   pop1 e pop2 (tipo inteiro) recebe do usuario a quantidade da população naquela cidade

*/

int main() {
    //carta 1
    char  state1[10];
    char code1[10];
    char city1[20];
    float area1, pib1;
    int num_pt;
    int pop1;

    char  state2[10];
    char code2[10];
    char city2[20];
    float area2, pib2;
    int num_pt_2;
    int pop2;

    /* Printf - mostra para o usuario uma mensagem informativa descrevendo qual tipo de informação o usuario deve digitar
       Scanf -  o campo de entrada de informações*/

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
    scanf(" %f", &area1);

    printf("INFORME O PIB (bilhões): ");
    scanf(" %f", &pib1);

    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf(" %d", &num_pt_1);


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
    scanf(" %f", &pib2);

    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf(" %d", &num_pt_2);


    // Exibição Carta 1
    printf("\nEstado: %s",state1);
    printf("\n Codigo: %s",code1);
    printf("\n Cidade : %s",city1);
    printf("\n Populacao: %d",pop1);
    printf("\n Area: %f",area1);
    printf("\n PIB: %f",pib1);
    printf("\n Ponto Turistico: %d",num_pt);

    printf("\n \n \n");

    // Exibição Carta 2
    printf("\nEstado: %s",state2);
    printf("\n Codigo: %s",code2);
    printf("\n Cidade : %s",city2);
    printf("\n Populacao: %d",pop2);
    printf("\n Area: %f",area2);
    printf("\n PIB: %f",pib2);
    printf("\n Ponto Turistico: %d",num_pt_2);

    printf("\n **********FIM DO JOGO - SUPER TRUNFO- QUEM FOI O VENCEDOR ? *********** \n");

        return 0;



}
