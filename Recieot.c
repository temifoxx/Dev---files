#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20], item1[20], item2[20], item3[20], item4[20], matno[20];
    float price1, price2, price3, price4, total=0.0;

    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your Matric number: ");
    scanf("%s",matno);

    printf("Enter the name of the first item: ");
    scanf("%s", item1);
    
    printf("Enter the price of the first item: \n");
    scanf("%f", &price1);
    total += price1;

    printf("Enter the name of the second item: \n");
    scanf("%s", item2);
    
    printf("Enter the price of the second item: \n");
    scanf("%f", &price2);
    total += price2;

    printf("Enter the name of the third item: \n");
    scanf("%s", item3);
    
    printf("Enter the price of the third item: \n");
    scanf("%f", &price3);
    total += price3;

    printf("Enter the name of the fourth item: \n");
    scanf("%s", item4);
    
    printf("Enter the price of the fourth item: \n");
    scanf("%f", &price4);
    total += price4;

    system("cls");

    // Display the receipt
    printf("----ANCHOR UNIVERSITY SUPERMARKET----\n");
    
    printf("Customer's Name: %s\n", name);
    
    printf("Customer's Matric Number: %s\n", matno);
    
    printf("Receipt:\n");
    
    printf("%-20s %-10s\n", "Item", "Price");
    
    printf("-------------------------\n");
    printf("%-20s $%.2f\n", item1, price1);
    
    printf("%-20s $%.2f\n", item2, price2);
    
    printf("%-20s $%.2f\n", item3, price3);
    
    printf("%-20s $%.2f\n", item4, price4);
    
    printf("-------------------------\n");
    
    //total;
    printf("Total: $%.2f\n", total);

    return 0;
}

