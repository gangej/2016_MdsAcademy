/*
 * 두 명의 나이와 키를 입력한 후에 바꾸어 출력한다.
 * 단, 나이와 키를 바꾸는 함수는 int형과 double형을 모두 교환할 수 있도록 하나의 함수로 구현한다.
 * swap("int", &a, &b), swap("double", &a, &b)의 함수 호출을 이용하여 작성
 *
 */
 
#include <stdio.h>
#include <string.h>

void swap(char * type, void *a, void *b);
int main(void)
{
    int age1 ,age2;
    double height1, height2;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf", &age1, &height1);
    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf", &age2, &height2);

    swap("int", &age1, &age2);
    swap("double", &height1, &height2);

    printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", age1, height1);
    printf("두 번째 사람의 나이와 키 : %d %.1lf\n", age2, height2);
    return 0;
}

void swap(char * type, void *vp1, void *vp2)
{
    int temp1;
    double temp2;

    if(!strcmp(type, "int"))
    {
        temp1= *(int*)vp1;
        *(int*)vp1 = *(int*)vp2;
        *(int*)vp2 = temp1;
    }

    if(!strcmp(type, "double"))
    {
        temp2= *(double*)vp1;
        *(double*)vp1 = *(double*)vp2;
        *(double*)vp2 = temp2;
    }

    return 0;
}

