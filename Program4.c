#include<stdio.h>
void main () {

	int count;
	float cost;
	char row;

	printf("Movie Plan\n");

	printf("Enter number of person \n");
	scanf("%d", &count);

	printf("Enter total cost of the tickets \n");
	scanf("%f",&cost);

	printf("Enter the row number \n");
	scanf(" %c", &row);

	printf("Total number of tickets = %d \n",count);
	printf("Total cost = %f\n",cost);
	printf("Row number = %c\n",row);
}
	
