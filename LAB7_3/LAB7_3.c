#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		printf("%d\n", i*i*i);
		i++;
	}
}