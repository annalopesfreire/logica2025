#include <stdio.h>

int main() {
    int C;
    char T;
    double M[12][12], soma = 0.0;

    // Lê a coluna e o tipo de operação
    scanf("%d", &C);
    scanf(" %c", &T); // espaço antes de %c para consumir o \n anterior

    // Lê a matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Soma os elementos da coluna C
    for (int i = 0; i < 12; i++) {
        soma += M[i][C];
    }

    // Se operação for soma
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } 
    // Se operação for média
    else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
