/* 
 * Ű����� �̸��� �ݺ� �Է��� �� �Էµ� ��� �̸��� ����Ѵ�.
 * �̸��� �ִ� 10����� �Է��� �� ������ ���� �̸��� �ԷµǸ� �ߺ��޽����� ����ϰ� end�� �ԷµǸ� �Է��� ������.
 * �̸��� ������ 2���� char�迭�� main �Լ��� �ۼ��ϰ� �̸��� �Է��ϴ� �Լ�, �ߺ����θ� �˻��ϴ� �Լ�, ����ϴ� �Լ��� �ۼ��Ѵ�.
 *
 */


#include <stdio.h>
#include <string.h>

int input_name(char (*name)[20]);
void print_name (char (*name)[20], int cnt);
int verify_name(char (*name)[20], int cnt, char *temp);

int main(void)
{
    char name[10][20];
    int cnt;

    cnt = input_name(name);
    print_name(name, cnt);

    return 0;
}
int input_name(char (*name)[20])
{
    char temp[20];
    int i,j;
    int cnt = 0;
    while(1)
    {
        printf("�̸� : ");
        scanf("%s",temp);

        if(!strcmp(temp,"end") || cnt == 10)
        {
            printf("# �� i���� �ԷµǾ����ϴ�.\n", cnt);
            print_name(name,cnt);
            break;
        }


        if(!verify_name(name,cnt,temp))
        {
            printf("# �̸��� �̹� ��ϵǾ����ϴ�!\n");
            continue;
        }

        for(i=0; i<20; i++)
        {
            name[cnt][i] = temp[i];
        }
        cnt++;
    }
    return 0;
}
int verify_name(char (*name)[20], int cnt, char *temp)
{
    int i=0;
    while(i<cnt)
    {
        if(strcmp(name[i],temp)==0)
            return 0;

        i++;
    }
    return 1;
}

void print_name (char (*name)[20], int cnt)
{
    int i=0;
    for(i=0; i<cnt; i++)
    {
        puts(name[i]);
    }
}

