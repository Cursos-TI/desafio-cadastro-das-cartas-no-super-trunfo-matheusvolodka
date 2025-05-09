#include <stdio.h>

//**Desafio Super-Trunfo **
//insira os dados das cartas conforme requerido na ordem.

int main() {

    //**VARIÁVEIS CARTA 1**
    char estado;            //Uma letra de A a H que representa um dos oito estados do país
    char codigo[5];         //O código que vai representar a carta, um número de 01 a 04. Letra do estado + número
    char nome_cidade[50];   //Nome da cidade representada na Carta. Atenção: digitar sem espaços
    int populacao;          //Numero que representa a população da cidade. Valor inteiro
    float area;             //Numero que representa a area em km2 da cidade. Pode ser um número quebrado
    float pib;              //Valor do PIB da cidade
    int pontos_turisticos;  //Número de pontos turisticos do local


    //**VARIÁVEIS CARTA 2**
    char estado2;
    char codigo2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;              
    int pontos_turisticos2;  

    //Código do Estado
    printf("Vamos preparar sua primeira carta\nDigite uma letra de 'A' a 'H' que representará seu Estado:\n");
    scanf(" %c", &estado);
    printf("Carta 1: \nEstado: %c\n", estado);

    //Letra do código do Estado
    printf("Digite agora, incluindo a letra do estado,  um número de 01 a 04 que represente sua cidade: ");
    scanf("%s", codigo);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\n", estado, codigo);

    //Nome da Cidade
    printf("Agora diga o nome da sua cidade: \n");
    scanf("%s", nome_cidade);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\n", estado, codigo, nome_cidade);

    //População da cidade
    printf("Agora diga qual o número da População desta cidade: ");
    scanf("%d", &populacao);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n", estado, codigo, nome_cidade, populacao);

    //Área da cidade
    printf("Diga a área em kilometros quadrados da sua cidade:");
    scanf("%f", &area);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\n", estado, codigo, nome_cidade, populacao, area);

    //PIB da cidade
    printf("Informe agora o PIB da sua cidade (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\n", estado, codigo, nome_cidade, populacao, pib);

    //Número de pontos turísticos
    printf("Diga quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &pontos_turisticos);
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\nPontos Turísticos: %d\n", estado, codigo, nome_cidade, populacao, pib, pontos_turisticos);

    printf("Sua primeira carta foi registrada com sucesso! Vamos agora para a segunda carta:\n");

    //CARTA 2

    //Código do Estado
    printf("Digite uma letra de 'A' a 'H' que representará seu Estado:\n");
    scanf(" %c", &estado2);
    printf("Carta 2: \nEstado: %c\n", estado2);

    //Letra do código do Estado
    printf("Digite agora, incluindo a letra do estado, um número de 01 a 04 que represente sua cidade: ");
    scanf("%s", codigo2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\n", estado2, codigo2);

    //Nome da Cidade
    printf("Agora diga o nome da sua cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nome_cidade2);

    //População da cidade
    printf("Agora diga qual o número da População desta cidade: ");
    scanf("%d", &populacao2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n", estado2, codigo2, nome_cidade2, populacao2);

    //Área da cidade
    printf("Diga a área em kilometros quadrados da sua cidade:");
    scanf("%f", &area2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\n", estado2, codigo2, nome_cidade2, populacao2, area2);

    //PIB da cidade
    printf("Informe agora o PIB da sua cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\n", estado2, codigo2, nome_cidade2, populacao2, pib2);

    //Número de pontos turísticos
    printf("Diga quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\nPontos Turísticos: %d\n", estado2, codigo2, nome_cidade2, populacao2, pib2, pontos_turisticos2);

    printf("Sua segunda carta foi registrada com sucesso!\n");

    //CARTAS REGISTRADAS:
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\nPontos Turísticos: %d\n", estado, codigo, nome_cidade, populacao, pib, pontos_turisticos);
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nPIB: R$%.2f bilhões\nPontos Turísticos: %d\n", estado2, codigo2, nome_cidade2, populacao2, pib2, pontos_turisticos2);
    
    return 0;
}
