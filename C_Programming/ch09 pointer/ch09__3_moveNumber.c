#include <stdio.h>

void rotate(int *,int *, int *);

int main(void)
{
    char c;
    int arr[3] = {1,2,3};

    while(1)
    {
        printf("%d:%d:%d", arr[0], arr[1], arr[2]);
        scanf("%c",&c);
        if(c != '\n')
        {
            return 0;
        }
        rotate(arr, arr+1, arr+2);
    }


    return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}


