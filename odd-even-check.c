//program to check if a given value is an even number or an odd number
#include <stdio.h>
int main(){
	int value;
	
	printf("Enter the value: ");
	scanf("%d", &value);
	
	if(value%2==0)
	{
		printf("Value entered is an even number \n");
		printf("%d is an even number", value);
	}
	else
	{
		printf("Value entered is an odd number \n");
		printf("%d is an odd number", value);
	}
	printf("\n End of program");
	return 0;
}
