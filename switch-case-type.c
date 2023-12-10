#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter the number to check: ");
	scanf("%d", num);
	
	switch(num>0)
	{
		case 1:
			printf("%d is a positive number", num);
			break;
		case 2:
			//if (num<0){
			printf("%d is a negative integer", num);
		//}
		//else
		printf("%d is equal to 0", num);
		break;
	}
	
	return 0;
}
