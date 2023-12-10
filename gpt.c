#include <stdio.h>

// Structure to hold the item details
typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

// Function to calculate the total price
float calculateTotal(Item item) {
    return item.quantity * item.price;
}

int main() {
    char customerName[50];
    int customerID;
    Item items[3];
    int i;
    float totalPrice = 0;

    // Get customer details
    printf("Enter customer's name: ");
    scanf("%s", customerName);
    printf("Enter customer's ID: ");
    scanf("%d", &customerID);

    // Get items details
    for (i = 0; i < 3; i++) {
        printf("\nEnter item %d name: ", i + 1);
        scanf("%s", items[i].name);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter price: ");
        scanf("%f", &items[i].price);

        // Calculate total price for the item
        totalPrice += calculateTotal(items[i]);
    }

    // Display the receipt
    printf("\nUNIVERSITY SUPERMARKET RECEIPT\n");
    printf("Customer's Name: %s\n", customerName);
    printf("Customer's ID: %d\n", customerID);
    printf("\nItems\t\tQuantity\tPrice\t\tTotal\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t\t%d\t\t$%.2f\t\t$%.2f\n", items[i].name, items[i].quantity, items[i].price, calculateTotal(items[i]));
    }
    printf("\nTotal Price: $%.2f\n", totalPrice);

    return 0;
}
