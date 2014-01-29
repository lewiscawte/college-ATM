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
	gets(inputAccountNumb);
	
	fileLocation = strcat("N:\\", inputAccountNumb, ".txt" );
	
	getCustData();
	// If can't open file (non-existant), re-prompt.
	
	do {
		pinAttempts = pinAttempts + 1;

		if( pinAttempts == 4 ) {
			printf("PIN Check Failed. Your card has been retained.");
			exit(1);
		}

		gets(inputPIN);
		if( inputPIN != pin ) {
			printf("PIN Incorrect. Please try again.");
		}
	} while( inputPIN != pin && pinAttempts < 4);
}