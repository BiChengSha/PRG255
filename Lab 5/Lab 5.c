#include<stdio.h>

void sortD1(float input[2][10]);
float sortD2(float input[2][10]);


int main() {

	float temperatures[2][10], coldest;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			printf("Day %d - Enter value for city #%d: \n", i+1, j+1); 
			scanf("%f", &temperatures[i][j]); 
		}
	}


	printf("\t\t Day 1\t Day 2\n"); 
	for (int j = 9; j >= 0; j--) {
		printf("City %d: \t ", j+1); 
		for (int i = 0; i < 2; i++) {
			printf("%.1f\t ", temperatures[i][j]); 
		}
		puts(""); 
	}

	sortD1(temperatures);

	coldest = sortD2(temperatures);
	printf("The lowest temperature recorded on day 2 is %.1f.", coldest);

	getch();
	return 0;

}


void sortD1(float input[2][10]) {

	float tempStor;
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < (10 - (i + 1)); j++) {
			if (input[0][j] > input[0][j + 1]) {
				tempStor = input[0][j + 1];
				input[0][j + 1] = input[0][j];
				input[0][j] = tempStor;
			}
		}
	}
	
	puts("Sorted lowest to highest: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1f\n", input[0][i]); 
	}
}


float sortD2(float input[2][10]) {

	float tempStor, lowest = input[1][0];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < (10 - (i + 1)); j++) {
			if (input[1][j] < input[1][j + 1]) {
				tempStor = input[1][j + 1];
				input[1][j + 1] = input[1][j];
				input[1][j] = tempStor;
			}
		}
		if (input[1][i] < lowest) {
			lowest = input[1][i];
		}
		printf("\nLowest: %.1f\n", lowest);
	}

	puts("Sorted highest to lowest: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1f\n", input[1][i]);
	}
	return(lowest);
}
