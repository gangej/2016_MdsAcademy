#include <stdio.h>

int main(void)
{
    int sandwitch, coffee, cup;
    int change;

    printf("�� ���� ���ǰ��� �Է��ϼ��� : ");
    scanf("%d %d %d", &sandwitch, &coffee, &cup);

    change = 10000-sandwitch-coffee-cup;
    printf("�Ž������� %d���Դϴ�.\n", change);

    printf("��õ���� : %d��\n", change/5000);
    printf("õ���� : %d��\n", change%5000/1000);
    printf("�����¥�� ���� : %d��\n", change%5000%1000/500);
    printf("���¥�� ���� : %d��\n", change%5000%1000%500/100);
    printf("���ʿ�¥�� ���� : %d��\n", change%5000%1000%500%100/50);
    printf("�ʿ�¥�� ���� : %d��\n ", change%5000%1000%500%100%50/10);
    return 0;
}

