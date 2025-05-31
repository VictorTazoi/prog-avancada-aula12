#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total = 0;
int parcelas = 0;

void forma1(float valor){
    printf("\nÁ vista, aplicado 10 OFF");
    total = valor * 0.9;
    parcelas = 1;
}

void forma2(float valor){
    printf("\nAté 2x sem juros");
    printf("\nInforme em quantas vezes deseja parcelar:");
    scanf("%d", &parcelas);
    total = valor;
}

void forma3(float valor){
    printf("\nAté 10x com juros 3");
    printf("\nInforme em quantas vezes deseja parcelar:");
    scanf("%d", &parcelas);
    total = valor*1.03;
}

int main()
{
    setlocale(LC_ALL, "");

    float valor_compra = 0;
    printf("\nInforme o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("\n 1) Opção: a vista com 10 OFF de desconto");
    printf("\n 2) Opção: em duas vezes (preço da etiqueta)");

    if(valor_compra > 100){
        printf("\n 3) Opção: de 3 até 10 vezes com 3 OFF de juros ao mês (somente para compras acima de R$ 100,00)");
    }

    int forma_pagamento = 0;
    printf("\n\nInforme a forma de pagamento: ");
    scanf("%d", &forma_pagamento);

    if(forma_pagamento == 1){
        forma1(valor_compra);
    }else if(forma_pagamento == 2){
        forma2(valor_compra);
    }else if(forma_pagamento == 3 && valor_compra > 100){
        forma3(valor_compra);
    }

    printf("\n\nTotal pago: R$%.2f", total);
    printf("\nParcelas: %d\n", parcelas);

    float valor_parcela = total / parcelas;
    for (int i = 0; i < parcelas; i++){
        printf("\nParcela %d: R$%.2f", i+1, valor_parcela);
    }
}
