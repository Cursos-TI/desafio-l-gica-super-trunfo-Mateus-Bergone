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
    scanf("%49s", Estado);

    printf("Qual o código da cidade?\n");
    scanf("%49s", Codigo);

    printf("Qual o nome da cidade?\n");
    scanf("%49s", NomedaCidade);

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
    scanf("%49s", Estado2);

    printf("Qual o código da cidade?\n");
    scanf("%49s", Codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%49s", NomedaCidade2);

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
    if (Populacao > Populacao2) {
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }

    if (Area > Area2) {
        printf("Área: Carta 1 venceu!\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }

    if (PIB > PIB2) {
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    if (NumeroDePontosTuristicos > NumeroDePontosTuristicos2) {
        printf("Número de Pontos Turísticos: Carta 1 venceu!\n");
    } else {
        printf("Número de Pontos Turísticos: Carta 2 venceu!\n");
    }

    if (Densidadepopulacional < Densidadepopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    if (PIBpercapita > PIBpercapita2) {
        printf("PIB per capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per capita: Carta 2 venceu!\n");
    }

    if (soma > soma2) {
        printf("Super poder: Carta 1 venceu!\n");
    } else {
        printf("Super poder: Carta 2 venceu!\n");
    }

    printf("\n");

    return 0;
}
