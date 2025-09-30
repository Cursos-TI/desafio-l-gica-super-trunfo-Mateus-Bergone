#include <stdio.h>

int main() {
    printf("CartasSuperTrunfo\n\n");
    //Carta 1
    char Estado[50], Codigo[50], NomedaCidade[50];
    int NumeroDePontosTuristicos;
    float Area, PIB, Densidadepopulacional, PIBpercapita;
    unsigned long int Populacao;
    float soma;

    printf("Carta 1\n\n");

    printf("Qual o estado da cidade?\n");
    scanf("%s", Estado);

    printf("Qual o código da cidade?\n");
    scanf("%s", Codigo);

    printf("Qual o nome da cidade?\n");
    scanf("%s", NomedaCidade);

    printf("Qual a população da cidade?\n");
    scanf("%lu", &Populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &Area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("A densidade populacional da cidade é:\n");
    if (Area != 0) {
        Densidadepopulacional = (float)Populacao / Area;
        printf("%.2f\n", Densidadepopulacional);
    } else {
        Densidadepopulacional = 0;
        printf("Área inválida (zero), densidade populacional definida como 0.\n");
    }

    printf("O PIB per capita da cidade é:\n");
    if (Populacao != 0) {
        PIBpercapita = PIB / (float)Populacao;
        printf("%.2f\n", PIBpercapita);
    } else {
        PIBpercapita = 0;
        printf("População inválida (zero), PIB per capita definido como 0.\n");
    }

    soma = Densidadepopulacional + PIBpercapita + (float)NumeroDePontosTuristicos + Area + PIB + Populacao;
    printf("Super poder: %.2f\n", soma);

    printf("\n");

    //Carta 2
    char Estado2[50], Codigo2[50], NomedaCidade2[50];
    int NumeroDePontosTuristicos2;
    float Area2, PIB2, Densidadepopulacional2, PIBpercapita2;
    unsigned long int Populacao2;
    float soma2;

    printf("Carta 2\n\n");

    printf("Qual o estado da cidade?\n");
    scanf("%s", Estado2);

    printf("Qual o código da cidade?\n");
    scanf("%s", Codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", NomedaCidade2);

    printf("Qual a população da cidade?\n");
    scanf("%lu", &Populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &Area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("A densidade populacional da cidade é:\n");
    if (Area2 != 0) {
        Densidadepopulacional2 = (float)Populacao2 / Area2;
        printf("%.2f\n", Densidadepopulacional2);
    } else {
        Densidadepopulacional2 = 0;
        printf("Área inválida (zero), densidade populacional definida como 0.\n");
    }

    printf("O PIB per capita da cidade é:\n");
    if (Populacao2 != 0) {
        PIBpercapita2 = PIB2 / (float)Populacao2;
        printf("%.2f\n", PIBpercapita2);
    } else {
        PIBpercapita2 = 0;
        printf("População inválida (zero), PIB per capita definido como 0.\n");
    }

    soma2 = (Densidadepopulacional2 + PIBpercapita2 + (float)NumeroDePontosTuristicos2 + Area2 + PIB2 + Populacao2);
    printf("Super poder2: %.2f\n", soma2);

    printf("\n");

    //Comparação de cartas
    
    int escolha;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolha);

    printf("\nComparando %s e %s\n", NomedaCidade, NomedaCidade2);

    switch (escolha) {
        case 1:
        printf("População: %lu x %lu\n", Populacao, Populacao2);
        if (Populacao > Populacao2) {
            printf("%s venceu!\n", NomedaCidade);
        } else if (Populacao < Populacao2) {
            printf("%s venceu!\n", NomedaCidade2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 2:
        printf("Área: %.2f x %.2f\n", Area, Area2);
        if (Area > Area2) {
            printf("%s venceu!\n", NomedaCidade);
        } else if (Area < Area2) {
            printf("%s venceu!\n", NomedaCidade2);
        } else {
            printf("Empate\n");
        }
        break;
        case 3:
        printf("PIB: %.2f x %.2f\n", PIB, PIB2);
        if (PIB > PIB2) {
            printf("%s venceu!\n", NomedaCidade);
        } else if (PIB < PIB2) {
            printf("%s venceu!\n", NomedaCidade2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 4:
        printf("Número de Pontos Turísticos: %d x %d\n", NumeroDePontosTuristicos, NumeroDePontosTuristicos2);
        if (NumeroDePontosTuristicos > NumeroDePontosTuristicos2) {
            printf("%s venceu!\n", NomedaCidade);
        } else if (NumeroDePontosTuristicos < NumeroDePontosTuristicos2) {
            printf("%s venceu!\n", NomedaCidade2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 5:
        printf("Densidade Demográfica: %.2f x %.2f\n", Densidadepopulacional, Densidadepopulacional2);
        if (Densidadepopulacional < Densidadepopulacional2) {
            printf("%s venceu!\n", NomedaCidade);
        } else if (Densidadepopulacional > Densidadepopulacional2) {
            printf("%s venceu!\n", NomedaCidade2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
