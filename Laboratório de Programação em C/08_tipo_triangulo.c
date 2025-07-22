#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilátero\n");
    else if (a == b || b == c || a == c)
        printf("Isósceles\n");
    else
        printf("Escaleno\n");
    return 0;
}