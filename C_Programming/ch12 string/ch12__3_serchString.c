#include <stdio.h>

int end__strcmp(char *str)
{
    const char * finish = "end";
    while(*str)
    {
        if(*str == *finish)
        {
            str++; finish++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int serch_keword(const char * buffer, const char * keyword)
{
    int cnt = 0;
    char * temp = keyword;

    while(*buffer)
    {

        while((*buffer == *keyword) && *keyword)
        {
            keyword++;
            if( !(*keyword) )
            {
                cnt ++;
                break;
            }
            buffer++;

        }
        keyword = temp;
        buffer++;

    }

    return cnt;
}

int main(void)
{
    char buffer[100]={0,};
    char keyword[30]={0,};
    int cnt;

    printf("���� �Է� : ");
    gets(buffer);
    while(1)
   {
       printf("�˻��� ���ڿ� �Է� (����� end) : ");
       gets(keyword);
       if(end__strcmp(keyword))
       {
           return 0;
       }

       cnt = serch_keword(buffer, keyword);
       printf("�˻� ��� : %d��\n", cnt);
   }

    return 0;
}


