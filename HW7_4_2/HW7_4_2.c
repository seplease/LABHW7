#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	i = 1;
	while (i <= 5)
	{
		sum += i;
		i++;
	}

	printf("%d\n", sum);
	return 0;
}