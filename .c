#include <stdio.h>

int main() {
    float valorDola, valorReal, taxaImportacao;

    printf("Qual o valor do produto em dolar? ");
    scanf("%f", &valorDola);

    valorReal = valorDola * 4.95;
    taxaImportacao = valorReal * 0.4;
    

    printf("Preço de venda no país com taxa de inportação $%.2f\n", taxaImportacao);
   
    return 0;
}