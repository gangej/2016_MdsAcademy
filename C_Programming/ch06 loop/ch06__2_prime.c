
#include <stdio.h>

int main(void)
{
    int num, i=0, j;
    int cnt=1, five=0;;

    printf("2�̻��� ������ �Է��ϼ��� : ");
    scanf("%d", &num);

    for(i=2; i<=num; i++)
    {
        cnt = 1;
        for(j=2; j<=i; j++)
        {
            if(cnt>2)
                break;
            if(i%j==0)
                cnt++;
        }

        if(cnt==2)
        {
            printf("%d ", i);
            five++;
        }

        if(five == 5)
        {
            printf("\n");
            five = 0;
        }

    }



    return 0;
}

