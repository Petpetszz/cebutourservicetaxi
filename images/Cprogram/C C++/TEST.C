#include<stdio.h>

int main() {
	
	char operator;
	double num1;
	double num2;
	double result;

	printf("Enter an operator (+ - / *): ");
	scanf("%c", &operator);
	
	printf("Enter first number : ");
	scanf("%lf", &num1);

	printf("Enter Second number : ");
	scanf("%lf", &num2);

	return 0;
}