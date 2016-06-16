/*
 * 다섯 과목의 점수가 저장된 배열의 값에 따라 별 그래프를 그린다.
 * 별은 5점당 하나씩 출력하며 남는 점수는 버린다.
 * 배열은 main 함수에 선언하고 그래프를 그리는 함수는 별도로 작성한다.
 *
 * int score[5] = {72,88,95,64,100}; - 배열 선언과 초기화
 * void print_graph(int *ps, int size); - 배열명과 배열 요소 수를 받는 출력 함수 선언
 *
 */


#include <stdio.h>
void print_graph(int *ps, int size);

int ___main(void)
{
    int score[5] = {72,88,95,64,100};
    int size = sizeof(score)/ sizeof(int); //5

    print_graph(score, 5);

    return 0;
}

void print_graph(int *ps, int size)
{
    int i, star;
    for(i=0; i<size; i++)
    {
        star = *(ps+i)/5;
        printf("(%3d) ", *(ps+i));
        for(;star>0; star--)
        {
            printf("*");
        }
        printf("\n");
    }


}
