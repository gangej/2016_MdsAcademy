#include <stdio.h>
#define size 6

int lotto_input(int[],int,int);
int lotto_check(int[],int);
void print_lotto(int[]);

int main()
{
    int lotto[size]={0,};
    int location=0;
    int num;

    while(location<size)
    {
        printf("로또번호 입력 : ");
        scanf("%d", &num);
        location = lotto_input(lotto,location, num);
    }
    print_lotto(lotto);

    return 0;
}

int lotto_input(int lotto[],int location, int num)
{
    if(!location)
        lotto[location++] = num;
    else
    {
        if(lotto_check(lotto,num))
            lotto[location++]=num;
    }
    return location;
}

int lotto_check(int lotto[], int num)
{
    int i;
    for(i=0; lotto[i]; i++)
    {
        if(lotto[i]==num)
        {
            printf("같은 번호가 있습니다!\n");
            return 0;
        }
    }
    return 1;

}

void print_lotto(int lotto[])
{
    int i;
    printf("입력된 로또번호 : ");
    for(i=0; i<size; i++)
    {
        printf("%3d",lotto[i]);
    }
}

