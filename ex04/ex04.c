#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int vetor[20];
    int novo_vetor[19];
    int numero, encontrado = 0;
    int j = 0;

    printf("Digite 20 n�meros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\n\nDigite um n�mero para verificar se existe no vetor:\n");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            continue;
        }
        novo_vetor[j] = vetor[i];
        j++;
    }

    if (encontrado) {
        printf("\n\nN�mero %d encontrado. Novo vetor sem esse n�mero:\n", numero);
        for (int i = 0; i < 19; i++) {
            printf("%d ", novo_vetor[i]);
        }
    } else {
        printf("\n\nN�mero %d n�o encontrado no vetor.\n", numero);
    }

    return 0;
}
