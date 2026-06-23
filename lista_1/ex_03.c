#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) printf("Maior: %d", a);
    else if (b > a) printf("Maior: %d", b);
    else printf("Iguais");

    return 0;
}