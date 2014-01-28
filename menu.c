// Function to display a menu of options and allow user to access other parts of the system.
// @author ??? <??.??13@smail.bhasvic.ac.uk>
#include<stdio.h>
#include<stdlib.h>

int menu() {
	int exit = 0; // Exit loop (when set to 1, program exits)
	
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
		
		printf("Select an option: ");
		fflush(stdin);
		scanf("%d", &option);
		if( option<1 || option>8 ) {
			printf("Please enter a number between 1 and 8\n"); 
		}
		
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
				// Really cool easter egg...
				printf("YOU ARE SO COOL!");
			break;
			case 4:
				depositFunds();
			break;
			case 5:
				transferFunds();
			break;
			case 6:
				orderStatement();
			break;
			case 7:
				orderChequebook;
			break;
			case 8:
				exit = 1;
			break;
		}
	}
	
	exitATM(); // Run exit function
	
}