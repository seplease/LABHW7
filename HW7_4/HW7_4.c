#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, total, student, num;
	double average;

	student = 0;
	num = 0;
	total = 0;

	printf("Enter a student number: ");
	scanf("%d", &student);
	if (student <= 0)
	{
		printf("The total is 0\n");
		printf("The average is 0.0");
	}
	else
	{
		while (num < student)
		{
			printf("Enter a score: ");
			scanf("%d", &score);
			total += score;
			num++;
		}

		printf("The total is %d\n", total);
		average = (double)total / student;
		printf("The average is %.1f", average);
	}
}