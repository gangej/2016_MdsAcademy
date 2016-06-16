#include <stdio.h>

void print_prime(int num);

int main(void)
{
	int num;
	printf("양수 입력 : ");
	scanf("%d",&num);
	
	print_prime(num);
	return 0;
}

void print_prime(int num)
{
	int i,j;
	int flag=0;
	
	for(i=2; i<num; i++)
	{
		flag = 0;
		for(j=2;j<=i; j++)
		{
			if(i%j==0)
			{
				flag++;
				if(flag > 1) break;
			}
		}
		if(i%5 == 2) puts("");
		if( flag == 1 )
			printf("%3d", i);
		else
			printf("%3c", 'X');
	}
}