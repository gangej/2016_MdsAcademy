#include <stdio.h>

int main(void)
{
    int sandwitch, coffee, cup;
    int change;

    printf("세 개의 물건값을 입력하세요 : ");
    scanf("%d %d %d", &sandwitch, &coffee, &cup);

    change = 10000-sandwitch-coffee-cup;
    printf("거스름돈은 %d원입니다.\n", change);

    printf("오천원권 : %d장\n", change/5000);
    printf("천원권 : %d장\n", change%5000/1000);
    printf("오백원짜리 동전 : %d개\n", change%5000%1000/500);
    printf("백원짜리 동전 : %d개\n", change%5000%1000%500/100);
    printf("오십원짜리 동전 : %d개\n", change%5000%1000%500%100/50);
    printf("십원짜리 동전 : %d개\n ", change%5000%1000%500%100%50/10);
    return 0;
}

