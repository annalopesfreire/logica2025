#include <stdio.h>

int main() {
    int N;
    int fatorial = 1;

    // Lê o valor de N
    scanf("%d", &N);

    // Calcula o fatorial de N
    for (int i = 1; i <= N; i++) {
        fatorial *= i;  // Multiplica o valor de fatorial por i
    }

    // Imprime o fatorial de N
    printf("%d\n", fatorial);;
    
    return 0;
}
