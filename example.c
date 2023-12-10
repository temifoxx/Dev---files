#include <stdio.h>

int main() {
    // Customer information
    char customerName[] = "John Doe";
    int customerID = 12345;
    
    // Item details
    char items[][50] = {"Item 1", "Item 2", "Item 3"};
    int quantities[] = {2, 3, 1};
    float prices[] = {10.50, 5.25, 20.00};
    
    // Calculate the total price
    float totalPrice = 0.0;
    for (int i = 0; i < 3; i++) {
        totalPrice += quantities[i] * prices[i];
    }
    
    // Generate and print the receipt
    printf("Customer Receipt\n\n");
    printf("Customer Name: %s\n", customerName);
    printf("Customer ID: %d\n\n", customerID);
    printf("Items Bought:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Item: %s\n", items[i]);
        printf("Quantity: %d\n", quantities[i]);
        printf("Price per Item: $%.2f\n", prices[i]);
        printf("Subtotal: $%.2f\n\n", quantities[i] * prices[i]);
    }
    
    printf("Total Price: $%.2f\n", totalPrice);
    
    return 0;
}
