#include <stdio.h>

int end__strcmp(char *str)
{
    const char * finish = "end";
    while(*str!=0 && *finish!=0)
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

    if(*str!=0 || *finish!=0)
        return 0;
    else
        return 1;
}

int word__cmp(const char *str1,const char *str2)
{
    while(*str1 && *str2)
    {
        if(*str1 == *str2)
        {
            str1++;
            str2++;
        }
        else return 0;
    }

    if(*str1!=0 || *str2!=0)
        return 0;
    else
        return 1;
}

int main(void)
{
    char word[10][20];
    char temp[20];
    int i,cnt,flag=0;

    for(i=0; i<10; i++)
    {
        printf("�ܾ� �Է� (����� end �Է�) : ");
        gets(word[i]);
        if(end__strcmp(word[i]))
        {
            printf("�� %d���� �ܾ �ԷµǾ����ϴ�!\n",i);
            break;
        }
    }
    if(i==10)
    {
        printf("�� 10���� �ܾ �ԷµǾ����ϴ�!\n",i);
    }
    cnt = i;


    while(1)
    {
        printf("\n�˻� �ܾ� (����� end �Է�) : ");
        gets(temp);
        if(end__strcmp(temp)) break;

        flag = 0;
        for(i=0; i<cnt; i++)
        {

            if(word__cmp(word[i],temp))
            {
                printf("# �� %d��° ���� �ܾ �ֽ��ϴ�!\n", i+1);
                flag=1;
                break;
            }


        }
        if(!flag)
            printf("# ���� �ܾ��Դϴ�.\n");
    }

    return 0;
}

