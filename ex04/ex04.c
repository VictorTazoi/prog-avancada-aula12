#include <stdio.h>
#include <locale.h>

void ler_vetor(int vetor[], int tamanho, int num_vetor) {
    printf("Digite %d números para o vetor %d:\n", tamanho, num_vetor);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int esta_no_vetor(int valor, int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

int encontrar_intersecao(int v1[], int t1, int v2[], int t2, int resultado[]) {
    int k = 0;
    for (int i = 0; i < t1; i++) {
        if (esta_no_vetor(v1[i], v2, t2) && !esta_no_vetor(v1[i], resultado, k)) {
            resultado[k] = v1[i];
            k++;
        }
    }
    return k;
}

void imprimir_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "");

    int vetor1[20], vetor2[20], intersecao[20];
    int tamanho1, tamanho2, tamanho_intersecao;

    printf("Quantos números no primeiro vetor (máx 20)? ");
    scanf("%d", &tamanho1);
    ler_vetor(vetor1, tamanho1, 1);

    printf("Quantos números no segundo vetor (máx 20)? ");
    scanf("%d", &tamanho2);
    ler_vetor(vetor2, tamanho2, 2);

    tamanho_intersecao = encontrar_intersecao(vetor1, tamanho1, vetor2, tamanho2, intersecao);

    printf("\nNúmeros em comum (interseção):\n");
    if (tamanho_intersecao == 0) {
        printf("Nenhum número em comum.\n");
    } else {
        imprimir_vetor(intersecao, tamanho_intersecao);
    }

    return 0;
}
