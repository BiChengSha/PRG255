#include<stdio.h>
#include<stdlib.h>


float findAverage(float priceIn) {
	static float total = 0;
	float avg;

	total = total + priceIn;
	avg = total / 10;

	return avg;
}

int main() {

	float carPrice[10];
	float average;

	for (int i = 0; i < 10; i++) {
		printf("Enter price for car #%d: ", i + 1);
		scanf("%f", &carPrice[i]);
		fflush(stdin);
	}

	for (int i = 0; i < 10; i++) {
		printf("Price entered for car #%d is %.2f.\n", i+1, carPrice[i]); 
	}

	for (int i = 0; i < 10; i++) {
		average = findAverage(carPrice[i]);
	}

	printf("Average price of all cars is %.2f.", average);

	getch();
	return 0;

}
