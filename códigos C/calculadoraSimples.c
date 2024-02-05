#include <stdio.h>

int main() {
    
    float num1, num2, result;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    result = num1 + num2;
    printf("Soma: %.2f\n", result);

    result = num1 - num2;
    printf("Subtração: %.2f\n", result);

    result = num1 * num2;
    printf("Multiplicação: %.2f\n", result);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Divisão: %.2f\n", result);
    } else {
        printf("Não é permitido dividir por 0.\n");
    }

    return 0;
}