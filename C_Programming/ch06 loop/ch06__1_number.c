#include <stdio.h>

int main(void)
{
    int solution=19, n, i=1;
    int flag = 0;

    while(1)
    {
        if(flag == 1)
        {
            printf("시도한 횟수는 %d입니다.\n", i);
            break;
        }

        printf("숫자 입력 (1부터 30까지) : ");
        scanf("%d", &n);

        if( n == solution)
        {
            printf("정답입니다.\n");
            flag = 1;
        }
        else
        {
            if( n > solution)
                printf("%d보다 작습니다.\n", n);
            else
                printf("%d보다 큽니다.\n", n);
            i++;
        }
    }

    return 0;
}

