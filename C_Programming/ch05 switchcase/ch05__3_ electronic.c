#include <stdio.h>

int main(void)
{
    int kw;
    double total=0, fee=0, tax;
    int base;
    printf("���� ��뷮�� �Է��ϼ���(kw) : ");
    scanf("%d", &kw);

    //�⺻��� ���
    if(kw>=1 && kw<=100)
        base = 370;
    else if ( kw<=200 )
        base = 660;
    else if ( kw<=300 )
        base = 1130;
    else if ( kw<=400 )
        base = 2710;
    else if ( kw<=500 )
        base = 5130;
    else
        base = 9330;

    //��� ���
    switch(kw/kw)
    {
    case 1:
        if(kw<=100)
        {
            fee += kw*52.0;
            break;
        }
        fee += 100*52.0;
        kw -= 100;
    case 2:
        if(kw<=100)
        {
            fee += kw*88.5;
            break;
        }
        fee += 100*88.5;
        kw -= 100;

    case 3:
        if(kw<=100)
        {
            fee += kw*127.8;
            break;
        }
        fee += 100*127.8;
        kw -= 100;

    case 4:
        if(kw<=100)
        {
            fee += kw*184.3;
            break;
        }
        fee += 100*184.3;
        kw -= 100;

    case 5:
        if(kw<=100)
        {
            fee += kw*274.3;
            break;
        }
        fee += 100*274.3;
        kw -= 100;

    default:
        fee += kw * 494.0;
    }

    //���� ���
    tax = (base+fee)*0.09;

    total = base + tax + fee;
    printf("�̹� �� ����� %d���Դϴ�.", (int) total);

    return 0;
}
