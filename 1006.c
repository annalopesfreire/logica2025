#include <stdio.h>

int main() {
    double A, B, C, MEDIA;

    // Leitura das três notas
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // Cálculo da média ponderada
    MEDIA = (A * 2 + B * 3 + C * 5) / 10.0;

    // Impressão da média com 1 casa decimal
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
