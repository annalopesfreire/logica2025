#include <stdio.h>

int main() {
    double A, B, MEDIA;

    // Leitura das notas com uma casa decimal
    scanf("%lf", &A);
    scanf("%lf", &B);

    // Cálculo da média ponderada
    MEDIA = (A * 3.5 + B * 7.5) / 11.0;

    // Impressão do resultado com 5 casas decimais
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
