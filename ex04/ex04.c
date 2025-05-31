#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int vetor[20];
    int novo_vetor[19];
    int numero, encontrado = 0;
    int j = 0;

    printf("Digite 20 números:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\n\nDigite um número para verificar se existe no vetor:\n");
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
        printf("\n\nNúmero %d encontrado. Novo vetor sem esse número:\n", numero);
        for (int i = 0; i < 19; i++) {
            printf("%d ", novo_vetor[i]);
        }
    } else {
        printf("\n\nNúmero %d não encontrado no vetor.\n", numero);
    }

    return 0;
}
