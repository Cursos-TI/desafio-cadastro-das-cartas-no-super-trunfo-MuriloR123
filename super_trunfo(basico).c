#include <stdio.h>

int main(){
    char estado[20] = "Acre";
    char codigo[20] = "A01";
    float area = 24.202;
    float populacao = 31.288;
    float  pib = 15.173;
    int turismo = 8;
    char cidade[20] = "Feijó";
    printf("Código da Carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Área: %.3f km²\n", area);
    printf("População: %.3f mil habitantes\n", populacao);
    printf("PIB (Produto Interno Bruto): R$%.3f mil\n", pib);
    printf("Pontos Turísticos: %d aproximadamente\n", turismo);
    char estado2[50] = "Mato Grosso do Sul";
    char codigo1[20] = "B02";
    char cidade1[50] = "Campo Grande";
    float area1 = 8.082;
    double populacao1 = 954.537;
    float pib1 = 34.7;
    int turismo1 = 17;
    printf("\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Estado: \%s\n", estado2);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.3f km²\n", area1);
    printf("População: %.3f mil habitantes\n", populacao1);
    printf("PIB (Produto Interno Bruto): R$%.1f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d aproximadamente\n", turismo1);
}
