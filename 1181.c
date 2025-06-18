#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12], soma = 0.0;

    // Lê a linha e o tipo de operação
    scanf("%d", &L);
    scanf(" %c", &T); // espaço antes de %c para ignorar caractere de nova linha

    // Lê a matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Soma os elementos da linha L
    for (int j = 0; j < 12; j++) {
        soma += M[L][j];
    }

    // Imprime o resultado conforme o tipo de operação
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
