#include <stdio.h>
#include <string.h>

int main() {
    char senhaDigitada[50];
    char senhaCorreta[] = "1234";

    do {
        printf("Digite a senha: ");
        scanf("%49s", senhaDigitada);

        if (strcmp(senhaDigitada, senhaCorreta) != 0) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (strcmp(senhaDigitada, senhaCorreta) != 0);

    printf("Senha correta. Acesso liberado.\n");

    return 0;
}
