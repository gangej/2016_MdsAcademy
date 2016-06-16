#include <stdio.h>

int main(void)
{
    int distance, speed;
    int hours, minutes;
    double time, seconds;

    printf("거리와 속력 입력 : ");
    scanf("%d %d", &distance, &speed);

    time = (double)distance/speed;

    hours = time;
    time -= hours;

    time *= 60;
    minutes = time;
    time -= minutes;

    seconds = time * 60;

    printf("소요시간은 %d시간 %d분 %.3lf초 입니다.", hours, minutes, seconds);
    return 0;
}
