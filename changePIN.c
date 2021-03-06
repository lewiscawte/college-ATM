// Function to display a menu of options and allow user to access other parts of the system.
// @author Teo Prata <radu.prata13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void changePIN() {
	char newPin[5]=""; // Sets a string for a new PIN to be used for checking.

	printf("Please enter new PIN");
	do {
		fflush(stdin);
		gets(newPin);
	while( strlen(newPin) != 4 );
	
	// @TODO: Validate new PIN, to check four digits, and not the same as old PIN.
	strcpy(pin, newPin);
	printf("Input PIN was: %s", newPin);
	printf("PIN is: %s", pin);

	system("PAUSE");
}