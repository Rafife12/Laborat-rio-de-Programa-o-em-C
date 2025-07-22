#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int palpite, numero;
    srand(time(NULL));
    numero = rand() % 10 + 1;
    do {
        printf("Adivinhe o número entre 1 e 10: ");
        scanf("%d", &palpite);
        if (palpite != numero) {
            printf("Tente novamente!\n");
        }
    } while (palpite != numero);
    printf("Parabéns! Você acertou!\n");
    return 0;
}