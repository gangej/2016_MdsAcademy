#include <stdio.h>

char str[60];
int reverse_str(char[]);

int main()
{
    int i, cnt=0;

    printf("���� �Է� : ");
    gets(str);

    printf("�ٲ� ���� : ");

    cnt = reverse_str(str);
    puts(str);
    printf("�ٲ� ���� �� : %d", cnt);

    return 0;
}

int reverse_str(char str[])
{
    int i, cnt=0;
    for(i=0; str[i]; i++)
    {
        if( 65<=str[i] && str[i]<=90)
        {
            str[i] = str[i]+32;
            cnt++;
        }
    }

    return cnt;
}

