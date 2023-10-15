#include <stdio.h>
#include <unistd.h>
#include "opera.h"

int main() {
    int a, b;
    int opcao;
    char barras[4] = {'|', '/', '-', '\\'};
    char continuar;

    while (continuar == 'S' || continuar == 's') {
        for (int i = 0; i < 50; i++) {
            printf("%c\r", barras[i % 4]);
            fflush(stdout);
            usleep(100000);
        }
        printf("Concluído\n");
        printf("Bem Vindo à calculadora, o que desejas fazer?\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Divisão\n");
        printf("4. Multiplicação\n");
        printf("5. Raiz Quadrada\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite 2 números\n");
                scanf("%d %d", &a, &b);
                int soma = som(a, b);
                printf("%d\n", soma);
                break;
            case 2:
                printf("Digite 2 números\n");
                scanf("%d %d", &a, &b);
                int subt = sub(a, b);
                printf("%d\n", subt);
                break;
            case 3:
                printf("Digite 2 números\n");
                scanf("%d %d", &a, &b);
                double div = divisao(a, b);
                printf("%lf\n", div);
                break;
            case 4:
                printf("Digite 2 números\n");
                scanf("%d %d", &a, &b);
                int multp = mult(a, b);
                printf("%d\n", multp);
                break;
            case 5:
                printf("Digite 1 número\n");
                scanf("%d", &a);
                int raizx = raiz(a);
                printf("%d\n", raizx);
                break;
        }

        printf("Continuar? (S ou N)\n");
        scanf(" %c", &continuar);
    }

    return 0;
              }
