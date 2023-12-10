/*voters eligibility code*/
#include <stdio.h>
int main()
{
	int age;
	printf("Enter the voters age: ");
	scanf("%d", &age);
	
	if (age>=0 & age<=17)
	{
		printf("Citizen is uneligible to vote.", age);
	}
	else if(age>=18 & age<=21)
	{
		printf("Citizen is a new voter.", age);
	}
	else if(age>=22 & age<=80)
	{
		printf("Citizen is eligible to vote.", age);
	}
	else
	{
		printf("Citizen is eligible to vote.");
	}
}
