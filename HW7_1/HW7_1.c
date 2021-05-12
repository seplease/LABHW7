#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("Congratulation");
		break;
	case 'B':
		printf("Okay, try harder");
		break;
	case 'C':
		printf("Try harder, you need to get 60 next time");
		break;
	case 'D':
	case 'E':
		printf("Sorry, you should take this course agrain");
		break;
	default:
		printf("Wrong grade");
	}
}