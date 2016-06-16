#include <stdio.h>
int main(void)
{
    int num1, num2;
    char c;
    int res;

    printf("사칙 연산 입력(정수) : ");
    scanf("%d%c%d",&num1,&c,&num2);

    switch(c)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        ;
    }

    printf("%d%c%d=%d",num1,c,num2,res);
    return 0;
}
