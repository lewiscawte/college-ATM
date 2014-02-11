// Function to log user in and load
// @author ?? <??.??13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char pin[5]="", custName[41]="", cardNumber[17]="";
float balance=0;
char fileLocation[101] = "";
char pound=156;

void menu();
void checkBalance();
void withdrawal();
void changePIN();
void getCustData();
void useCustData();
void transferFunds();

int main() {
	char inputAccountNumb[17]="", inputPIN[5]="";;
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

// Function to display a menu of options and allow user to access other parts of the system.
// @author ??? <??.??13@smail.bhasvic.ac.uk>
// @author Lewis Cawte <lewis@lewiscawte.me>
#include<stdio.h>
#include<stdlib.h>

void menu() {
	int exit = 0, option = 0; // Exit loop (when set to 1, program exits)
	
	while( exit == 0 ) {
		printf("Welcome to the Brokemans ATM\n-------------------------");
		printf("Tip of the Day: Remember - If you want to see your money spent in a flash, let your wife know your card details!\n\n");
		printf("What would you like to do?\n");
		// BEGIN: Menu Options
		printf("\t1. Balance\n");
		printf("\t2. Withdrawal\n");
		printf("\t3. Change PIN\n");
		printf("\t4. Deposit\n");
		printf("\t5. Transfer Funds\n");
		printf("\t6. Order Statement\n");
		printf("\t7. Order Chequebook\n");
		printf("\t8. Exit\n");
		// END: Menu Options
		
		do {
			printf("Select an option: ");
			fflush(stdin);
			scanf("%d", &option);
			if( ( option < 1 || option > 8 ) && option != 1337 && option != 1234 ) {
				printf("Please enter a number between 1 and 8\n"); 
			}
		} while( ( option < 1 || option > 8 ) && option != 1337 && option != 1234 );
		
		switch(option) {
			case 1:
				checkBalance();
			break;
			case 2:
				withdrawal();
			break;
			case 3:
				changePIN();
			break;
			case 1337:
				// Really cool Easter egg...
				printf("YOU ARE SO COOL!");
			break;
			case 1234:
				// I put this in - Fabry
				printf("I declare a thumb war!");
			break;
			case 4:
//				depositFunds();
			break;
			case 5:
				transferFunds();
			break;
			case 6:
//				orderStatement();
			break;
			case 7:
//				orderChequebook();
			break;
			case 8:
				exit = 1;
			break;
		}
	}
	
	//exitATM(); // Run exit function
	
}

// Function to check, return and print account balance.
// @author Tom Fabry <tom.fabry13@smail.bhasvic.ac.uk>
void checkBalance() {
	FILE *receiptFile;
	char balanceReceiptOption = 0;
	
	printf("Available Balance: %.2f\n", balance);
	printf("Would you like to print a receipt? [Y/N] ");
	scanf("%c", balanceReceiptOption );
	
	if( balanceReceiptOption == "y" || balanceReceiptOption == "Y" ) {
		receiptFile = fopen("N:\\receipt.txt", "w");
		fprintf(receiptFile, "Brokemans ATM\n-------------------\n\nBalance Receipt\n%c%.2f\n-------------------\nThank you for using Brokemans ATM.\nBrokemans users can now receive 50% off at Iceland. See T&C.", pound, balance);
		fclose(receiptFile);

		printf("Your receipt can be found at 'N:\\receipt.txt'.\nThank you for helping to save the environment.");
	}
	
	printf("\nReturning to the main menu...\n\n");
	system("CLS");
}

// Function to withdraw money from account.
// @author Lewis Cawte <lewis@lewiscawte.me>
#include<stdio.h>
#include<stdlib.h>

void withdrawal() {
	int withdrawOption = 0, insufficientFunds = 1, transactionComplete = 0;
	float other = 0, divother = 0, withdraw = 0;
	char pound = 156, qwit;
	
	while (transactionComplete == 0 && insufficientFunds == 1) {
	printf("Please select an amount you wish to withdraw.\n");
	printf("\t1) %c5\n", pound);
	printf("\t2) %c10\n", pound);
	printf("\t3) %c25\n", pound);
	printf("\t4) %c50\n", pound);
	printf("\t5) %c100\n", pound);
	printf("\t6) Other\n");
	printf("\t7) Quit to Main Menu\n");
	
	scanf("%d", &withdrawOption);
	switch(withdrawOption) {
		case 1:
			if( balance >= 5 ) {
				balance = balance - 5;
				printf("Your notes have been dispensed below.\n");
				printf ("Your balance is now %.2f\n", balance);
				transactionComplete = 1;
				insufficientFunds = 0;
			} else {
				system ("CLS");
				printf("Insufficient funds for this transaction\n\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 2:
			if( balance >= 10 ) {
				balance = balance - 10;
				printf("Your notes have been dispensed below.\n");
				printf ("Your balance is now %.2f\n", balance);
				transactionComplete = 1;
				insufficientFunds = 0;
			} else {
				system ("CLS");
				printf("Insufficient funds for this transaction\n\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 3:
			if( balance >= 25 ) {
				balance = balance - 25;
				printf("Your notes have been dispensed below.\n");
				printf ("Your balance is now %.2f\n", balance);
				transactionComplete = 1;
				insufficientFunds = 0;
			} else {
				system ("CLS");
				printf("Insufficient funds for this transaction\n\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 4:
			if( balance >= 50 ) {
				balance = balance - 50;
				printf("Your notes have been dispensed below.\n");
				printf ("Your balance is now %.2f\n", balance);
				transactionComplete = 1;
				insufficientFunds = 0;
			} else {
				system ("CLS");
				printf("Insufficient funds for this transaction\n\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 5:
			if( balance >= 100 ) {
				balance = balance - 100;
				printf("Your notes have been dispensed below.\n");
				printf ("Your balance is now %.2f\n", balance);
				transactionComplete = 1;
				insufficientFunds = 0;
			} else {
				system ("CLS");
				printf("Insufficient funds for this transaction\n\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 6:
			 printf("Input the amount you wish to withdraw\n");
			 fflush(stdin);
			 scanf("%f", &other);
			 if (balance >= other && other <= 300) {
						 divother = other;
						 divother = divother/5;
						 while (divother>=1) {
							   divother = divother-1;
							   }
							   withdraw = divother;
						 if (withdraw == 0) {
								balance = balance - other;
								divother = 0;
								other = 0;
								withdraw = 0;
								printf ("Your notes have been dispensed below.\n");
								printf ("Your balance is now %.2f\n", balance);
								transactionComplete = 1;
								insufficientFunds = 0;
						 } else {
								system("CLS");
								printf("Your imput is invalid.\n");
								printf("Please imput a number devisable by 5.\n\n");
								insufficientFunds = 1;
								transactionComplete = 0;
								}
			} else {
				system ("CLS");
				printf("The ATM cannot output more than %c300 in one sitting.\n\n", pound);
				printf("Please enter another number.\n");
				insufficientFunds = 1;
				transactionComplete = 0;
			}
		break;
		case 7:
			 printf("Are you sure you want to return to the Menu?\n");
			 printf("Type 'Y' for 'yes', type 'N' for 'no'\n");
			 fflush(stdin);
			 scanf("%c", &qwit);
			 switch(qwit){
			 
						 case 'Y':
						 case 'y':
						 system("CLS");
						 insufficientFunds = 0;
						 transactionComplete = 1;
						 break;
						 
						 case 'N':
						 case 'n':
						 system("CLS");
						 insufficientFunds = 1;
						 transactionComplete = 0;
						 break;
						 }
		break;
			 
	}
	}
	system("PAUSE");
}

void changePIN() {
	char newPin[5]=""; // Sets a string for a new PIN to be used for checking.

	printf("Please enter new PIN");
	fflush(stdin);
	gets(newPin);

	// @TODO: Validate new PIN, to check four digits, and not the same as old PIN.
	strcpy(pin, newPin);
	printf("Input PIN was: %s", newPin);
	printf("PIN is: %s", pin);

	system("PAUSE");
}

void transferFunds() {
	// Variables to match the globals, renamed to victim for recepient. 
	char victimPin[5]="", victimCustName[41]="", victimCardNumb[17]="", victimFileLocation[101] = "";
	float victimBalance=0, transferAmount=0;

	// @term: victim - the person who is the recipeint
	// Get the victim's account details.
	printf("Please enter the account number you wish to transfer funds to.\n");
	fflush(stdin);
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
		printf("Please enter the amount you would like to transfer to %s: ", victimCustName);
		fflush(stdin);
		scanf("%f", &transferAmount);
	} while( transferAmount > balance || transferAmount < 0 );
	printf("Transfering %.2f to %s (Acct. %s)", transferAmount, victimCustName, victimCardNumb);
}

// Library to get data from a file and feed it into the program. Also write data back when called.
// @author Lewis Cawte <lewis@lewiscawte.me>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void getCustData() {
	// Function to fetch data from file and split into the required variables.
	FILE *custData;
	custData = fopen(fileLocation, "r");
	
	fflush(stdin);
	fscanf(custData, "%s %s %s %f", custName, cardNumber, pin, &balance);
	
	fclose(custData);
}

void writeCustData() {
	// Function to write the contents of the key variables back to a text file.
	FILE *custData;
	custData = fopen(fileLocation, "w");
	
	fprintf(custData, "%s %s %s %.2f", custName, cardNumber, pin, balance);
	
}

