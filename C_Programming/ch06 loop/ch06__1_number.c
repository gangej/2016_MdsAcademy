#include <stdio.h>

int main(void)
{
    int solution=19, n, i=1;
    int flag = 0;

    while(1)
    {
        if(flag == 1)
        {
            printf("�õ��� Ƚ���� %d�Դϴ�.\n", i);
            break;
        }

        printf("���� �Է� (1���� 30����) : ");
        scanf("%d", &n);

        if( n == solution)
        {
            printf("�����Դϴ�.\n");
            flag = 1;
        }
        else
        {
            if( n > solution)
                printf("%d���� �۽��ϴ�.\n", n);
            else
                printf("%d���� Ů�ϴ�.\n", n);
            i++;
        }
    }

    return 0;
}

