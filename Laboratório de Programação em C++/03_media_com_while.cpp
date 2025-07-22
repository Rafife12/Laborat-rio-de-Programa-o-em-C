#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    printf("Digite números (0 para encerrar):\n");
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) break;
        soma += numero;
        contador++;
    }
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("Média: %.2f\n", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }
    return 0;
}