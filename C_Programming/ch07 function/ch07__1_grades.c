#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
    int kor, eng, mat;
    int tot;
    double avg;

    printf("# �� ������ ���� �Է� : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    tot=total(kor, eng, mat);
    avg=average(tot);
    print_title();
    printf("\t %d\t %d\t %d\t%d\t %.1lf\n",kor,eng,mat,tot,avg);
    return 0;
}

int total(int kor, int eng, int mat)
{
    int tot;
    tot = kor + eng + mat;
    return tot;
}

double average(int tot)
{
    double avg;
    avg = (double)tot/3;
    return avg;
}

void print_title(void)
{

    printf("\n\t\t=====< ����ǥ >=====\t\n");
    printf("\n");
    printf("-------------------------------------------------------\n");
    printf("\t����\t����\t����\t����\t���\n");
    printf("-------------------------------------------------------\n");

}

