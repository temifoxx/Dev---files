//Program to check if a value is positive, negative or zero
#include <stdio.h>
int main()
{
	int value;
	printf("Enter a number to check: ");
	scanf("%d", &value);
	if(value > 0)
	{
		printf("%d is a positive number", value);	
	}
	else if(value < 0)
	{
		printf("%d is a negative number", value);
		
	}
	else if(value = 0)
	{
		printf("%d is equal to zero");
	}
	return 0;
}

