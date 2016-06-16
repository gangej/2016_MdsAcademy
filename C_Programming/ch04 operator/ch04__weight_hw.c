#include <stdio.h>

int main(void)
{
    double height, weight;
    double bmi;
    //int result;
    printf("몸무게(kg)와 키(kg) 입력 : ");
    scanf("%lf %lf", &height, &weight);

    weight = weight*0.01;
    bmi = weight/height*height;

    printf("%s", (bmi>=20 && bmi<25)? "표준입니다" : "체중관리가 필요합니다");

    return 0;
}

