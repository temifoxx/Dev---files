//program to print out multiplication table of your choice

#include <stdio.h>
int main()
{
	int  i=1;
	int num, mult;
	printf("Enter a number of your choice: ");
	scanf("%d", &num);
	
	while(i<=12)
	{
		mult=num*i;
		printf("%d * %d = %d \n", num, i, mult);
		i++;
	
	}
	printf("End of program!!!");
	return 0;
}
