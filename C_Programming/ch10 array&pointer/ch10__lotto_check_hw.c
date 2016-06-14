/*
 * ������ �ζ� ������ ��ȣ�� ��÷�� �ζ� ������ ��ȣ�� Ȯ���Ͽ� ��ġ�ϴ� ��ȣ�� ������ ����Ѵ�.
 * �� �迭�� main �Լ��� �����ϰ� �� �迭���� �����ϴ� ��ȣ�� ã�� �� ������ ��ȯ�ϴ� �Լ��� �����
 * main �Լ����� ����Ѵ�.
 *
 */

 #include <stdio.h>
 int check_same(int *lotto_nums, int *my_nums, size_t size);

 int _main(void)
 {
     int lotto_nums[6] = {4, 10, 25, 30, 41, 45};
     int my_nums[6] = {1, 4, 7, 22, 41, 43};
     int size, cnt;

     size = sizeof(lotto_nums)/sizeof(int); //6

     cnt = check_same(lotto_nums, my_nums, size);

     printf("��ġ�ϴ� ��ȣ�� ���� : %d", cnt);

     return 0;
 }

 int check_same(int *lotto_nums, int *my_nums, size_t size)
 {
     int cnt=0;
     int i, j;

     for(i=0; i<size; i++)
     {
         for(j=0; j<size; j++)
         {
             if(*(my_nums+i) == *(lotto_nums+j))
             {
                cnt++;
                break;
             }
         }
     }

     return cnt;
 }

