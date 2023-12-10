#include<stdio.h>
#include<stdlib.h>
int main()
{
	int CMP211, MTH211, CMP212;
	int total, average;
	
	printf("Enter the score for CMP211:" );
	scanf("%d", &CMP211);
	printf("Enter the score for MTH211:");
	scanf("%d", &MTH211);
	printf("Enter the score for CMP212:");
	scanf("%d", &CMP212);
	
	system("cls");
	
	total = CMP211+MTH211+CMP212;
	average = total/3;
	
	printf("Your total score is %d \n", total);
	printf("Your average score is %d \n", average);
	
	switch (average){
		case 70 ... 100:
		printf("Your grade is A");
		break;
		case 60 ... 69:
		printf("Your grade is B");
		break;
		case 50 ... 59:
		printf("Your grade is C");
		break;
		case 45 ... 49:
		printf("Your grade is D");
		break;
		case 40 ... 44:
		printf("Your grade is E");
		break;
		case 0 ... 39:
		printf("Your grade is F");
		default:
		printf("ERROR\n\n");
	}
	
	return 0;
}
