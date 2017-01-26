#include<stdio.h>
#include<conio.h>

int main() {

	unsigned int number1, mask, n1_mod;

	printf("Enter a number in hexadecimal format: ");
	scanf("%x", &number1); 

	//Q1:
	printf("\nHex value %x is %u in integer form.\n\n", number1, number1); 

	//Q2:
	n1_mod = number1 << 1;
	printf("Entered hex value multiplied by 2 is %x (%u)\n\n", n1_mod, n1_mod); 

	//Q3:
	n1_mod = number1 >> 1;
	printf("Entered hex value divided by 2 is %x (%u)\n\n", n1_mod, n1_mod);

	//Q4:
	mask = 0x1 << 4;

	//Q5:
	n1_mod = number1 & mask;
	printf("Entered hex value with bitwise operator & and 00010000 mask is %x (%u)\n\n", n1_mod, n1_mod);

	n1_mod = number1 | mask;
	printf("Entered hex value with bitwise operator | and 00010000 mask is %x (%u)\n\n", n1_mod, n1_mod);

	n1_mod = number1 ^ mask;
	printf("Entered hex value with bitwise operator ^ and 00010000 mask is %x (%u)\n\n", n1_mod, n1_mod);

	//Q6:
	printf("Entered number in decimal form: %u\n\n", number1);

	//Q7:
	printf("Entered number in hexadecimal form: %x\n\n", number1);

	//Q8:
	mask = 1 << 7;
	printf("Entered number in binary form: ");

	for (int i = 0; i < 8; i++) {
		if ((number1 & (mask >> i)) == 0) {
			printf("0");
		} else {
			printf("1");
		}
	}

	puts("");

	//Q8 (Alternative shorter form):
	mask = 1 << 7;

	for (int i = 0; i < 8; i++) {
		printf((number1 & (mask >> i)) ? "1" : "0");
	}

	getch();
	return 0;

}

