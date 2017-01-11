/* This program will find the largest and smallest number of the numbers you enter. */
#include <stdio.h>
#include <conio.h>
float max(float x, float y)
{
	if (x>y)
		return x;
	else
		return y;
}
float min(float x, float y)
{
	if (x<y)
		return x;
	else
		return y;
}
int main()
{
	int number_count, i = 1;
	float number, minimum, maximum;
	printf("\n\nHow many numbers you will enter? ");
	scanf("%d", &number_count);
	printf("\n\nNow you will be asked to enter the numbers.");
	printf("\n\nEnter number 1: ");
	scanf("%f", &number);
	minimum = maximum = number;
	for (i = 2; i <= number_count; i++)
	{
		printf("\nEnter number %d: ", i);
		scanf("%f", &number);
		minimum = min(minimum, number);
		maximum = max(maximum, number);
	}
	printf("\n\n\tSmallest number: %-10.2f", minimum);
	printf("\n\n\tLargest number: %-10.2f", maximum);
	getch();
	return 0;
}
