/*
 * 1���� 45�߿� 6���� ���� �ٸ� ���� �迭�� �Է��ϰ� ����Ѵ�.
 * �Է��� ���� �̹� ����� ���� ������ ���� �޽����� ����ϰ� �ٽ� �Է��Ѵ�.
 *
 */

#include <stdio.h>

void input_nums(int *lotto_nums, size_t size);
void print_nums(int *lotto_nums, size_t size);

int main(void)
{
    int lotto_nums[6]={0,};

    int size = sizeof(lotto_nums)/ sizeof(int);
    input_nums(lotto_nums, size);
    print_nums(lotto_nums, size);

    return 0;
}

void input_nums(int *lotto_nums, size_t size)
{
    int n,i,cnt=0;
    int flag;
    while(cnt<size)
    {
        flag = 0;
        printf("��ȣ�Է�(1~45) : ");
        scanf("%d", &n);
        if(n<1 || n>45)
        {
            printf("�ùٸ��� ���� ���� �Դϴ� \n");
            size++;
        }

        for(i=0; i<cnt; i++)
        {
            if(*(lotto_nums+i)== n)
            {
                printf("���� ��ȣ�� �ֽ��ϴ�!\n");
                flag = 1;
                break;
            }
        }
        if(flag != 1)
        {
            lotto_nums[cnt] = n;
            cnt++;
        }
    }

}

void print_nums(int *lotto_nums, size_t size)
{
    int i;
    printf("�ζ� ��ȣ : ");
    for(i=0; i<size; i++)
    {
        printf("%d ", (lotto_nums[i]));
    }
    puts("");
}
