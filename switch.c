#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int op;

    printf("ESCOLHA A OPÇÃO\n\n");
    printf("1-????\n");
    printf("2-????\n");
    printf("3-????\n");
    scanf(" %d", &op);


        switch(op)
        {
    case 1:
        printf("????");
    break;
    case 2:
        printf("????");
    break;
    case 3:
        printf("????");
    break;
    default:
        main();
        }

    getchar();
    return 0;
}
