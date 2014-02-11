// Function to show 10 most recent transactions, and post a statement.
// @author David ??? <david.???13@smail.bhasvic.ac.uk>
#include<stdin.h>
#include<stdlib.h>
#include<strings.h>
void orderStatement() {
	FILE *customerStatement;
	char buffer[10][31], statementFileLocation[101] = "";
	int counter=0;

	strcat(statementFileLocation, "N:\\");
	strcat(statementFileLocation, cardNumber );
	strcat(statementFileLocation, "-transactions.txt"); 

	customerStatement = fopen(statementFileLocation, "r");
	
	for (counter=0;counter<9;counter++) {
		fscanf(customerStatement, "%s", buffer[counter]);
	}
	
	for (counter=0;counter<9;counter++) {
		printf("Transactions: %s\n", buffer[counter] );
	}
	
	printf( "\n\nStatement will be sent to the following address:\n%s\n", address );
	
	fclose(customerStatement);
	
	system("PAUSE");
}
