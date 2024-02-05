#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d é um numero par.\n", num);
    } else {
        printf("%d é um numero impar.\n", num);
    }

    return 0;
}
