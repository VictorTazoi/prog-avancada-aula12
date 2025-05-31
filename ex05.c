#include <stdio.h>
#include <locale.h>

void preencherMatriz(int A[5][5]) {
    int i;
    int j;
    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void somaLinhas(int A[5][5], int vetorSomas[5]) {
    int i;
    int j;
    for (i = 0; i < 5; i++) {
        vetorSomas[i] = 0;
        for (j = 0; j < 5; j++) {
            vetorSomas[i] += A[i][j];
        }
    }
}

void imprimirVetor(int vetor[5]) {
    int i;
    printf("Soma de cada linha:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i, vetor[i]);
    }
}

int main() {
    setlocale(LC_ALL, "");

    int A[5][5];
    int vetorSomas[5];

    preencherMatriz(A);

    somaLinhas(A, vetorSomas);

    imprimirVetor(vetorSomas);

    return 0;
}
