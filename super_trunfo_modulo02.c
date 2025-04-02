#include <stdio.h>
int main (){

    // Variáveis das Cartas 1 e 2

    float pib1, pib2; //Produto interno bruto
    float area1, area2; // Área relacionada a Km²
    float densidade_populacional1, densidade_populacional2; // Divisão da população pela área 
    float per_capita1, per_capita2; //Divisão PIB pela população
    float super_poder1, super_poder2; //Soma de todas as variáveis numéricas (ex: pib, area, população, etc...)
    char estado1, estado2; //Usar apenas uma caractere para representar Estado (ex: A , B, C...)
    char codigo_da_carta1[4], codigo_da_carta2[4]; // Códigos como A01, B02
    char cidade1[20], cidade2[20];      // Nomes sem espaços (limite de 19 caracteres)
    unsigned int populacao1, populacao2; // Sem sinal (não existe população negativa)
    int pontos_turisticos1, pontos_turisticos2;

    /*Apresentação das Cartas
    Cada jogadore apresanta sua carta com Estado, 
    código da carta e nome da cidade.*/

    printf("***APRESENTAÇÃO DAS CARTAS***\n\n");

    printf("-- Jogador 1 apresente a sua Carta com código do Estado, código da carta e cidade ! --\n");
    printf("Digite o Código do Estado ( A - H):\n");
    scanf(" %c", &estado1);
    printf("Digite o Código da sua carta ( A01 - B02):\n");
    scanf("%s", codigo_da_carta1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("--Jogador 2 apresente a sua Carta com código do Estado, código da carta e cidade !--\n");
    printf("Digite o Código do Estado ( A - H):\n");
    scanf(" %c", &estado2);
    printf("Digite o Código da sua carta ( A01 - B02):\n");
    scanf("%s", codigo_da_carta2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
   
    /*Disputa entre Cartas
    Disputa de cada atributos da carta 1 contra carta 2.
    */

    printf("***DISPUTA ENTRE CARTAS***\n\n");

    printf("Digite a População da cidade (JOGADOR 1 - Carta 1):\n");   // Especificador %u relacionado a unsigned
    scanf("%u", &populacao1);                                          // não existe população negativa   
    printf("Digite a população da cidade (JOGADOR 2 - Carta 2):\n");
    scanf("%u", &populacao2);

    //Estrutura de decisão composta
    if (populacao1 > populacao2) //condição
    {
        printf("Carta 1 venceu !\n"); //Bloco de código a ser executado se a condição for verdadeira
    } else {
        printf("Carta 2 venceu !\n"); //Bloco de código a ser executado se a condição for falsa
    }
    
    printf("Digite a área em Km² (JOGADOR 1 - Carta 1):\n"); // área relacionada a km²
    scanf("%f", &area1);
    printf("Digite a área em Km² (JOGADOR 2 - Carta 2):\n");
    scanf("%f", &area2);
    if (area1 > area2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n");
    }
    
    printf("Digite o PIB (JOGADOR 1 - Carta 1):\n"); // Produto interno bruto
    scanf("%f", &pib1);
    printf("Digite o PIB (JOGADOR 2 - Carta 2):\n");
    scanf("%f", &pib2);
    if (pib1 > pib2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n");
    }
    
    printf("Digite a quantidade dos pontos turísticos da cidade (JOGADOR 1 - Carta 1):\n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a quantidade dos pontos turísticos da cidade (JOGADOR 2 - Carta 2 ):\n");
    scanf("%d", &pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n\n");
    }
    

    printf("***DENSIDADE POPULACIONAL E PIB PER CAPITA***\n\n");

    //Fazer a divisão correta para ambas variáveis.
    densidade_populacional1 = (float) populacao1 / area1; //Divisão da população por área em Km² exatamente nessa ordem.
    printf("A densidade populacional do jogador 1 (Carta 1) é:%.2f\n", densidade_populacional1);
    densidade_populacional2 = (float) populacao2 / area2;
    printf("A densidade populacional do jogador 2 (Carta 2) é:%.2f\n", densidade_populacional2);
    if (densidade_populacional1 > densidade_populacional2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n");
    }
/*
 Requisitos funcionais desafio novato (Requisitos número 05)
 
 Exibir o resultado da comparação: O programa deve exibir,
 de forma clara, qual carta venceu a comparação, 
 incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo.
 */
    per_capita1 = (float) pib1 / populacao1; //Divisão de PIB por população exatamente nessa ordem.
    printf("O PIB per capita do jogador 1 (Carta 1) é: %.2f\n", per_capita1);
    per_capita2 = (float) pib2 / populacao2;
    printf("O PIB per capita do jogador 2 (Carta 2) é: %.2f\n", per_capita2);
    if (per_capita1 > per_capita2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n");
    }
    
    printf("***SUPER PODER***\n\n");
     
    /*
    Soma todos os atributos com pesos iguais
    Representa o "poder total" da carta
     */
    
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + per_capita1 + densidade_populacional1;
    printf("Super Poder do Jogador 1 (Carta 1) é: %.2f\n", super_poder1);
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + per_capita2 + densidade_populacional2;
    printf("Super Poder do Jogador 2 (Carta 2) é: %.2f\n", super_poder2);
    if (super_poder1 > super_poder2)
    {
        printf("Carta 1 venceu !\n");
    } else {
        printf("Carta 2 venceu !\n");
    }
    

    return 0;


}