#include <stdio.h>

int main() {
    float n1, n2, n3;
    float p1, p2, p3;
    float ponderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite o peso da terceira nota: ");
    scanf("%f", &p3);

    ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A media ponderada das notas eh: %.2f\n", ponderada);

    return 0;
}
