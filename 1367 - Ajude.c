#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int N;
    
    while (scanf("%d", &N), N != 0) {
        int tempo_total = 0;
        int resolvidos = 0;
        
        // Cada problema pode ir de A a Z (26 possibilidades)
        int penalidade[26] = {0};
        int resolvido[26] = {0};

        for (int i = 0; i < N; i++) {
            char problema;
            int tempo;
            char status[10];
            
            scanf(" %c %d %s", &problema, &tempo, status);
            int index = problema - 'A';

            if (strcmp(status, "correct") == 0) {
                if (!resolvido[index]) {
                    resolvidos++;
                    tempo_total += tempo + penalidade[index];
                    resolvido[index] = 1;
                }
            } else if (strcmp(status, "incorrect") == 0) {
                if (!resolvido[index]) {
                    penalidade[index] += 20;
                }
            }
        }

        printf("%d %d\n", resolvidos, tempo_total);
    }

    return 0;
}
