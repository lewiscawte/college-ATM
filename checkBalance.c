// Function to check, return and print account balance.
// @author Tom Fabry <tom.fabry13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checkBalance() {
	char pound=156; // ASCII Code for pound sign.
	FILE *receiptFile;
	
	printf("Available Balance: %.2f\n", balance);
	printf("Would you like to print a receipt? [Y/N] ");
	scanf("%c", balanceReceiptOption );
	
	if( balanceReceiptOption == "y" || balanceReceiptOption == "Y" ) {
		receiptFile = fopen("N:\\receipt.txt", "w");
		fprintf(recepitFile, "Brokemans ATM\n-------------------\n\nBalance Receipt\n%c%.2f\n-------------------\nThank you for using Brokemans ATM.\nBrokemans users can now receive 50% off at Iceland. See T&C." pound, balance);
		fclose(receiptFile);

		printf("Your receipt can be found at 'N:\\receipt.txt'.\nThank you for helping to save the environment.");
	}
	
	printf("\nReturning to the main menu...\n\n");
	system("CLS");
}