#include <stdio.h>
#include <locale.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

void preencherVetorB(int A[], int B[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        B[i] = fatorial(A[i]);
    }
}

int main() {
    setlocale(LC_ALL,"");

    int A[10];
    int B[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número para o vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }

    preencherVetorB(A, B, 10);

    printf("\nVetor A: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }

    printf("\nVetor B (fatoriais de A): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
