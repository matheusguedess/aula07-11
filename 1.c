/*Aula sobre la�o de repeti��o
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
    printf("2-SUBTRA��O\n");
    printf("3-MULTIPLICA��O\n");
    printf("4-DIVIS�O\n");
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
        printf("SUBTRA��O\n\n");
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
        printf("MULTIPLICA��O\n\n");
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
        printf("DIVIS�O\n\n");
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
