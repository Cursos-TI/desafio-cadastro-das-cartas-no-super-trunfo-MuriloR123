#include <stdio.h>

int main(){
    char estado[20] = "Acre";
    char codigo[20] = "A01";
    float area = 24.202;
    float populacao = 31288;
    float pib = 356965000;
    int turismo = 8;
    char cidade[20] = "Feijó";
    double densidade1 = populacao / area;
    double percapita1 = pib / populacao;
    printf("Código da Carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Área: %.3f km²\n", area);
    printf("População: %.f mil habitantes\n", populacao);
    printf("PIB (Produto Interno Bruto): R$%.f milhões\n", pib);
    printf("Pontos Turísticos: %.d aproximadamente\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.f reais\n", percapita1);
    char estado2[50] = "Mato Grosso do Sul";
    char codigo1[20] = "B02";
    char cidade1[50] = "Campo Grande";
    float area1 = 8.082;
    double populacao1 = 954.537;
    double pib1 = 34700000000;
    int turismo1 = 17;
    double densidade2 = populacao1 / area1;
    double percapita2 = pib1 / populacao1; 
    printf("\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Estado: \%s\n", estado2);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.3f km²\n", area1);
    printf("População: %.3f mil habitantes\n", populacao1);
    printf("PIB (Produto Interno Bruto): R$%.f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d aproximadamente\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.f reais\n", percapita2);
    printf("\n");
}
