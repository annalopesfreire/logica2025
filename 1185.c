#include <stdio.h>

int main() {
    char O;
    double M[12][12], soma = 0.0;
    int contador = 0;

    // Leitura do caractere da operação
    scanf(" %c", &O);

    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Processa os elementos acima da diagonal secundária (i + j < 11)
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j < 11) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    // Saída conforme operação
    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}
