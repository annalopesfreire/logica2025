#include <stdio.h>

int main() {
    int N, i;
    int a = 0, b = 1, c;

    // Leitura do valor de N
    scanf("%d", &N);

    // Impressão dos N primeiros termos da série de Fibonacci
    for (i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", a);  // Primeiro número
        } else if (i == 1) {
            printf(" %d", b); // Segundo número
        } else {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    printf("\n"); // Quebra de linha final obrigatória
    return 0;
}
