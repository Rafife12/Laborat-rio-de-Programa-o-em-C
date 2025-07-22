#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    scanf("%d", &numero);
    if (numero < 0)
        printf("Fatorial não definido.\n");
    else
        printf("Fatorial: %d\n", fatorial(numero));
    return 0;
}