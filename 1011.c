#include <stdio.h>

int main() {
    double R, VOLUME;
    const double PI = 3.14159;

    // Leitura do valor do raio
    scanf("%lf", &R);

    // Cálculo do volume da esfera
    VOLUME = (4.0/3) * PI * R * R * R;

    // Impressão do volume com 3 casas decimais
    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
