 #include <stdio.h>

int main() {
    int N;  // Número de casos de teste
    scanf("%d", &N);  // Lê o número de casos de teste

    // Loop para ler cada caso de teste
    for (int i = 0; i < N; i++) {
        double v1, v2, v3;
        
        // Lê os três valores reais
        scanf("%lf %lf %lf", &v1, &v2, &v3);
        
        // Calcula a média ponderada
        double media = (v1 * 2 + v2 * 3 + v3 * 5) / 10.0;
        
        // Imprime o resultado com uma casa decimal
        printf("%.1lf\n", media);
    }

    return 0;
}
