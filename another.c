#include <stdio.h>

// Structure to represent an item
struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    // Customer information
    char customerName[100];
    int customerID;

    printf("Enter customer's name: ");
    scanf("%99[^\n]%*c", customerName); // Read customer's name with spaces
    printf("Enter customer's ID: ");
    scanf("%d", &customerID);

    // Item details
    struct Item items[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of item %d: ", i + 1);
        scanf("%49[^\n]%*c", items[i].name); // Read item name with spaces
        printf("Enter the quantity of item %d: ", i + 1);
        scanf("%d", &items[i].quantity);
        printf("Enter the price of item %d: $", i + 1);
        scanf("%f", &items[i].price);
    }

    // Calculate the total price
    float totalPrice = 0.0;
    for (int i = 0; i < 3; i++) {
        totalPrice += items[i].quantity * items[i].price;
    }

    // Generate and print the receipt
    printf("\nCustomer Receipt\n");
    printf("Customer Name: %s\n", customerName);
    printf("Customer ID: %d\n\n", customerID);
    printf("Items Bought:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Item: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Price per Item: $%.2f\n", items[i].price);
        printf("Subtotal: $%.2f\n\n", items[i].quantity * items[i].price);
    }
    
    printf("Total Price: $%.2f\n", totalPrice);

    return 0;
}

