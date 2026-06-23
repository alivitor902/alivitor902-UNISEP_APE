#include <stdio.h>
#include <string.h>

int main() {
    char user[20], senha[20];

    scanf("%s %s", user, senha);

    if (strcmp(user, "admin") == 0 && strcmp(senha, "1234") == 0)
        printf("Login bem-sucedido");
    else
        printf("Login incorreto");

    return 0;
}