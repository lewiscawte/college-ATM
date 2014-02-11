// Function to add money to balance (paying-in machine)
// @author Radu Prata <radu.prata13@smail.bhasvic.ac.uk>
#include <stdlib.h>
#include <stdio.h>
#include<strings.h>
void depositFunds() {
	int choice;
	float moneydeposited=0;
	float balance=0;
	char pound=156;
	float divmoneydeposited = 0, deposit = 0;
	int diverror=0;

	do {
		do {   
			printf("Which type of deposit would you like to enter?\n Cash=1 \n Cheque=2\n");
			fflush(stdin);
			scanf("%d", &choice);
		} while(choice>2 || choice <=0);
		printf("Enter the amount of money you want to deposit\n");
		scanf("%f", &moneydeposited);
		balance = balance + moneydeposited;
		printf("Your new account value is %c %.2f\n",  pound, balance); 
		if (moneydeposited <= 300) {
			divmoneydeposited = moneydeposited;
			divmoneydeposited = divmoneydeposited/5;
			while (divmoneydeposited>=1) {
				divmoneydeposited = divmoneydeposited-1;
			}
			deposit = divmoneydeposited;
			if (deposit == 0) {
				divmoneydeposited = 0;
				moneydeposited = 0;
				deposit = 0;
				printf ("Your balance is now %f\n", balance);
				diverror=1;
			} else {
				system("CLS");
				printf("Your input is invalid.\n");
				printf("Please input a number divisible by 5.\n\n");
				balance = balance - moneydeposited;
				diverror=2;
			}
		} else {
			system ("CLS");
			printf("The ATM cannot output more than %c300 in one sitting.\n\n", pound);
			printf("Please enter another number.\n");
			balance = balance - moneydeposited;
			diverror=2;
		}
	} while( diverror==2 );
	system("PAUSE");
	return 0;
}