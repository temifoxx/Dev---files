#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int add, sub, mult, div, mod;
	
	printf("Input the value of num1: ");
	scanf("%d", &num1);
	printf("Input the value of num2: ");
	scanf("%d", &num2);
	
	add = num1+num2;
	sub = num1-num2;
	mult = num1*num2;
	div = num1/num2;
	mod = num1%num2;
	
	printf("The sum of the numbers is %d \n", add);
	printf("The difference of the numbers is %d \n" , sub);
	printf("The product of the numbers is %d \n", mult);
	printf("The division of the number is %d \n", div);
	printf("The modulus of the numbers is %d \n", mod);
	
	
	return 0;
	
	
}
