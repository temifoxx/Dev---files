/*if number of goods left in store is less than no of goods ordered
print: Goods available for delivery
calculate and print out the number of goods in store 
else
print:Number of goods ordered for not available
print: Out of stock*/
#include <stdio.h>
int main(){
	int nog_store, nog_ordered, newnog_store;
	//nog_store= 700
	printf("Enter the current number of goods in store: ");
	scanf("%d", &nog_store);
	printf("Enter the number of goods ordered: ");
	scanf("%d", &nog_ordered);
	
	
	if(nog_store<=nog_ordered)
	{
		printf("The number of goods available for delivery now is %d", newnog_store);
		scanf("%d", nog_store - nog_ordered);
	}
	else
	{
		printf("Number of goods ordered for is available!!!. \n");
		printf("Stock available");
	}
	return 0;
}
