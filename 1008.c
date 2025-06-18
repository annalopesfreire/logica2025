#include <stdio.h>

int main() {
    int numero, horas;
    double valorHora, salario;

    // Leitura dos dados: número do funcionário, horas trabalhadas e valor por hora
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valorHora);

    // Cálculo do salário
    salario = horas * valorHora;

    // Impressão dos resultados com o formato exigido
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
