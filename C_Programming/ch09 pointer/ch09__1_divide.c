#include <stdio.h>

void func(int*, int*);
int main(void)
{
    int mod, rem;
    func(&mod, &rem);
    printf("��: %d, ������: %d",mod,rem);

    return 0;
}

void func(int *mod, int *rem)
{
    int num;
    printf("��� �Է� : ");
    scanf("%d", &num);

    *mod = num/4;
    *rem = num%4;
}

