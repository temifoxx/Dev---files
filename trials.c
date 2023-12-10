// C program to find the perimeter and area of a rectangle
// 2*(L + B)
// L * B
#include <stdio.h>
int main(){
    float l, b, area, perimeter;

    printf("Input the value for the length: ");
    scanf("%f", &l);
    printf("nput the value for the breadth");
    scanf("%f", &b);

    area = l*b;
    perimeter = 2*(l + b);

    printf("The perimeter of the rectangle is %f \n", perimeter);
    printf("The area of a rectangle is %f \n", area);

    return 0;
}