#include <stdio.h>

float areaQuadrado(float lado) {
    return lado * lado;
}

int main() {
    float lado;
    scanf("%f", &lado);
    printf("Área: %.2f\n", areaQuadrado(lado));
    return 0;
}