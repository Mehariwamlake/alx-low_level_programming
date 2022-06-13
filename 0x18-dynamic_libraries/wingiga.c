#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lower = 1, upper = 75, count = 6;
	srand(time(0));
	for (int i = 0; i < count; i++)
	{
		int num = (rand() % (upper - lower + 1)) + lower;
		printf("%d ", num);
	}
	int lower1= 1, upper1 = 15, count1 = 1;
	for (int i = 0; i < count1; i++)
	{
		int num1 = (rand() % (upper1 - lower1 + 1)) + lower1;
		printf("%d ", num1);
	}
	return (0);
}

