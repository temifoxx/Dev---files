#include <stdio.h>

int main(){
	
	int age;
	printf("Enter the applicant's age: ");
	scanf("%d", &age);
	
	if(age>=16)
	{
		printf("Offer Admission To Applicant!");
	
	}
	else
	{
		printf("Sorry, try again later...");
		printf("You're recommended to enter the JUPEB programme'");
	}
}
