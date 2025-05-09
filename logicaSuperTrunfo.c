#include <stdio.h>

int main() {
    char codigo1[10], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char codigo2[10], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;

    double densidade1, densidade2;
    double pib_per_capita1, pib_per_capita2;

    int escolha1, escolha2;

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

    // Menu de escolha para cada jogador
    printf("\n>> Atributos para escolha:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");

    printf("\nJogador da Carta 1, escolha o atributo: ");
    scanf("%d", &escolha1);

    printf("Jogador da Carta 2, escolha o atributo: ");
    scanf("%d", &escolha2);

    printf("\n>> Comparação de Atributos Escolhidos <<\n");

    // Se os dois escolherem o mesmo atributo, comparar diretamente
    if (escolha1 == escolha2) {
        switch (escolha1) {
            case 1:
                if (populacao1 > populacao2)
                    printf("Carta 1 vence em População!\n");
                else if (populacao1 < populacao2)
                    printf("Carta 2 vence em População!\n");
                else
                    printf("Empate em População!\n");
                break;
            case 2:
                if (area1 > area2)
                    printf("Carta 1 vence em Área!\n");
                else if (area1 < area2)
                    printf("Carta 2 vence em Área!\n");
                else
                    printf("Empate em Área!\n");
                break;
            case 3:
                if (pib1 > pib2)
                    printf("Carta 1 vence em PIB!\n");
                else if (pib1 < pib2)
                    printf("Carta 2 vence em PIB!\n");
                else
                    printf("Empate em PIB!\n");
                break;
            case 4:
                if (pontos1 > pontos2)
                    printf("Carta 1 vence em Pontos Turísticos!\n");
                else if (pontos1 < pontos2)
                    printf("Carta 2 vence em Pontos Turísticos!\n");
                else
                    printf("Empate em Pontos Turísticos!\n");
                break;
            case 5:
                if (densidade1 < densidade2)
                    printf("Carta 1 vence em Densidade Populacional!\n");
                else if (densidade1 > densidade2)
                    printf("Carta 2 vence em Densidade Populacional!\n");
                else
                    printf("Empate em Densidade Populacional!\n");
                break;
            case 6:
                if (pib_per_capita1 > pib_per_capita2)
                    printf("Carta 1 vence em PIB per Capita!\n");
                else if (pib_per_capita1 < pib_per_capita2)
                    printf("Carta 2 vence em PIB per Capita!\n");
                else
                    printf("Empate em PIB per Capita!\n");
                break;
            default:
                printf("Escolha inválida!\n");
        }
    } else {
        printf("Atributos diferentes foram escolhidos. Não é possível comparar diretamente.\n");
        printf("Jogador 1 escolheu atributo %d, Jogador 2 escolheu atributo ! %d\n", escolha1, escolha2);
        printf("Para comparação justa, ambos devem escolher o mesmo atributo.\n");
    }

    return 0;

}
