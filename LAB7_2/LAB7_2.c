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
		result = firstOper + secondOper;
		break;
	case '-':
		result = firstOper - secondOper;
		break;
	case '*':
		result = firstOper  * secondOper;
		break;
	case '/':
		result = firstOper / secondOper;
		break;
	}
	printf("%d %c %d = %d", firstOper, operator, secondOper, result);
}