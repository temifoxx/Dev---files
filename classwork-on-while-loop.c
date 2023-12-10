//program to calculate the total and average scores of CMP 211 students
#include <stdio.h>
int main()
{
	int n_o_s, score, total_score, avg_score;
	int i=1; 
	
	
	while(score!=-1)
	{
		printf("Enter the score of students in CMP 211: ");
	    scanf("%d", &score);
		total_score+=score;
		i++;
		
	}
	
	printf("Total number of students score entirely is %d\n ", i);
	avg_score = total_score/i;
	printf("avg scoe is %d", avg_score );
	
	
	return 0;
}
