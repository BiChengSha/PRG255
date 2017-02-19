#include<stdio.h>
#include"Structures.h"

int countLastName(struct Employee employees[20]);

int main() {

	struct Employee employee[20];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter Employee #%d's FIRST NAME: \n", i+1);			//Scanning for first name
		scanf("%s", &employee[i].firstName);
		fflush(stdin); 
		printf("Enter Employee #%d's LAST NAME: \n", i + 1);		//Scanning for last name
		scanf("%s", &employee[i].lastName);
		fflush(stdin); 
		printf("Enter Employee #%d's YEAR OF BIRTH: \n", i + 1);	//Scanning for birth year
		scanf("%d", &employee[i].birthYear);
		fflush(stdin); 
		printf("Enter Employee #%d's HOUSE NUMBER: \n", i + 1);		//Scanning for house number
		scanf("%d", &employee[i].address.houseNum);
		fflush(stdin);
		printf("Enter Employee #%d's STREET NAME: \n", i + 1);		//Scanning for street name
		scanf("%s", &employee[i].address.street);
		fflush(stdin);
		printf("Enter Employee #%d's CITY: \n", i + 1);				//Scanning for city name
		scanf("%s", &employee[i].address.city);
		fflush(stdin);
		printf("Enter Employee #%d's POSTAL CODE: \n", i + 1);		//Scanning for postal code
		scanf("%s", &employee[i].address.postalCode);
		fflush(stdin);
		printf("Enter Employee #%d's SALARY: \n", i + 1);			//Scanning for salary
		scanf("%f", &employee[i].salary);
		fflush(stdin);
	}

	system("cls");	//Clearing screen

	printf("Name\t\tCity\t\tSalary\n");  //Printing the top row with the table headers

	for (i = 0; i < 3; i++) {			//Printing each value from each entered employee
		printf("%s %s \t%s\t\t%g\n", employee[i].firstName, employee[i].lastName, employee[i].address.city, employee[i].salary);
	}

	puts(""); 
	printf("Count of A last names: %d", countLastName(employee));  //Print out number of employees with "a"/"A" last names with function call

	getch();
	return 0;
}


int countLastName(struct Employee employees[20]) {		//Function to count number of last names that start with "a"/"A"

	int count = 0, i;

	for (i = 0; i < 3; i++) {		//looping through the names
		if (employees[i].lastName[0] == 'A' || employees[i].lastName[0] == 'a') {		//Checking first letter of last name
			count++;
		}
	}
	return count;
}