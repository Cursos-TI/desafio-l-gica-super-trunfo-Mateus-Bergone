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
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    printf("Escolha o Primeiro atributo para comparar: \n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("B - PIB\n");
    printf("T - Número de Pontos Turísticos\n");
    printf("D - Densidade Populacional\n");

    printf("Escolha o primeiro atributo para comparar: \n");
    scanf(" %c", &primeiroAtributo);

        switch (primeiroAtributo) {
            case 'P':
            case 'p':
                resultado1 = Populacao > Populacao2 ? 1 : 0;
                break;

            case 'A':
            case 'a':
                resultado1 = Area > Area2 ? 1 : 0;
                break;

            case 'B':
            case 'b':
                resultado1 = PIB > PIB2 ? 1 : 0;
                break;

            case 'T':
            case 't':
                resultado1 = NumeroDePontosTuristicos > NumeroDePontosTuristicos2 ? 1 : 0;
                break;

            case 'D':
            case 'd':
                resultado1 = Densidadepopulacional < Densidadepopulacional2 ? 1 : 0;
                break;
            
            default:
                printf("Opção inválida. Por favor, escolha um atributo válido.\n");
            break;
        }
    
    printf("\nEscolha o Segundo atributo para comparar: \n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("B - PIB\n");
    printf("T - Número de Pontos Turísticos\n");
    printf("D - Densidade Populacional\n");

    printf("Escolha o segundo atributo para comparar: \n");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo para comparar. Escolha atributos diferentes.\n\n");
    } else {
        switch (segundoAtributo) {
            case 'P':
            case 'p':
                resultado2 = Populacao > Populacao2 ? 1 : 0;
                break;
            case 'A':
            case 'a':
                resultado2 = Area > Area2 ? 1 : 0;
                break;
            case 'B':
            case 'b':
                resultado2 = PIB > PIB2 ? 1 : 0;
                break;
            case 'T':
            case 't':
                resultado2 = NumeroDePontosTuristicos > NumeroDePontosTuristicos2 ? 1 : 0;
                break;
            case 'D':
            case 'd':
                resultado2 = Densidadepopulacional < Densidadepopulacional2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida. Por favor, escolha um atributo válido.\n");
            break;
        }

        printf("\n**** Dados das Comparações ****\n");
        // Primeiro atributo
        switch (primeiroAtributo) {
            case 'P': 
            case 'p':
                printf("População: %lu (%s) x %lu (%s)\n", Populacao, NomedaCidade, Populacao2, NomedaCidade2); 
                break;
            case 'A': 
            case 'a':
                printf("Área: %.2f (%s) x %.2f (%s)\n", Area, NomedaCidade, Area2, NomedaCidade2); 
                break;
            case 'B': 
            case 'b':
                printf("PIB: %.2f (%s) x %.2f (%s)\n", PIB, NomedaCidade, PIB2, NomedaCidade2); 
                break;
            case 'T': 
            case 't':
                printf("Pontos Turísticos: %d (%s) x %d (%s)\n", NumeroDePontosTuristicos, NomedaCidade, NumeroDePontosTuristicos2, NomedaCidade2); 
                break;
            case 'D': 
            case 'd':
                printf("Densidade Populacional: %.2f (%s) x %.2f (%s)\n", Densidadepopulacional, NomedaCidade, Densidadepopulacional2, NomedaCidade2); 
                break;
        }
        // Segundo atributo
        switch (segundoAtributo) {
            case 'P': 
            case 'p':
                printf("População: %lu (%s) x %lu (%s)\n", Populacao, NomedaCidade, Populacao2, NomedaCidade2); 
                break;
            case 'A': 
            case 'a':
                printf("Área: %.2f (%s) x %.2f (%s)\n", Area, NomedaCidade, Area2, NomedaCidade2); 
                break;
            case 'B': 
            case 'b':
                printf("PIB: %.2f (%s) x %.2f (%s)\n", PIB, NomedaCidade, PIB2, NomedaCidade2); 
                break;
            case 'T': 
            case 't':
                printf("Pontos Turísticos: %d (%s) x %d (%s)\n", NumeroDePontosTuristicos, NomedaCidade, NumeroDePontosTuristicos2, NomedaCidade2); 
                break;
            case 'D': 
            case 'd':
                printf("Densidade Populacional: %.2f (%s) x %.2f (%s)\n", Densidadepopulacional, NomedaCidade, Densidadepopulacional2, NomedaCidade2); 
                break;
        }
        printf("-----------------------------\n");

        if (resultado1 && resultado2) {
            printf("Carta 1 vence!\n");
        } else if (resultado1 != resultado2) {
            printf("Empate!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }
    }
}