#include <stdio.h>

int main(void) {
	int T,temp,sum=0;
	scanf("%d", &T);
	
	if (T % 1000 >= 0)//1000~9999
	{
		sum += T / 1000;
		T = (T % 1000);
		sum += T / 100;
		T = (T % 100);
		sum += T / 10;
		T = (T % 10);
		sum += T ;
	}
	else if (T % 100 >= 0)//100~999
	{
		sum += T % 100;
		T -= (T % 100);
		sum += T % 10;
		T -= (T % 10);
		sum += T;
	}
	else if (T % 10 >= 0)//9~99
	{
		sum += T % 10;
		T -= (T % 10);
		sum += T;
	}
	else//1~9
		sum += T;
	printf("%d", sum);
	return 0;
}