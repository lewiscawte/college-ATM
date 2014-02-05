// Function to transfer funds to another account.
// @author Lewis Cawte <lewi@lewiscawte.me>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void transferFunds() {

	// Variables to match the globals, renamed to victim for recepient. 
	char victimPin[5]="", victimCustName[41]="", victimCardNumb[17]="";
	float victimBalance=0, transferAmount=0;

	// @term: victim - the person who is the recipeint
	// Get the victim's account details.
	printf("Please enter the account number you wish to transfer funds to.\n");
	gets(victimCardNumb);
	
	// Construct the file location for the victim's data file.
	strcat(victimFileLocation, "N:\\");
	strcat(victimFileLocation, victimCardNumb );
	strcat(victimFileLocation, ".txt"); 

	FILE *victimData;
	victimData = fopen(victimFileLocation, "r");
	
	fflush(stdin);
	fscanf(victimData, "%s %s %s %f", victimCustName, victimCardNumb, victimPin, &victimBalance);

	do {
	printf("Please enter the amount you would like to transfer to %s: " victimCustName);
	scanf("%f", &transferAmount);
	} while( transferAmount > balance || transferAmount < 0 );
	printf("Transfering %.2f to %s (Acct. %s)", transferAmount, victimCustName, victimCardNumb).
}