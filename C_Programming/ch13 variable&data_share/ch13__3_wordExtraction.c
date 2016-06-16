
#include <stdio.h>
/*
char *my_token(char *ps);

int main(void)
{
    char str[80]={0,};
    char *p;

    printf("문장 입력 : ");
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

    p=ps+i; //잘릴 단어의 시작위치

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
