//write a program to print the maximum value between two numbers using user defined functions.
#include<stdio.h>

int main(){
    int num1, num2, max;
    
    printf("Enter the first nnumber: ");
    scanf ("%d", &num1);
    printf("Enter the second nnumber: ");
    scanf ("%d", &num2);
    
    max = maximum(num1, num2);
    printf("%d is the maximum number \n", max);
    
    return 0;
    }
    
    int maximmum(int a, int b)
    {
        if (a>b)
        return a;
        else
        return b;
    }
