#include <stdio.h>

int main(){

   char estado1, estado2;
   int cidade1, cidade2;
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontoturistico1, pontoturistico2;
   float densidade1, densidade2;
   float pib_per_capita1, pib_per_capita2;
   float superpoder1, superpoder2;
   int Vitoriacarta1 = 0, Vitoriacarta2 = 0;

    // Cadastro da primeira Carta:
    printf(" cadastramento da primeira carta:\n");

    printf("Digite o codigo da carta, seguindo as intruções:\n");

    printf("Coloque uma letra de A a H, para repersentar o estado:\n");
    scanf("%c", &estado1);

    printf("Digite um número de 1 a 4, para representar a cidade: \n");
    scanf("%d", &cidade1);

    printf("Digite a populacao (sem colocar . ou ,): \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (inserindo o ponto): \n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade (inserindo o ponto): \n");
    scanf("%f", &pib1);

    printf("Digite os números totais de pontos turisticos: \n");
    scanf(" %d", &pontoturistico1);


    // cadastro da segunda carta
    printf("cadastramento da segunda carta:\n");

   printf("Digite o codigo da carta, seguindo as intruções:\n");

    printf("Coloque uma letra de A a H, para repersentar o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um número de 1 a 4, para representar a cidade: \n");
    scanf(" %d", &cidade2);

    printf("Digite a populacao (sem colocar . ou ,): \n");
    scanf(" %d", &populacao2);

    printf("Digite a área em km² (inserindo o ponto): \n");
    scanf(" %f", &area2);

    printf("Digite o pib da cidade (inserindo o ponto): \n");
    scanf("%f", &pib2);

    printf("Digite os números totais de pontos turisticos: \n");
    scanf(" %d", &pontoturistico2);
 
    // impressão dos dados cadastrados das cartas

    // carta 1
    printf("Dados da carta cadastrada:\n");
    printf("O codigo da carta é: %c%02d\n", estado1, cidade1);
    printf("O estado é: %c\n", estado1);
    printf("A cidade é: %d\n", cidade1);
    printf("A população é: %d\n", populacao1);
    printf("A área da cidade é: %.2f km²\n", area1);
    printf("O pib da cidade é: %.2f bilhões\n", pib1);
    printf("O número de pontos turisticos da cidade é: %d \n", pontoturistico1);
    
    printf("Nova propriedade calculada: \n");

    // calculo da densidade da população da carta 1

    densidade1 = (float) populacao1 / area1;

    printf("Densidade populacional: %.2f\n", densidade1);

    // calulo do pib per capita da carta 1

    pib_per_capita1 = (float) pib1 / populacao1;

    printf ("Pib per capita: %.6f bilhões\n:", pib_per_capita1);

    // impressão da carta 2

    printf("Dados da carta cadastrada:\n");
    printf("O codigo da carta é: %c%02d\n", estado2, cidade2);
    printf("O estado é: %c\n", estado2);
    printf("A cidade é: %d\n", cidade2);
    printf("A população é: %d\n", populacao2);
    printf("A área da cidade é: %.2f km²\n", area2);
    printf("O pib da cidade é: %.2f bilhões\n", pib2);
    printf("O número de pontos turisticos da cidade é: %d \n", pontoturistico2);

    printf("Nova propriedade calculada: \n");

    // calculo da densidade da população da carta 2

    densidade1 = (float) populacao2 / area2;

    printf("Densidade populacional: %.2f\n", densidade2);

    // calulo do pib per capita da carta 2

    pib_per_capita2 = (float) pib2 / populacao2;

    printf ("Pib per capita: %.6f bilhões\n:", pib_per_capita2);

      // super poderes das cartas

        superpoder1 = area1 + populacao1 + pib1 + pontoturistico1;
        superpoder2 = area2 + populacao2 + pib2 + pontoturistico2;

        //comparação densidade, a menor ganha

        printf("ganha a carta que estiver a menor densidade!\n");

        if(densidade1 < densidade2){
            printf("A densidade da cidade 1 é menor\n");
        } 
        else{
            printf("A densidade da cidade 2 é menor do que da cidade 1\n");
        }
        printf("a carta que estiver a maior populaçao vence!\n");

        if(populacao1 > populacao2){
            printf("a cidade 1 tem a maior populaçao\n");
        }
        else{
            printf("a cidade 2 tem a maior populaçao\n");
        }
        printf("a cidade que estiver a maior area vence!\n");

        if(area1 > area2){
            printf("a cidade 1 tem a maior area\n");
        }
        else{
            printf("a cidade 2 tem a maior area\n");
        }
        
        printf("a cidade que estiver o maior pib per capita vence!\n");

        if(pib_per_capita1 > pib_per_capita2){
            printf(" o pib per capita da cidade 1 é maior\n");
        }
        else{
            printf("o pib per capita da cidade 2 é maior\n");
        }

       Vitoriacarta1 += (densidade1 < densidade2);
        Vitoriacarta2 += (densidade2 < densidade1);


        //Comparação das cartas, a maior carta ganha
        
        Vitoriacarta1 += (densidade1 < densidade2);
        Vitoriacarta2 += (densidade2 < densidade1);
        Vitoriacarta1 += (populacao1 > populacao2);
        Vitoriacarta2 += (populacao2 > populacao1);
        Vitoriacarta1 += (area1 > area2);
        Vitoriacarta2 += (area2 > area1);
        Vitoriacarta1 += (pib1 > pib2);
        Vitoriacarta2 += (pib2 > pib1);
        Vitoriacarta1 += (pib_per_capita1 > pib_per_capita2);
        Vitoriacarta2 += (pib_per_capita2 > pib_per_capita1);
        Vitoriacarta1 += (superpoder1 > superpoder2);
        Vitoriacarta2 += (superpoder2 > superpoder1);

        //impressão do resultado final
        
        printf("Resultado da comparação:\n");

        printf("Carta 1 ganhou %d\n", Vitoriacarta1);
        printf("Carta 2 ganhou %d\n", Vitoriacarta2);
    

    return 0;
}
