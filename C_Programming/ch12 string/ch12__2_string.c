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

void __strcat(char * result, const char *str)
{
    while(*result) result++;
    while(*str)
    {
        *result = *str++;
        result++;
    }
    *result = ' ';

}

int main(void)
{
   char str[80];
   char result[80]={0,};

   while(1)
   {
       printf("�ܾ��Է� : ");
       gets(str);
       if(end__strcmp(str))
       {
           return 0;
       }
       __strcat(result, str);
       printf("��������� ���ڿ� : %s\n", result);
   }

    return 0;
}

