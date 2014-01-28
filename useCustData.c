// Library to get data from a file and feed it into the program. Also write data back when called.
// @author Lewis Cawte <lewis@lewiscawte.me>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char pin[5]="";
float balance=0;
char custName[41]="", cardNumber[17]="";
	
int main() {
    // A function for testing.
    getCustData(); // Gets the actual data
    
    char newPin[5]="";
    printf("Please enter new PIN");
    gets(newPin);
    strcpy(pin, newPin);
	
    writeCustData(); // Write the data back to the file for future program executions.

    system("PAUSE");
    return 0;
}

int getCustData() {
	// Function to fetch data from file and split into the required variables.
    FILE *custData;
	custData = fopen("N:\\testcustdata.txt", "r");
	
	fflush(stdin);
	fscanf(custData, "%s %s %s %f", custName, cardNumber, pin, &balance);
	
	fclose(custData);
	return 0;
}

int writeCustData() {
	// Function to write the contents of the key variables back to a text file.
	FILE *custData;
	custData = fopen("N:\\testcustwritedata.txt", "w");
	
	fprintf(custData, "%s %s %s %.2f", custName, cardNumber, pin, balance);
	
	return 0;
}
