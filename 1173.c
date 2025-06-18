#include <stdio.h>

int main() {
    int N[10]; // vetor com 10 posições
    int V;

    scanf("%d", &V); // lê o valor inicial
    N[0] = V;

    for (int i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2; // cada posição recebe o dobro da anterior
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]); // imprime o vetor
    }

    return 0;
}
