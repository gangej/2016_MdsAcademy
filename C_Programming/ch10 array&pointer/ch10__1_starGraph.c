/*
 * �ټ� ������ ������ ����� �迭�� ���� ���� �� �׷����� �׸���.
 * ���� 5���� �ϳ��� ����ϸ� ���� ������ ������.
 * �迭�� main �Լ��� �����ϰ� �׷����� �׸��� �Լ��� ������ �ۼ��Ѵ�.
 *
 * int score[5] = {72,88,95,64,100}; - �迭 ����� �ʱ�ȭ
 * void print_graph(int *ps, int size); - �迭��� �迭 ��� ���� �޴� ��� �Լ� ����
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
