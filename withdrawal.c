// Function to withdraw money from account.
// @author Tom Fabry <tom.fabry13@smail.bhasvic.ac.uk>
// @author Lewis Cawte <lewis@lewiscawte.me>

#include<stdio.h>
#include<stdlib.h>

int main() {
	int withdrawOption = 0, insufficientFunds = 1, transactionComplete = 0;
	float other = 0, divother = 0, balance = 500, withdraw = 0;
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
				printf ("Your balance is now %f\n", balance);
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
				printf ("Your balance is now %f\n", balance);
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
				printf ("Your balance is now %f\n", balance);
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
				printf ("Your balance is now %f\n", balance);
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
				printf ("Your balance is now %f\n", balance);
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
								printf ("Your balance is now %f\n", balance);
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
	return 0;
}
