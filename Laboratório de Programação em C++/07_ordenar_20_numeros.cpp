#include <stdio.h>

int main() {
    int numeros[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}