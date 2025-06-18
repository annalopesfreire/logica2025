#include <stdio.h>

int valido(int m[9][9]) {
    int i, j, x, y, v[10];

    // Verifica linhas e colunas
    for (i = 0; i < 9; i++) {
        for (j = 1; j <= 9; j++) v[j] = 0;
        for (j = 0; j < 9; j++) v[m[i][j]] = 1;
        for (j = 1; j <= 9; j++) if (!v[j]) return 0;

        for (j = 1; j <= 9; j++) v[j] = 0;
        for (j = 0; j < 9; j++) v[m[j][i]] = 1;
        for (j = 1; j <= 9; j++) if (!v[j]) return 0;
    }

    // Verifica submatrizes 3x3
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (x = 1; x <= 9; x++) v[x] = 0;
            for (x = i; x < i + 3; x++) {
                for (y = j; y < j + 3; y++) {
                    v[m[x][y]] = 1;
                }
            }
            for (x = 1; x <= 9; x++) if (!v[x]) return 0;
        }
    }

    return 1;
}

int main() {
    int n, k, m[9][9];
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &m[i][j]);

        printf("Instancia %d\n", k);
        if (valido(m))
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }
    return 0;
}
