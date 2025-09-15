#include <stdio.h>

int main() {
   
    char estado1[15], estado2[15], codigo1[5], codigo2[5], cidade1[15], cidade2[15]; //Aqui defino todas as variáveis do tipo char
    int pop1, pop2, tur1, tur2;                                                      //Aqui defino todas as variáveis do tipo int  
    float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2;                //Aqui defino todas as variáveis do tipo float
           
    printf("Digite os dados da Carta 1\n\n");                                        //anuncia para usuário que vai iniciar a leitura dos dados da carta 1
    
	printf("Estado: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", estado1);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Código: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", codigo1);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.
        
    printf("Nome da Cidade: ");                                                      //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", cidade1);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("População: ");                                                           //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &pop1);                                                              //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Área em Km²: ");                                                         //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &area1);                                                             //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("PIB em Bilhoes de R$: ");                                                //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &pib1);                                                              //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Número de pontos turísticos: ");                                         //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &tur1);                                                              //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    denpop1 = (float) pop1 / area1;											         //calcula a densidade populacional da cidade da carta 1 e armazena na variável denpop1.
    
    pibpc1 = (float) (pib1 * 1000000000) / pop1;								     //calcula o PIP per capita da carta 1 e armazena na variával pibpc1.
    
    printf("\nDADOS DA CARTA 1 ARMAZENADOS COM SUSSECO!\n\n\n");                     //informa ao usuário que os dados da primeira carta foram armazenados corretamente. 
    printf("Digite os dados da Carta 2\n\n");                                        //informa que começará a coletar os dados da segunda carta.
    
    printf("Estado: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", estado2);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Código: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", codigo2);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Nome da Cidade: ");                                                      //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", cidade2);                                                            //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("População: ");                                                           //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &pop2);                                                              //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Área em Km²: ");                                                         //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &area2);                                                             //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("PIB em Bilhoes de R$: ");                                               //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &pib2);                                                             //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Número de pontos turísticos: ");                                        //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &tur2);                                                             //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    denpop2 = (float) pop2 / area2; 												//calcula a densidade populacional da cidade da carta 2 e armazena na variável denpop2.
    
    pibpc2 = (float) (pib2 * 1000000000) / pop2;									//calcula o PIP per capita da carta 2 e armazena na variával pibpc2.
    
    printf("\nDADOS DA CARTA 2 ARMAZENADOS COM SUSSECO!\n");
    printf("PRONTO PARA JOGAR? AS CARTAS CADASTRADAS SÃO AS SEGUINTES:\n\n\n");
    
    printf("Carta 1:\n\n");                            								//Exibição dos dados da carta 1.
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Pontos turísticos: %d\n", tur1);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop1);
    printf("PIB per capita: R$ %.2f por habitante\n\n", pibpc1);
    
    printf("Carta 2:\n\n");                            								//Exibição dos dados da carta 1.
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Pontos turísticos: %d\n", tur2);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop2);
    printf("PIB per capita: R$ %.2f por habitante\n\n", pibpc2);

    return 0;
}