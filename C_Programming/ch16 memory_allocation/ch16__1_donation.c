/*
 * 자선 단체에 기부하는 사람들의 명단과 금액을 입력한 후에 평균 기부액을 출력한다.
 * 기부하는 사람의 수는 제한이 없으며 이름으로 'end'를 입력하면 입력을 종료한다
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input_contributor(char **name, char **donate, int **donation);
void print_contributor(char **name, char **donate, int **donation, int cnt);
int main(void)
{
    char **name;
    char **donate;
	int **donation;
    int cnt;

    cnt = input_contributor(name, donate, donation);
	print_contributor(name, donate, donation, cnt);

    return 0;
}

int input_contributor(char **name, char **donate, int **donation)
{
    char temp[80]; /*문자열 배열 입력*/
    char d_temp[80];

    int i=0, cnt=0;
    while(1)
    {
        printf("이름 : ");
        gets(temp);
        if(!strcmp(temp,"end")) break;

        name[i] = (char*)malloc(strlen(temp));
        strcpy(name[i], temp);
		strcat(name[i],"\0");
		
        printf("기부금 : ");
        gets(d_temp);
        donate[i] = (char*)malloc(strlen(d_temp)+1);
		donation[i] = (int*)malloc(sizeof(int));
        strcpy(donate[i], d_temp);
		strcat(donate[i],"\0");
		/*donation++;*/
        i++;
    }
    cnt = i;
    return i;

}

void print_contributor(char **name, char **donate, int **donation, int cnt)
{
	int i;
	
	for(i=0; i<cnt; i++)
	{
		printf("%d. %s %d\n", i+1, name[i], donation[i]);
	}
	
	for(i=0; i<cnt; i++)
    {
        free(name[i]);
        free(donate[i]);
    }
}