/* if a number entered is within the range of 1 and 20; 31 to 50; 61 to 90;*/
#include <stdio.h>
int main(){
	int value;
	printf("Enter the value:");
	scanf("%d", &value);
	
	if (value>=1 & value<=20){
		printf("The value entered is within the range of 1 and 20", value);
	}
	else if(value>=31 & value<=50){
		printf("The value entered is within the range of 31 and 50", value);
	}
	else if (value>=61 & value<=90){
		printf("The value entered is within the range of 61 and 90", value);
	}
	else
	{
		printf("The value is not in range");
	}
}
