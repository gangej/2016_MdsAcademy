/* 
 * 키보드로 이름을 반복 입력한 후 입력된 모든 이름을 출력한다.
 * 이름은 최대 10명까지 입력할 수 있으며 같은 이름이 입력되면 중복메시지를 출력하고 end가 입력되면 입력을 끝낸다.
 * 이름을 저장할 2차원 char배열은 main 함수에 작성하고 이름을 입력하는 함수, 중복여부를 검사하는 함수, 출력하는 함수를 작성한다.
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
        printf("이름 : ");
        scanf("%s",temp);

        if(!strcmp(temp,"end") || cnt == 10)
        {
            printf("# 총 i명이 입력되었습니다.\n", cnt);
            print_name(name,cnt);
            break;
        }


        if(!verify_name(name,cnt,temp))
        {
            printf("# 이름이 이미 등록되었습니다!\n");
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

