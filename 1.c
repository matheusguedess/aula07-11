/*Aula sobre laço de repetição
Aluno: Matheus Guedes
RA: 1800586981
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    int  op2;
    do{
    system ("cls");
    setlocale(LC_ALL, "");
    int op, n1, n2;
    float r;

    printf("\tCALCULADORA\n\n");
    printf("1-SOMA\n");
    printf("2-SUBTRAÇÃO\n");
    printf("3-MULTIPLICAÇÃO\n");
    printf("4-DIVISÃO\n");
    scanf(" %d", &op);


        switch(op)
        {
    case 1:
        system("cls");
        printf("SOMA\n\n");
        printf("Digite o primeiro digito:\n");
        scanf(" %d", &n1);
        printf("Digite o segundo digito:\n");
        scanf(" %d", &n2);
        r=n1+n2;
        printf("%d+%d=%.f", n1, n2, r);
        printf("\ndigite 1 para voltar ao menu\n");
        scanf("%d", &op2);
    break;
    case 2:
        system("cls");
        printf("SUBTRAÇÃO\n\n");
        printf("Digite o primeiro digito:\n");
        scanf(" %d", &n1);
        printf("Digite o segundo digito:\n");
        scanf(" %d", &n2);
        r=n1-n2;
        printf("%d-%d=%.f", n1, n2, r);
        printf("\ndigite 1 para voltar ao menu\n");
        scanf("%d", &op2);
    break;
    case 3:
        system("cls");
        printf("MULTIPLICAÇÃO\n\n");
        printf("Digite o primeiro digito:\n");
        scanf(" %d", &n1);
        printf("Digite o segundo digito:\n");
        scanf(" %d", &n2);
        r=n1*n2;
        printf("%d*%d=%.1f", n1, n2, r);
        printf("\ndigite 1 para voltar ao menu\n");
        scanf("%d", &op2);
    break;
        case 4:
        system("cls");
        printf("DIVISÃO\n\n");
        printf("Digite o primeiro digito:\n");
        scanf(" %d", &n1);
        printf("Digite o segundo digito:\n");
        scanf(" %d", &n2);
        r=n1/n2;
        printf("%d/%d=%.2f", n1, n2, r);
        printf("\ndigite 1 para voltar ao menu\n");
        scanf("%d", &op2);
    break;
    default:
        main();
        }
    }while(op2==1);

    getch();

    return 0;
}
