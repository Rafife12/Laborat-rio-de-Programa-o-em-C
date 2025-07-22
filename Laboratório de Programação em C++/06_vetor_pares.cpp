#include <stdio.h>

int main() {
    int pares[25];
    int index = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            pares[index++] = i;
        }
    }
    for (int i = 0; i < 25; i++) {
        printf("%d ", pares[i]);
    }
    return 0;
}