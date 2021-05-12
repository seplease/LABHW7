#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char operator;
	int firstOper, secondOper, result;

	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &firstOper);
	printf("Enter the second operand: ");
	scanf("%d", &secondOper);

	switch (operator)
	{
	case '+':
		printf("%d %c %d = ", firstOper, operator, secondOper);
		scanf("%d", &result);
			if (result == (firstOper + secondOper))
				printf("Right answer");
			else
				printf("Wrong!\n%d is the right answer", firstOper + secondOper);
		break;
	case '-':
		printf("%d %c %d = %d", firstOper, operator, secondOper);
		scanf("%d", &result);
			if (result == ( firstOper - secondOper ))
				printf("Right answer");
			else
				printf("Wrong!\n%d is the right answer", firstOper - secondOper);
		break;
	case '*':
		printf("%d %c %d = ", firstOper, operator, secondOper);
		scanf("%d", &result);
			if (result == ( firstOper * secondOper ))
				printf("Right answer");
			else
				printf("Wrong!\n%d is the right answer", firstOper * secondOper);
		break;
	case '/':
		printf("%d %c %d = %d", firstOper, operator, secondOper);
		scanf("%d", &result);
			if (result == ( firstOper / secondOper ))
				printf("Right answer");
			else
				printf("Wrong!\n%d is the right answer", firstOper / secondOper);
		break;
	}
}