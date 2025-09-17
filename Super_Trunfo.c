#include <stdio.h>

int main() {
   
    //Declaração das variáveis. optei por agrupar as variáveis do mesmo tipo na mesma linha para economizar espaço vertical.
    char estado1[15], estado2[15], codigo1[5], codigo2[5], cidade1[15], cidade2[15];    
    int tur1, tur2;                                                          
    unsigned long int pop1, pop2;  
    float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2, super1, super2;   
    
    //Aqui inicio com uma orientação para o usuário para que começe a digitar os dados da primeira carta.
    printf("Digite os dados da Carta 1\n\n");
    
    //a partir de agora cada printf anuncia qual dado da primeira carta deverá ser inserido pelo usuário
	printf("Estado: ");
    scanf("%s", estado1);                                                               

    printf("Código: ");
    scanf("%s", codigo1);
        
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%ld", &pop1);
    
    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB em Bilhoes de R$: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &tur1);
    
    //nesse ponto, com todos os dados da primeira carta inseridos e armazenados inicio a geração dos atributos calculados. primeiro a densidade populacional (denpop1), depois o PIP per capita (pibpc1) e por fim o superpoder (super1). Usei conversões explicitas para garantir que o resultado seja do tipo esperado.
    denpop1 = (float) pop1 / area1;

    //optei por converter o PIB de bilhões de reais para escala unitária para fazer o calculo do pib per capita devido a exibição mais amigável ao usuário.
    pibpc1 = (float) (pib1 * 1000000000) / pop1;

    //no superpoder optei por deixar o pib na escala unitária para enfatisar o fato de ser um superpoder.
    super1 = (double) pop1 + area1 + (pib1 * 1000000000) + tur1 + (1 / denpop1) + pibpc1;

    //coloco essa mensagem anunciando que os dados da primeira carta foram armazenados com sucesso para que o usuário fique mais bem orientado de onde está no programa.
    printf("\nDADOS DA CARTA 1 ARMAZENADOS COM SUSSECO!\n\n\n");

    //a partir daqui repetimos, para a segunda carta o processo de coleta de dados e de cálculo de atributos realizado para a primeira carta.
    printf("Digite os dados da Carta 2\n\n");
    
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%ld", &pop2);
    
    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB em Bilhoes de R$: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &tur2);
    
    denpop2 = (float) pop2 / area2;
    pibpc2 = (float) (pib2 * 1000000000) / pop2;
    super2 = (double) pop2 + area2 + (pib2 * 1000000000) + tur2 + (1 / denpop2) + pibpc2;
    
    printf("\nDADOS DA CARTA 2 ARMAZENADOS COM SUSSECO!\n");

    //aqui exibo os dados consolidados das duas cartas antes de iniciar as comparaçoes
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
    printf("Superpoder: %.2f\n\n", super1);
    
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
    printf("Superpoder: %.2f\n\n", super2);

    printf("------------------------------------------------\n\n");

    //aqui coloco uma chamada para destacar que será exibido o resultado por categoria e logo em seguida exibo se a carta 1 venceu ou não. Cada atributo em uma linha
    //Observação: devido a limitação dos comandos utilizados, quando os dois valores são iguais o código falha mostrando que a carta 1 não venceu e leva a crer que a carta 2 venceu.
    printf("A CARTA VENCEDORA DE CADA CATEGORIA É A SEGUINTE:\n\n");

    printf("População: a carta 1 venceu? %d\n", pop1 > pop2);
    printf("Área: a carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: a carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos turisticos: a carta 1 venceu? %d\n", tur1 > tur2);
    printf("Densidade Populacional: a carta 1 venceu? %d\n", (1 / denpop1) > (1 / denpop2));
    printf("PIB per capita: a carta 1 venceu? %d\n", pibpc1 > pibpc2);
    printf("Superpoder: a carta 1 venceu? %d\n\n", super1 > super2);

    printf("FIM DE JOGO. OBRIGADO POR JOGAR SUPER TRUNFO!!\n\n\n");
    
    
    /*
    //Bônus: Desenvolvi uma lógica, sem usar condicionais, para informar qual carta venceu cada comparação e o placar final, mas...
    //Observação: Quando é empate o código mostra qua a carta 2 venceu. Não consegui contornar essa limitação devido a limitação de comandos. Apesar do placar final contabilizar o empate corretamente.
    //o ideal seria declarar todas as variáveis no inicio do código, mas como este bloco não faz parte do código original, optei por declarar aqui para que não "polua" o programa com variáveis desnecessárias.
    
    int resultado, vit1, empate;

    resultado = pop1 < pop2;
    resultado++;
    printf("População: VENCEU A CARTA %d!\n", resultado);
    
    resultado = area1 < area2;        
    resultado++;
    printf("Área: VENCEU A CARTA %d!\n", resultado);
    
    resultado = pib1 < pib2;    
    resultado++;
    printf("PIB: VENCEU A CARTA %d!\n", resultado);
    
    resultado = tur1 < tur2;    
    resultado++;
    printf("Pontos turísticos: VENCEU A CARTA %d!\n", resultado);
    
    resultado = denpop1 < denpop2;    
    resultado++;
    printf("Densidade populacional: VENCEU A CARTA %d!\n", resultado);
    
    resultado = pibpc1 < pibpc2;    
    resultado++;
    printf("PIB per capita: VENCEU A CARTA %d!\n", resultado);
    
    resultado = super1 < super2;    
    resultado++;
    printf("Superpoder: VENCEU A CARTA %d!\n\n", resultado);

    vit1 = pop1 < pop2;
    vit1 = vit1 + (area1 > area2);
    vit1 = vit1 + (pib1 > pib2);
    vit1 = vit1 + (tur1 > tur2);
    vit1 = vit1 + (denpop1 > denpop2);
    vit1 = vit1 + (pibpc1 > pibpc2);
    vit1 = vit1 + (super1 > super2);
    empate = (pop1 == pop2);
    empate = empate + (area1 == area2);
    empate = empate + (pib1 == pib2);
    empate = empate + (tur1 == tur2);
    empate = empate + (denpop1 == denpop2);
    empate = empate + (pibpc1 == pibpc2);
    empate = empate + (super1 == super2);
    
    printf("*****RESULTADO FINAL*****\n\n");
    printf("A CARTA 1 VENCEU %d.\n", vit1);
    printf("A CARTA 2 VENCEU %d.\n\n", 7 - vit1 - empate);
    printf("HOUVERAM %d EMPATES.\n\n", empate);
    */
  
    return 0;
}