#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int n, res;
    printf("숫자 입력 : ");
    scanf("%d", &n);

    res = rec_func(n);
    printf("%d\n", res);

    return 0;
}

int rec_func(int n)
{
    int result=0;

    if(n==0)
        return 0;

    //printf("%d\n", result);
    return n + rec_func(n-1);
}


