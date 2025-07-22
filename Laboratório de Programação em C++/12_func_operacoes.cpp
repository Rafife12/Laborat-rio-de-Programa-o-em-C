#include <stdio.h>

void operacoesMatematicas(float a, float b) {
    printf("Soma: %.2f\n", a + b);
    printf("Subtração: %.2f\n", a - b);
    printf("Multiplicação: %.2f\n", a * b);
    if (b != 0)
        printf("Divisão: %.2f\n", a / b);
    else
        printf("Erro: Divisão por zero!\n");
}

int main() {
    float x, y;
    scanf("%f %f", &x, &y);
    operacoesMatematicas(x, y);
    return 0;
}