#include <stdio.h>

int main() {
    //carta 1
    char  state1[10]; //Declara�ao do estado
    char code1[10]; //Declara�ao do codigo
    char city1[20]; //Declara�ao da cidade
    float area1, gdp1; //Aqui est� sendo declarada a area, e o PIB (GDP) para fins de did�tica, optei por deixar o codigo em ingl�s
    int num_pt; //N�mero de pontos turisticos
    int pop1; //N�mero da popula��o da cidade, dada em inteiro.

    char  state2[1]; //Declara�ao do estado
    char code2[3]; //Declara�ao do codigo
    char city2[20]; //Declara�ao da cidade
    float area2, gdp2; //Aqui est� sendo declarada a area, e o PIB (GDP) para fins de did�tica, optei por deixar o codigo em ingl�s
    int num_pt_2; //N�mero de pontos turisticos
    int pop2; //N�mero da popula��o da cidade, dada em inteiro.



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

    printf("INFORME O PIB (bilh�es): ");
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

    printf("INFORME O PIB (bilh�es): ");
    scanf(" %f", &gdp2);

    printf("QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf(" %d", &num_pt_2);


    // Exibi��o Carta 1
    printf("\nEstado: %s",state1);
    printf("\n Codigo: %s",code1);
    printf("\n Cidade : %s",city1);
    printf("\n Populacao: %d",pop1);
    printf("\n Area: %f",area1);
    printf("\n Ponto Turistico: %d",num_pt);

    printf("\n \n \n");

    // Exibi��o Carta 2
    printf("\nEstado: %s",state2);
    printf("\n Codigo: %s",code2);
    printf("\n Cidade : %s",city2);
    printf("\n Populacao: %d",pop2);
    printf("\n Area: %f",area2);
    printf("\n Ponto Turistico: %d",num_pt_2);

    printf("\n **********FIM DO JOGO - SUPER TRUNFO- QUEM FOI O VENCEDOR ? *********** \n");

        return 0;



}
