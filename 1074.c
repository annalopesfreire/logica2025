#include <stdio.h>

int main() {
    int N, X;

    // Leitura da quantidade de casos
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        // Leitura de cada número
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else {
            // Verifica paridade
            if (X % 2 == 0)
                printf("EVEN ");
            else
                printf("ODD ");

            // Verifica sinal
            if (X > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }

    return 0;
}
