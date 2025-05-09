#include <stdio.h>
#include <string.h>

// Função para dividir um número muito grande (como string) por 2
// Resultado da divisão fica em 'quotient' e o resto (0 ou 1) é retornado
int divide_by_2(char* number, char* quotient) {
    int len = strlen(number);
    int carry = 0, digit, i, q_index = 0;
    
    for (i = 0; i < len; i++) {
        digit = carry * 10 + (number[i] - '0');
        quotient[q_index++] = (digit / 2) + '0';
        carry = digit % 2;
    }

    // Remove zeros à esquerda no quociente
    quotient[q_index] = '\0';
    i = 0;
    while (quotient[i] == '0' && quotient[i + 1] != '\0') i++;
    memmove(quotient, quotient + i, strlen(quotient) - i + 1);

    return carry;
}

// Conta os bits 1 na representação binária de um número grande como string
int count_ones(char* number) {
    int count = 0;
    char temp[1100];
    strcpy(temp, number);

    char quotient[1100];

    while (!(strlen(temp) == 1 && temp[0] == '0')) {
        int bit = divide_by_2(temp, quotient);
        if (bit == 1)
            count++;
        strcpy(temp, quotient);
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    char number[1100];

    for (int i = 0; i < T; i++) {
        scanf("%s", number);
        printf("%d\n", count_ones(number));
    }

    return 0;
}
