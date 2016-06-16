/*
 * Ű����� �λ縻�� �Է��� �Ŀ� ���������� �����Ͽ� ����Ѵ�.
 * �̾ �Է��� ������� �ٽ� �� �� ����Ѵ�.
 * ������ �Է��� ���ڿ��� �ٲ��� �ʰ� ������ �迭�� ���� ������ �ٲپ� �����Ѵ�.
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(char *a, char *b);
void init_intro(char (*intro)[80], char **pint);
int input_intro(char (*intro)[80]);
void sort_intro(char **pint, int cnt);
void print_intro(int mode, void *vp, int cnt);

int main(void)
{
    char intro[10][80]={0,};
    char *pint[10]={0,};
    int cnt;

    init_intro(intro, pint);
    cnt = input_intro(intro);
    sort_intro(pint, cnt);
    print_intro(1, pint, cnt);
    print_intro(0, intro, cnt);

    return 0;
}

void init_intro(char (*intro)[80], char **pint)
{
    int i=0;
    for(i=0; i<10; i++)
    {
        pint[i] = intro+i;

    }
}

int input_intro(char (*intro)[80])
{
    char temp[80];
    int i=0, cnt=0;
    for(i=0; i<10; i++)
    {
        printf("�λ縻 �Է� : ");
        gets(temp);
        if( !strcmp(temp, "end"))
            break;
        strcpy(intro[i], temp);
        cnt++;
    }

    return cnt;
}

void sort_intro(char **pint, int cnt)
{
    qsort( pint, cnt, sizeof(char *), (int(*)(const void *,const void *))compare );
}

int compare(char *a, char *b)
{
    const char **a1 = (const char **)a;
    const char **b1 = (const char **)b;
    return strcmp(*a1, *b1);
}

void print_intro(int mode, void *vp, int cnt)
{
    char (*p)[80] = vp;
    char **pp = vp;

    int i=0;
    int j;
    switch(mode)
    {
    case 0:
        printf("\n# �Է¼����� ���...\n");
        for(i=0; i<cnt; i++)
        {
            printf("%s\n", p++);
        }
        return 0;

    case 1:
        printf("\n# ���������� ���...\n");
        for(i=0; i<cnt; i++)
        {
            printf("%s\n", *pp);
            pp++;
        }
        return 0;
    }

}

