#include <stdio.h>

void saudarUsuario() {
    char nome[100];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Olá, %sSeja bem-vindo(a)!\n", nome);
}

int main() {
    saudarUsuario();
    return 0;
}