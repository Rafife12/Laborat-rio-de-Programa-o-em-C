#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    scanf("%f %f", &peso, &altura);
    printf("IMC: %.2f\n", calcularIMC(peso, altura));
    return 0;
}