 #include <stdio.h>

int main() {
    int valor;

    // Lê o valor inteiro
    scanf("%d", &valor);

    // Exibe o valor lido
    printf("%d\n", valor);

    // Array com os valores das cédulas
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    // Para cada cédula, calcula quantas notas são necessárias
    for (int i = 0; i < 7; i++) {
        int quantidade = valor / cedulas[i]; // Calcula a quantidade de notas dessa cédula
        printf("%d nota(s) de R$ %d,00\n", quantidade, cedulas[i]);
        valor = valor % cedulas[i]; // Atualiza o valor com o resto
    }

  
    return 0;
}
