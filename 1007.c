#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    // Leitura dos quatro valores inteiros
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    // Cálculo da diferença entre os produtos
    DIFERENCA = (A * B) - (C * D);

    // Impressão do resultado
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
