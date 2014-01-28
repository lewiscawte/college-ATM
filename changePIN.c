// Function to display a menu of options and allow user to access other parts of the system.
// @author ??? <??.??13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int changePIN() {
	char newPin[5]=""; // Sets a string for a new PIN to be used for checking.

	printf("Please enter new PIN");
	gets(newPin);

	// @TODO: Validate new PIN, to check four digits, and not the same as old PIN.
	strcpy(pin, newPin);

	system("PAUSE");
	return 0;
}