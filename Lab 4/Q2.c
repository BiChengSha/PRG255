#include<stdio.h>

int countChar(char toCount[], int length);

int main() {
	
	char sentence[61];
	int count = 0;

	printf("Enter a sentence up to 60 characters in length: \n"); 
	gets(sentence);

	for (int i = 0; i < 60; i++) {
		if (sentence[i] == 0) {
			break;
		}
		if (sentence[i] == 'a') {
			sentence[i] = '&';
		} else if (sentence[i] == 'e') {
			sentence[i] = '@';
		}
		count++;

	}

	printf("The sentence is \"%s\"\n", sentence); 
	printf("Number of characters in entered sentence is %d", countChar(sentence, count)); 

	getch();
	return 0;
}

int countChar(char toCount[], int length) {

	int count = 0;
	
	for (int i = 0; i < length; i++) {
		if (toCount[i] != 0 && toCount[i]!= 32) {
			//printf("This character is %c (%d), the count is %d \n", toCount[i], toCount[i], count); 
			count++;
		}
	}
	return (count);
}
