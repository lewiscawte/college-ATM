#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int orderStatement() {
	FILE *customerStatement;
	char buffer[20], char statementFileLocation[101] = "";

	strcat(statementFileLocation, "N:\\");
	strcat(statementFileLocation, cardNumber );
	strcat(statementFileLocation, "-transactions.txt"); 

	FILE *customerStatement;
	customerStatement = fopen(statementFileLocation, "r");
	
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	fscanf(customerStatement, "%s", buffer);
	
	printf("Transactions: %s\n", buffer );
	fclose(customerStatement);
	
	system("PAUSE");
}
