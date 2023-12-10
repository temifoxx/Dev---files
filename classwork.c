//Program that groceries reciept for Anchor University Supermarket
//Name of Customer
//Items Bought, Price of items bought
//Total amount of goods bought

#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20], item1[20], item2[20], item3[30], ID[20];
	float qty1, price1, qty2, price2, qty3, price3, totalqty=0.0, total=0.0;
	
	printf("Enter Customer's name: ");
	scanf("%s", name);
	
	printf("Enter Customer's ID: ");
	scanf("%s", ID);
	
	
	//First item
	printf("Name of 1st item: ");
	scanf("%s", item1);
	printf("Quantity of 1st item: \n");
	scanf("%f", &qty1);
	totalqty += qty1;
	printf("Price of 1st item: \n");
	scanf("%f", &price1);
	total += price1;
	
	
	//Second item
	printf("Name of 2nd item: ");
	scanf("%s", item2);
	printf("Quantity of 2nd item: \n");
	scanf("%f", &qty2);
	totalqty += qty2;
	printf("Price of 2st item: \n");
	scanf("%f", &price2);
	total += price2;
	
	
	//Third item
	printf("Name of 3rd item: ");
	scanf("%s", item3);
	printf("Quantity of 3rd item: \n");
	scanf("%f", &qty3);
	totalqty += qty3;
	printf("Price of 3rd item: \n");
	scanf("%f", &price3);
	total += price3;
	
	system("cls");
	
	
	//Displaying customer's receipt
	printf("-----Anchor University Supermarket-----\n");
	printf("----Customer's Receipt----\n");
	printf("Customer's Name: %s\n", name);
	printf("Customer's ID: %s\n", ID);
	printf("%-20s %s $%-10s\n", "Item", "Quantity", "Price");
	printf("------------------------------------------\n");
	printf("%-20s %f $%.2f\n", item1, qty1, price1);
	printf("%-20s %f $%.2f\n", item2, qty2, price2);
	printf("%-20s %f $%.2f\n", item3, qty3, price3);	
	printf("------------------------------------------\n");
	//total price of all items
	printf("Total: $%.2f\n", total);
	printf("Total quantity of items: %f", totalqty);
	
	return 0;

}



//IYANDA JEREMIAH JESUTOFUNMI
//AUL/CMP/23/093
//COMPUTER SCIENCE
//MATHEMATICAL SCIENCE
