#include <stdio.h>

int main() {
    char O;
    double M[12][12], soma = 0.0;
    int contador = 0;

    // Lê o tipo de operação
    scanf(" %c", &O);

    // Lê a matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Soma os elementos acima da diagonal principal (j > i)
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += M[i][j];
            contador++;
        }
    }

    // Realiza a operação conforme o caractere O
    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}
