#include <stdio.h>
/*
void set(int h, int m); //���� �ð��� ���� ����
void show(void); //�ð��� ���� ȭ�鿡 ���
void move(void); //�� �� ȣ��� ������ 1�о� �ð� ����

static int init_h, init_m;

int main(void)
{
    int h=0, m=0, i=0;
    int next;
    printf("���� �ð��� �� �Է�(24�ð�) : ");
    scanf("%d%d",&h,&m);
    set(h,m);

    printf("������ �ð� : ");
    show();
    printf("��� �ð� �Է�(��) :");
    scanf("%d", &next);
    for(i=0; i <next ; i++)
        move();
    printf("���� �ð� : ");
    show();
    return 0;
}

void set(int h, int m)
{
    init_h = h;
    init_m = m;
}

void show(void)
{
    if((init_h-12)<0 || (init_h-12)==12)
    {
        //AM
        if(init_h==24)
            init_h = 0;
        printf("%2d:%2d(AM)\n",init_h, init_m);
    }
    else
    {
        //PM
        printf("%2d:%2d(PM)\n",init_h-12,init_m);
    }
}

void move(void)
{
    ++init_m;
    if(init_m==60)
    {
        init_h++;
        init_m=0;
    }
}

*/
