/*
 * �� ���� ���̿� Ű�� �Է��� �Ŀ� �ٲپ� ����Ѵ�.
 * ��, ���̿� Ű�� �ٲٴ� �Լ��� int���� double���� ��� ��ȯ�� �� �ֵ��� �ϳ��� �Լ��� �����Ѵ�.
 * swap("int", &a, &b), swap("double", &a, &b)�� �Լ� ȣ���� �̿��Ͽ� �ۼ�
 *
 */
 
#include <stdio.h>
#include <string.h>

void swap(char * type, void *a, void *b);
int main(void)
{
    int age1 ,age2;
    double height1, height2;

    printf("ù ��° ����� ���̿� Ű �Է� : ");
    scanf("%d%lf", &age1, &height1);
    printf("�� ��° ����� ���̿� Ű �Է� : ");
    scanf("%d%lf", &age2, &height2);

    swap("int", &age1, &age2);
    swap("double", &height1, &height2);

    printf("ù ��° ����� ���̿� Ű : %d %.1lf\n", age1, height1);
    printf("�� ��° ����� ���̿� Ű : %d %.1lf\n", age2, height2);
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

