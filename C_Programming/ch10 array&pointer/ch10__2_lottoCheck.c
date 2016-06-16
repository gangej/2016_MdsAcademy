/*
 * 구입한 로또 복권의 번호와 추첨한 로또 복권의 번호를 확인하여 일치하는 번호의 개수를 출력한다.
 * 두 배열은 main 함수에 선언하고 두 배열에서 일차하는 번호를 찾아 그 개수를 반환하는 함수를 만들어
 * main 함수에서 사용한다.
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

     printf("일치하는 번호의 개수 : %d", cnt);

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

