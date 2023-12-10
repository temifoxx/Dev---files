//A C program to find the perimenter and the area of a rectangle
// 2(L + B)
// L * B

#include <stdio.h>
int main(){
	
	float L, B, area, perimeter;
	
	printf("Input the value for length:");
	scanf("%f", &L);
	printf("Input the value of breadth:");
	scanf("%f", &B);
	
	area = L * B;
	perimeter = 2 * (L + B);
	
	printf("The perimeter of a rectangle is: %f \n", perimeter);
	printf("The area of a rectangle is: %f \n", area);
	
	
}
