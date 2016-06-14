/*
 * 1부터 45중에 6개의 서로 다른 수를 배열에 입력하고 출력한다.
 * 입력한 수가 이미 저장된 수와 같으면 오류 메시지를 출력하고 다시 입력한다.
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
        printf("번호입력(1~45) : ");
        scanf("%d", &n);
        if(n<1 || n>45)
        {
            printf("올바르지 않은 숫자 입니다 \n");
            size++;
        }

        for(i=0; i<cnt; i++)
        {
            if(*(lotto_nums+i)== n)
            {
                printf("같은 번호가 있습니다!\n");
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
    printf("로또 번호 : ");
    for(i=0; i<size; i++)
    {
        printf("%d ", (lotto_nums[i]));
    }
    puts("");
}
