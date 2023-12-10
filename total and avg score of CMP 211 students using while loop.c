//program to calculate the total and average scores of CMP 211 students
#include <stdio.h>
int main()
{
	int n_o_s, score, total_score, avg_score;
	int i=1;
	printf("Enter the number of students in CMP 211: ");
	scanf("%d", &n_o_s);
	
	while(score!=-1)
	{
		i++;
		printf("")
	}
	
	while(i<=n_o_s)
	{
		printf("Enter score for student %d: ", i);
		scanf("%d", &score);
		//total_score= total_score+score
		total_score+=score;
		++i;
	}
	avg_score = total_score/n_o_s;
	printf("The total score of CMP 211 is %d \n", total_score);
	printf("The average score of CMP 211 is %d", avg_score);
	
	return 0;
}
