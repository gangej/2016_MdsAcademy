#include <stdio.h>

int main(void)
{
    double height, weight;
    double bmi;
    //int result;
    printf("������(kg)�� Ű(kg) �Է� : ");
    scanf("%lf %lf", &height, &weight);

    weight = weight*0.01;
    bmi = weight/height*height;

    printf("%s", (bmi>=20 && bmi<25)? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");

    return 0;
}

