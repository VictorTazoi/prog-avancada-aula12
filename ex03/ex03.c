#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int vetor[20];
    int novoVetor[20];
    int numero, i, j = 0;
    int encontrado = 0;

    printf("Digite 20 n�meros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um n�mero para verificar:\n");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++) {
        if (vetor[i] != numero) {
            novoVetor[j++] = vetor[i];
        } else {
            encontrado = 1;
        }
    }

    if (encontrado) {
        printf("Novo vetor sem o n�mero %d:\n", numero);
        for (i = 0; i < j; i++) {
            printf("%d ", novoVetor[i]);
        }
        printf("\n");
    } else {
        printf("O n�mero %d n�o existe no vetor.\n", numero);
    }

    return 0;
}
