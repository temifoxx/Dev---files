/*WRITE A C PROGRAM THAT HAS THE FOLLOWING
Input scores in three(3) subjects (e.g. CMP211, MTH211)
calculate total and average scores
print out the average score
check for the grades based on the average scores
A = 70-100, B = 60-69, C = 50-59, D = 45-49, E = 40-44, F=40 
*/

#include <stdio.h>
int main()
{
	float score1, score2, score3, totalscore, avgscore;
	
	//score 1
	printf("Enter score 1:");
	scanf("%f", &score1);
	printf("Your score is %.f/100 \n", score1);
	
	//score 2
	printf("Enter score 2:");
	scanf("%f", &score2);
	printf("Your score is %.f/100 \n", score2);
	
	//score 3
	printf("Enter score 3: ");
	scanf("%f", &score3);
	printf("Your score is %.f/100 \n", score3);
	
	totalscore = score1 + score2 + score3;
	printf("The total score is: %.f/300 \n", totalscore);
	
	avgscore = totalscore / 3;
	printf("The average score is: %.f\n", avgscore);
	
		
	if (avgscore>=70 & avgscore<=100)
	{
		printf("Your grade is A", avgscore);
	}
	else if(avgscore>=60 & avgscore<=69)
	{
		printf("Your grade is B", avgscore);
	}
	else if (avgscore>=50 & avgscore<=59)
	{
		printf("Your grade is C", avgscore);
	}
	else if (avgscore>=45 & avgscore<=49)
	{
		printf("Your grade is D", avgscore);
	}
	else if (avgscore>=40 & avgscore<=44)
	{
		printf("Your grade is E", avgscore);
	}
	else if (avgscore>=0 & avgscore<=40)
	{
		printf("Your grade is F", avgscore);
	}
	else
	{
		printf("YOU HAVE NO GRADE. YOU FAILED.");
	}
}
