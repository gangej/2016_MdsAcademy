#include <stdio.h>

int main(void)
{
    int distance, speed;
    int hours, minutes;
    double time, seconds;

    printf("�Ÿ��� �ӷ� �Է� : ");
    scanf("%d %d", &distance, &speed);

    time = (double)distance/speed;

    hours = time;
    time -= hours;

    time *= 60;
    minutes = time;
    time -= minutes;

    seconds = time * 60;

    printf("�ҿ�ð��� %d�ð� %d�� %.3lf�� �Դϴ�.", hours, minutes, seconds);
    return 0;
}
