#include <stdio.h>
int main(void)
{
    int rich=150;
    double grade=4.1;
    int tuition=0;

    if(rich < 100)
    {
        tuition = 100*0.6;
    }
    else if(rich >= 100 && grade >= 4.0)
    {
        tuition = 100*0.8;
    }

    printf("���� �б� ������ ��ϱ��� %d�����Դϴ�.\n",tuition);

    return 0;
}
