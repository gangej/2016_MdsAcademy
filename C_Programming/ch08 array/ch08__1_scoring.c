#include <stdio.h>
#define size 5

int this_is_max(int[]);
int this_is_min(int[]);
void valid_score(int[],int,int);

int main(void)
{
    int score[5]={0,};
    int i;
    //int max, min;

    printf("5명 심사위원의 점수 입력 : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &score[i]);
    }

    //max = this_is_max(score);
    //min = this_is_min(score);

    //valid_score(score, max, min);
    valid_score(score, this_is_max(score), this_is_min(score));

    return 0;
}




int this_is_max(int score[])
{
    int i, max;

    max=score[0];
    for(i=1; i<size; i++)
    {
        if( max < score[i] )
            max = score[i];
    }

    return max;
    //return 0;
}

int this_is_min(int score[])
{
    int i, min;

    min=score[0];
    for(i=1; i<size; i++)
    {
        if( min > score[i] )
            min = score[i];
    }
    return min;
}

void valid_score(int score[], int max, int min)
{
    int i, temp=0, total=0;
    printf("유효점수 : ");

    for(i=0; i<size; i++)
    {
       if(min<score[i] && score[i]<max)
       {
           printf("%3d", score[i]);
           total += score[i];
       }
    }

    printf("\n평균 : %.1lf", total/3.0);

}

