#include <stdio.h>

int is_prime(int num)
{
    int i;

    if(num<2)
        return 0;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int i, num;
    int cnt=0;
    printf("���� �Է� : ");
    scanf("%d", &num);

    for(i=2; i<=num; i++)
    {
        if(is_prime(i))
        {
            printf("%3d", i);
            cnt++;
        }
        if(cnt>5)
        {
            printf("\n");
            cnt=0;
        }
    }

    return 0;
}
