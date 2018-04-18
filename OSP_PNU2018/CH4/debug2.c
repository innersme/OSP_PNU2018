#include <stdio.h>

void pirnt_sum(int sum)
{
	printf("Total sum: %d\n", sum);
}

int main(void)
{
	int i, sum;

	sum =0;

	for(i=0; i<5;i++)
	{
		printf("%dth iteration\n",i);
		sum += i;
	}

	print_sum(sum);
}