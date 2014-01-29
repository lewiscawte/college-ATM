// Function to withdraw money from account.
// @author Lewis Cawte <lewis@lewiscawte.me>
#include<stdio.h>
#include<stdlib.h>

void withdrawal() {
	int withdrawOption = 0, insufficientFunds = 0, transactionComplete = 0;
	
	printf("Please select an amount you wish to withdraw.");
	printf("\t1) %c5\n", pound);
	printf("\t2) %c10\n", pound);
	printf("\t3) %c40\n", pound);
	printf("\t4) %c50\n", pound);
	printf("\t5) %c100\n", pound);
	printf("\t6) Other\n");
	
	scanf("%d", &withdrawOption);
	switch(withdrawOption) {
		case 1:
			if( balance >= 5 ) {
				balance = balance - 5;
				printf("Your notes have been dispensed below.");
				transactionComplete = 1;
			} else {
				printf("Insufficient funds for this transaction");
				insufficientFunds = 1;
			}
		break;
		case 6:
		
		break;
	}
}