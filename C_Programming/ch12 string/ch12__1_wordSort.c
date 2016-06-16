#include <stdio.h>

int __strcmp(char *pa, char *pb)
{
    while( (*pa == *pb)&&(*pa != '\0') )
    {
        pa++; pb++;
    }
    if(*pa>*pb) return 1;
    else return 0;
}

int main(void)
{
    char str1[80] = {0,};
    char str2[80] = {0,};
    char str3[80] = {0,};

    char *high, *middle, *low;

    printf("세 단어 입력 : ");
    scanf("%s%s%s",str1, str2, str3);
    if(__strcmp(str1, str2)) //1>2
    {
        if(__strcmp(str1, str3)) // 1>3
        {
            high = str1;
            if(__strcmp(str2, str3)) //2>3
                middle = str2, low = str3; // 1>2>3
            else
                middle = str3, low = str2; // 1>3>2
        }
        else //3>1>2
        {
            high = str3;
            middle = str1;
            low = str2;
        }

    }
    else // 2>1
    {
        if( __strcmp(str2, str3)) //2>3
        {
            high = str2;
            if(__strcmp(str1, str3)) //1>3
                middle = str1, low = str3; //2>1>3
            else
                middle = str3, low = str1; //2>3>1

        }
        else //3>2>1
        {
            high = str3;
            middle = str2;
            low = str1;
        }
    }

    printf("%s, %s, %s", low, middle, high);
    return 0;
}

