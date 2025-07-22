#include <stdio.h>

int main() {
    int numero, binario[32], i = 0;
    scanf("%d", &numero);
    if (numero == 0) {
        printf("0\n");
        return 0;
    }
    while (numero > 0) {
        binario[i++] = numero % 2;
        numero /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    return 0;
}