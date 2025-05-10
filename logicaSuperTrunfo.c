#include <stdio.h>

int main() {
    //comparaçoes
    char codigo1[10], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char codigo2[10], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;

    double densidade1, densidade2;
    double pib_per_capita1, pib_per_capita2;

    //round | escolha de cada player
    int escolha1, escolha2,round1,round2;

    //resultados
    int resultado1, resultado2;

    printf(">> **Boas vindas ao jogo Super Trunfo** <<\n");
    printf("Definina os atributos de suas cartas e seu codigo\n");
    printf("player 1 começa\n");

    // Cadastro Carta 1
    printf("** Cadastro Carta 1 **\n");
    printf("Código: ");
     scanf("%s", codigo1);

    printf("Estado: ");
     scanf("%s", estado1);

    printf("População: "); 
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: "); 
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
     scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\n** Cadastro Carta 2 **\n");

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("População: "); 
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: "); 
    scanf("%f", &pib2);

    printf("Pontos turísticos: "); 
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = (double) populacao1 / area1;
    densidade2 = (double) populacao2 / area2;
    pib_per_capita1 = (double) pib1 / populacao1;
    pib_per_capita2 = (double) pib2 / populacao2;

    // Exibição das cartas
    printf("\n** Carta 1 **\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2lf\nPIB per Capita: %.2f\n",
        codigo1, estado1, populacao1, area1, pib1, pontos1, densidade1, pib_per_capita1);
    printf("\n** Carta 2 **\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2lf\nPIB per Capita: %.2f\n",
           codigo2, estado2, populacao2, area2, pib2, pontos2, densidade2, pib_per_capita2);

    // Primeiro confront round 1
    printf("\n >> Round 1 << \n");
    printf("\nEscolha seu metodo de ataque (1 a 6): \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &round1);

    // Round 1
    switch(round1) {
        case 1: 
            printf("\ncomparação por população!\n ");
            resultado1 = populacao1 > populacao2; 
        break;
        
        case 2:
            printf("\ncomparação por Area!\n ");
            resultado1 = area1 > area2; 
        break;
        
        case 3:
             printf("\ncomparação por Pib!\n ");
            resultado1 = pib1 > pib2; 
        break;
        
        case 4:
             printf("\ncomparação por Pontos Turisticos!\n ");
            resultado1 = pontos1 > pontos2; 
        break;
        
        case 5:
             printf("\ncomparação por Densidade populacional!\n ");
            resultado1 = densidade1 < densidade2; 
        break;
        
        case 6:
             printf("\ncomparação por Pib per capita! \n");
            resultado1 = pib_per_capita1 > pib_per_capita2; 
        break;
        default:
            printf("Numero invalido\n");
        break;
    }
    //Segundo confronto round 2 
    printf("\n >> Round 2 << \n");
    printf("Escolha seu metodo de ataque (1 a 6): \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &round2);

    // Round 2
    if (round1 != round2) {
        switch(round2) {
            
            case 1:
                printf("\ncomparação por população!\n ");
                resultado2 = populacao1 > populacao2;
            break;
            
            case 2:
                printf("\ncomparação por Area!\n ");
                resultado2 = area1 > area2; 
            break;
            
            case 3:
                printf("\ncomparação por Pib! \n");
                resultado2 = pib1 > pib2; 
            break;
            
            case 4:
                printf("\ncomparação por Pontos turisticos! \n");
                resultado2 = pontos1 > pontos2;
            break;
           
            case 5:
                printf("\ncomparação por Densidade Populacional! \n"); 
                resultado2 = densidade1 < densidade2; 
            break;
            
            case 6:
                printf("\ncomparação por Pib per capita!\n ");
                resultado2 = pib_per_capita1 > pib_per_capita2; 
            break;
            default:
                printf("Número inválido\n");
            break;
        }
    } else {
        printf("\n ## Esse é o mesmo atributo de antes, por favor selecione um diferente! ##\n");
        printf(" \n O jogo será encerrado, tente novamente com atributos diferentes.\n");
        return 0; // encerra o programa imediatamente
    }

    // 1|1 = player 1 ganhou, 0|0 player 2 ganhou, 0|1 ou 1|0 empate
    if (resultado1 && resultado2){
        printf("Vitorio para o jogador %s\n",codigo1);
        printf("Vitoria no primeiro round e no segundo round !\n");
    } else if (resultado1 != resultado2){
        printf("Empatou\n");
    } else {
        printf("Vitorio para o jogador %s\n",codigo2);
        printf("Vitoria no primeiro round e no segundo round !\n");
    }

    return 0;

}