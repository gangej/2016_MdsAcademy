
#include <stdio.h>

int month_last_day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int this_year(int year, int month);
int count_day(int year, int month);
int count_this_year_day(int month);
int leap_year(int year);
int print_calander(int year, int month, int day);

int main(void)
{
    int year=1, month;

    while(1)
    {
        printf("년, 월을 입력하세요(종료는 0) : ");
        scanf("%d", &year);

        if(year == 0)
            return 0;

        scanf("%d", &month);
        this_year(year, month);

    }

}

int this_year(int year, int month)
{
    int total=0;

    total += count_day(year, month);
    total += count_this_year_day(month);
    print_calander(year, month, total);

}

int count_day(int year, int month)
{
    int total = 0, i, j;
    int leap= 0;

    for(i=1; i<year; i++) //입력년도 전까지
    {
        for(j=1; j<=12; j++)
        {
            total += month_last_day[j];
            if(j==2)
            {
                 total += leap_year(i);
            }
        }
    }
    return total;
}

int count_this_year_day(int month)
{
    int total=0, i, add=0;
    int leap;

    for(i=1; i<month; i++)
    {
        total += month_last_day[i];
        if(i == 2)
        {
            total+= leap_year(i);
        }
    }

    total += 1; //해당 월 1일

    return total;
}

int leap_year(int year)
{
    int leap = 0;
    //윤년계산
    if(year%4 == 0)
    {
        leap = 1;
        if(year%100 == 0)
        {
            leap = 0;
            if(year%400 == 0)
            {
                leap = 1;
            }
        }
    }

    return leap;
}

int print_calander(int year, int month, int day)
{
    int position=0, last_day;
    int i, j=1, cnt=0;

    last_day = month_last_day[month];
    if (month == 2)
    {
        last_day += leap_year(year);
    }

    if(day%7 == 0) position=0;
    else if (day%7 == 1) position=1;
    else if (day%7 == 2) position=2;
    else if (day%7 == 3) position=3;
    else if (day%7 == 4) position=4;
    else if (day%7 == 5) position=5;
    else if (day%7 == 6) position=6;

    printf("                           %d년  %d월        \n", year, month);
    printf("                        ================     \n ");
    printf(" ----------------------------------------------------------------\n ");
    printf(" \tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT   \n ");
    printf(" ----------------------------------------------------------------\n ");

    for(i=0; i<(last_day+position); i++)
    {

        if(cnt == 7)
        {
            printf("\n");
            cnt = 0;
        }
        if(i<position)
        {
            printf( "\t   " );
            cnt++;
        }
        else
        {
            if(j<10)
                printf( "\t %d", j);
            else
                printf( "\t%d", j);
            cnt++;
            j++;
        }
    }

    printf("\n");

}
