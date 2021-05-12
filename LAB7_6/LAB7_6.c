#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, total;
	int student, num;

	student = 0;
	num = 0;
	total = 0;

	printf("Enter a student number: ");
	scanf("%d", &student);

	while (num < student)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		total += score;
		num++;
	}

	printf("The total is %d", total);
}