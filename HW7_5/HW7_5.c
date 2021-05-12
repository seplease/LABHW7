#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number, mok, nmg;
	mok = -1;

	printf("Enter a number:");
	scanf("%d", &number);

	while (number != 0)
	{
		nmg = number % 2;
		number = number / 2;
		
		printf("%d", nmg);
	}
}