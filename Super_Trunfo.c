#include <stdio.h>

int main() {
   
    int tur1 = 1, tur2 = 2, resultado;                                                                     //Aqui defino todas as variáveis do tipo int
    unsigned long int pop1 = 3000, pop2 = 2;  
    float area1 = 65000.0, area2= 2.00, pib1 = 1.0, pib2 = 2.0, denpop1, denpop2, pibpc1, pibpc2;   //Aqui defino todas as variáveis do tipo float
    float super1, super2;
    
    denpop1 = (float) pop1 / area1;										            //calcula a densidade populacional da cidade da carta 1 e armazena na variável denpop1. Uso conversão explicita para que o resultado seja float.
    printf("densidade: %f\n", denpop1);
    super1 = 1.0 / denpop1;
    printf("Densidade inversa: %f\n", super1);


    /*
    char estado1[15], estado2[15], codigo1[5], codigo2[5], cidade1[15], cidade2[15];    //Aqui defino todas as variáveis do tipo char
    int tur1, tur2, resultado;                                                          //Aqui defino todas as variáveis do tipo int
    unsigned long int pop1, pop2;  
    float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2;                   //Aqui defino todas as variáveis do tipo float
    double super1, super2;                                                              //declarei as variáveis de super poder como double pois quando as coloco como float e o resultado do pib per capita fica na casa dos bilhões o programa falha em mostrar o valor correto do super poder.
           
    printf("Digite os dados da Carta 1\n\n");                                           //anuncia para usuário que vai iniciar a leitura dos dados da carta 1
    
	printf("Estado: ");                                                                 //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", estado1);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Código: ");                                                                 //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", codigo1);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.
        
    printf("Nome da Cidade: ");                                                         //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", cidade1);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("População: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%ld", &pop1);                                                                //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Área em Km²: ");                                                            //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &area1);                                                                //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("PIB em Bilhoes de R$: ");                                                   //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &pib1);                                                                 //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Número de pontos turísticos: ");                                            //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &tur1);                                                                 //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    denpop1 = (float) pop1 / area1;											            //calcula a densidade populacional da cidade da carta 1 e armazena na variável denpop1. Uso conversão explicita para que o resultado seja float.    
    pibpc1 = (float) pib1 / pop1;								        //calcula o PIP per capita da carta 1 e armazena na variával pibpc1. Uso conversão explicita para que o resultado seja float.
    super1 = (double) pop1 + area1 + pib1 + tur1 + (1 / denpop1) + pibpc1;                 //calcula o supperpoder da carta 1 fazendo a conversão explicita para float
    
    printf("\nDADOS DA CARTA 1 ARMAZENADOS COM SUSSECO!\n\n\n");                        //informa ao usuário que os dados da primeira carta foram armazenados corretamente. 
    printf("Digite os dados da Carta 2\n\n");                                           //informa que começará a coletar os dados da segunda carta.
    
    printf("Estado: ");                                                                 //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", estado2);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Código: ");                                                                 //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", codigo2);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Nome da Cidade: ");                                                         //informa qual dado deverá ser informado pelo usuário.
    scanf("%s", cidade2);                                                               //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("População: ");                                                              //informa qual dado deverá ser informado pelo usuário.
    scanf("%ld", &pop2);                                                                //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    printf("Área em Km²: ");                                                            //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &area2);                                                                //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("PIB em Bilhoes de R$: ");                                                   //informa qual dado deverá ser informado pelo usuário.
    scanf("%f", &pib2);                                                                 //lê o dado digitado no teclado e armazena na variavel correspondente.

    printf("Número de pontos turísticos: ");                                            //informa qual dado deverá ser informado pelo usuário.
    scanf("%d", &tur2);                                                                 //lê o dado digitado no teclado e armazena na variavel correspondente.
    
    denpop2 = (float) pop2 / area2; 												    //calcula a densidade populacional da cidade da carta 2 e armazena na variável denpop2. Uso conversão explicita para que o resultado seja float.    
    pibpc2 = (float) (pib2 * 1000000000) / pop2;									    //calcula o PIP per capita da carta 2 e armazena na variával pibpc2. Uso conversão explicita para que o resultado seja float.
    super2 = (double) pop2 + area2 + pib2 + tur2 + (1 / denpop2) + pibpc2;                 //calcula o supperpoder da carta 1 fazendo a conversão explicita para float
    
    printf("\nDADOS DA CARTA 2 ARMAZENADOS COM SUSSECO!\n");
    printf("AS CARTAS CADASTRADAS SÃO AS SEGUINTES:\n\n\n");
    
    printf("Carta 1:\n\n");                            								    //Exibição dos dados da carta 1.
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi de reais.\n", pib1);
    printf("Pontos turísticos: %d\n", tur1);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop1);
    printf("PIB per capita: R$ %.2f por habitante\n", pibpc1);
    printf("Superpoder: %.2f\n\n", super2);
    
    printf("Carta 2:\n\n");                            								//Exibição dos dados da carta 1.
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi de reais.\n", pib2);
    printf("Pontos turísticos: %d\n", tur2);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop2);
    printf("PIB per capita: R$ %.2f por habitante\n", pibpc2);
    printf("Superpoder: %.2f\n\n", super1);

    printf("A CARTA VENCEDORA DE CADA CATEGORIA É A SEGUINTE:\n\n\n");

    resultado = pop1 < pop2;
    resultado++;
    printf("População: VENCEU A CARTA %d!\n", resultado);
    printf("Área: VENCEU A CARTA %d!\n", resultado);
    printf("PIB: VENCEU A CARTA %d!\n", resultado);
    printf("Pontos turísticos: VENCEU A CARTA %d!\n", resultado);
    printf("Densidade populacional: VENCEU A CARTA %d!\n", resultado);
    printf("PIB per capita: VENCEU A CARTA %d!\n", resultado);
    printf("Superpoder: VENCEU A CARTA %d!\n", resultado);
    */
    return 0;
}
