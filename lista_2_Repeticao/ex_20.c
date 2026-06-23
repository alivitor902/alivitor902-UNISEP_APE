#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nMenu\n");
        printf("1 - Dizer Olá\n");
        printf("2 - Dizer Tudo bem?\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Olá\n");
                break;

            case 2:
                printf("Tudo bem?\n");
                break;

            case 3:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
