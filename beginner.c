#include <stdio.h>

int main() {
    // Declare variables to store customer information
    char customerName[100];
    int customerID;

    // Prompt the user to enter customer information
    printf("Enter customer's name: ");
    scanf("%s", customerName);
    printf("Enter customer's ID: ");
    scanf("%d", &customerID);

    // Declare arrays to store item details
    char itemNames[3][100];
    int itemQuantities[3];
    float itemPrices[3];

    // Prompt the user to enter item details for 3 items
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of item %d: ", i + 1);
        scanf("%s", itemNames[i]);
        printf("Enter the quantity of item %d: ", i + 1);
        scanf("%d", &itemQuantities[i]);
        printf("Enter the price of item %d: $", i + 1);
        scanf("%f", &itemPrices[i]);
    }

    // Calculate the total price
    float totalPrice = 0.0;
    for (int i = 0; i < 3; i++) {
        totalPrice += itemQuantities[i] * itemPrices[i];
    }

    // Print the customer receipt
    printf("\nCustomer Receipt\n");
    printf("Customer Name: %s\n", customerName);
    printf("Customer ID: %d\n\n", customerID);
    printf("Items Bought:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Item: %s\n", itemNames[i]);
        printf("Quantity: %d\n", itemQuantities[i]);
        printf("Price per Item: $%.2f\n", itemPrices[i]);
        printf("Subtotal: $%.2f\n\n", itemQuantities[i] * itemPrices[i]);
    }
    
    printf("Total Price: $%.2f\n", totalPrice);

    return 0;
}

