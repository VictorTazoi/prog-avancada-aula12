#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

typedef struct {
    Ponto sup_esq;
    Ponto inf_dir;
} Retangulo;

double distancia(Ponto p1, Ponto p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

Ponto maisProximoOrigem(Ponto p1, Ponto p2) {
    Ponto origem = {0.0, 0.0};
    return (distancia(p1, origem) < distancia(p2, origem)) ? p1 : p2;
}

int estaContido(Ponto p, Retangulo r) {
    return (p.x >= r.sup_esq.x && p.x <= r.inf_dir.x &&
            p.y <= r.sup_esq.y && p.y >= r.inf_dir.y);
}

int main() {
    setlocale(LC_ALL,"");

    Ponto p1, p2;
    Retangulo r;

    printf("\nEntre com as coordenadas x e y do primeiro ponto: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("\nEntre com as coordenadas x e y do segundo ponto: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    printf("\nEntre com as coordenadas x e y do ponto da superior esquerda do retângulo: ");
    scanf("%lf %lf", &r.sup_esq.x, &r.sup_esq.y);

    printf("\nEntre com as coordenadas x e y do ponto da inferior direita do retângulo: ");
    scanf("%lf %lf", &r.inf_dir.x, &r.inf_dir.y);

    double d = distancia(p1, p2);
    printf("\nDistância entre os dois pontos: %f\n", d);

    Ponto mais_proximo = maisProximoOrigem(p1, p2);
    printf("Ponto mais próximo à origem: (%f, %f)\n", mais_proximo.x, mais_proximo.y);

    if (estaContido(p1, r)) {
        printf("O ponto (%f, %f) está contido no retangulo!\n", p1.x, p1.y);
    } else {
        printf("O ponto (%f, %f) não está contido no retângulo!\n", p1.x, p1.y);
    }

    if (estaContido(p2, r)) {
        printf("O ponto (%f, %f) está contido no retangulo!\n", p2.x, p2.y);
    } else {
        printf("O ponto (%f, %f) não está contido no retângulo!\n", p2.x, p2.y);
    }

    return 0;
}
