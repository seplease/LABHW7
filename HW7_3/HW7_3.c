#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, Factorial;

	i = 1;
	num = 1;
	Factorial = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (i <= num)
	{
		Factorial *= i;
		i++;
	}

	printf("%d 의 Factorial 값은 %d 이다", num, Factorial);
}