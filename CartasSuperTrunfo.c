#include   <stdio.h>


int main(){ //nesta linha, cada função é declarada com um tipo de retorno, que é o tipo de dado que a função retorna. No caso, a função main retorna um inteiro.
    printf("\n ***Super Trunfo*** \n\n");

    char estado1[100], estado2[100], nomedacidade1[100], nomedacidade2[100], codigo1[100], codigo2[100]; 
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadedepopulacao1, densidadedepopulacao2, pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

   //entrada de dados da carta 1
   //aqui se usa o printf para imprimir uma mensagem na tela e o scanf para receber um valor digitado pelo usuário, o mesmo vale para as demais entradas de dados
    printf("Carta 1\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    //entrada de dados da carta 2
    printf("\n Carta 2 \n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    //cálculo da densidade de população
    //aqui se faz o cálculo da densidade de população, que é a divisão da população pela área
    densidadedepopulacao1 = (float) populacao1 / area1;
    densidadedepopulacao2 = (float) populacao2 / area2;

    //cálculo do PIB per capita
    //aqui se faz o cálculo do PIB per capita, que é a divisão do PIB pela população
    pibpercapita1 = pib1 / (float) populacao1;
    pibpercapita2 = pib2 / (float) populacao2;

    //cálculo do superpoder
    //aqui se faz o cálculo do superpoder, que é a multiplicação da população, área, pib, pontos turísticos, densidade de população e pib per capita
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + ((float)1 / densidadedepopulacao1) + pibpercapita1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + ((float)1 /densidadedepopulacao2) + pibpercapita2;

    
    //impressão dos dados
    //aqui se usa o printf para imprimir os dados que foram digitados pelo usuário anteriormente e retorná-los na tela com a mensagem que foi escrita
    printf("\n  Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2fmilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade de população: %.2fkm²\n", densidadedepopulacao1);
    printf("PIB per capita: %.2fmil\n", pibpercapita1);

    printf("\n Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade de população: %.2fkm²\n", densidadedepopulacao2);
    printf("PIB per capita: %.2fmil\n", pibpercapita2);


//comparação dos superpoderes
    //aqui se faz a comparação dos superpoderes, se o superpoder 1 for maior que o superpoder 2, a mensagem "Carta 1 venceu" será impressa na tela, se o superpoder 2 for maior que o superpoder 1, a mensagem "Carta 2 venceu" será impressa na tela, se os superpoderes forem iguais, a mensagem "Empate" será impressa na tela
    if (superpoder1 > superpoder2){
        printf("\n Carta 1 venceu\n");
    } else if (superpoder2 > superpoder1){
        printf("\n Carta 2 venceu\n");
    } else {
        printf("\n Empate\n");



return 0;
}
}
