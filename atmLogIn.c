// Function to log user in and load
// @author ?? <??.??13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char fileLocation[101] = "";

int main() {
	char inputAccountNumb[17]="";
	int pinAttempts = 0;
	
	// @TODO: User messages, etc.
	printf("Please enter your 16 digit card number.\n");
    gets(inputAccountNumb);
	
	strcat(fileLocation, "N:\\");
	strcat(fileLocation, inputAccountNumb );
	strcat(fileLocation, ".txt"); 
	
	
	
	getCustData();
	// If can't open file (non-existent), re-prompt.
	
	do {
		pinAttempts = pinAttempts + 1;

		if( pinAttempts == 4 ) {
			printf("PIN Check Failed. Your card has been retained.");
			exit(1);
		}
		
		printf("PIN is: %s", pin);
		printf("Please enter your 4 digit PIN number.\nBe sure to shield the keypad.\n");
		gets(inputPIN);
		if( strcmp(inputPIN, pin) != 0 ) {
			printf("PIN Incorrect. Please try again.");
		}
	} while( (strcmp(inputPIN, pin) != 0) && pinAttempts < 4);
	menu();
}