#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char estado;
    char codigo[15];
    char cidade[17];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Dados Carta 1: \n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &turistico);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);


    printf("Dados Carta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &turistico);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);




    return 0;
}
