
#include <stdio.h>
/*
char *my_token(char *ps);

int main(void)
{
    char str[80]={0,};
    char *p;

    printf("���� �Է� : ");
    gets(str);

    while((p=my_token(str))!= NULL)
    {
        printf("%s\n",p);
    }
    return 0;

}

char *my_token(char *ps)
{
    static int i=0;
    char *p;

    p=ps+i; //�߸� �ܾ��� ������ġ

    while(*p)
    {
        if(*(ps+i) == NULL)
        {
            return p;
        }
        if(*(ps+i) == ' ')
        {
            *(ps+i) = 0;
            i++;
            return p;
        }
        i++;
    }

    return 0;
}
*/
