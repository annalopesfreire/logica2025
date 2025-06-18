#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    int X[N];

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

   
    int menor_valor = X[0];
    int posicao_menor = 0;

    
    for (int i = 1; i < N; i++) {
        if (X[i] < menor_valor) {
            menor_valor = X[i];
            posicao_menor = i;
        }
    }

    
    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao_menor);

    return 0;
}
