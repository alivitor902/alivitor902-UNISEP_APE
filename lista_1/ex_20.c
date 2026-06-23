#include <stdio.h>

int main() {
    int vel;

    scanf("%d", &vel);

    if (vel <= 60) printf("Sem multa");
    else if (vel <= 80) printf("Leve");
    else if (vel <= 100) printf("Grave");
    else printf("Gravissima");

    return 0;
}