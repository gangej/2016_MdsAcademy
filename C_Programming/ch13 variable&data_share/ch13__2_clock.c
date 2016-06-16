#include <stdio.h>
/*
void set(int h, int m); //최초 시간과 분을 설정
void show(void); //시간과 분을 화면에 출력
void move(void); //한 번 호출될 때마다 1분씩 시간 증가

static int init_h, init_m;

int main(void)
{
    int h=0, m=0, i=0;
    int next;
    printf("최초 시간과 분 입력(24시간) : ");
    scanf("%d%d",&h,&m);
    set(h,m);

    printf("설정된 시간 : ");
    show();
    printf("경과 시간 입력(분) :");
    scanf("%d", &next);
    for(i=0; i <next ; i++)
        move();
    printf("현재 시간 : ");
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
