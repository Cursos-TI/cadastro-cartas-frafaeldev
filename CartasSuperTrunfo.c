#include <stdio.h>

int main(){

    // Carta 1
    char estado1;
    char cod_carta1[4];
    char nome_cid1[50];
    int populacao1;
    float area1;
    float pib1;
    int p_turistico1;

        // Carta 2
    char estado2;
    char cod_carta2[4];
    char nome_cid2[50];
    int populacao2;
    float area2;
    float pib2;
    int p_turistico2;

    // --- ENTRADA CARTA 1 ---

    printf("--- Cadastro carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %s", &estado1); // Corrigido para %c com espaço antes

    printf("Código: ");
    scanf("%s", cod_carta1); // Sem o & pois é array

    printf("Nome da Cidade: ");
    scanf("%s", &nome_cid1);    //scanf(" %[^\n]", nome_cid1); Lê nomes com espaço (ex: São Paulo)

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (Km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &p_turistico1);

    printf("\n");

    // --- ENTRADA CARTA 2 ---

    printf("--- Cadastro carta 2 ----\n");
    printf("Estado (A-H) ");
    scanf(" %s", &estado2);

    printf("Código: ");
    scanf("%s", cod_carta2);

    printf("Nome da Cidade: ");
    scanf("%s", &nome_cid2);

    printf("Pupulação: ");
    scanf("%d", &populacao2);

    printf("Área (Km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &p_turistico2);

    
}