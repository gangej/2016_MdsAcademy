#include <stdio.h>

void sum_arr(int[5][6]);
void print_arr(int[5][6]);

int main(void)
{
    int arr[5][6]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    sum_arr(arr);
    print_arr(arr);
    return 0;
}


void sum_arr(int arr[5][6])
{

    int i,j;


    for(i=0;i<4;i++)
    {
        for(j=0; j<5; j++)
        {
            arr[i][5] += arr[i][j];
        }
        arr[4][5] += arr[i][5];
    }

    for(j=0; j<5; j++)
    {
        for(i=0; i<4; i++)
        {
            arr[4][j] += arr[i][j];
        }
    }

}

void print_arr(int arr[5][6])
{
    int i, j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

