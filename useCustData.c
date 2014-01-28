#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char pin[5]="";
float balance=0;
char custName[41]="", cardNumber[17]="";
	
int main() {
    
    getCustData(); // Gets the actual data
    
    char newPin[5]="";
    printf("Please enter new PIN");
    gets(newPin);
    strcpy(pin, newPin);
    writeCustData();

    system("PAUSE");
    return 0;
}

int getCustData() {
    FILE *custData;
	custData = fopen("N:\\testcustdata.txt", "r");
	
	fflush(stdin);
	fscanf(custData, "%s %s %s %f", custName, cardNumber, pin, &balance);
	
	fclose(custData);
	return 0;
}

int writeCustData() {
	FILE *custData;
	custData = fopen("N:\\testcustwritedata.txt", "w");
	
	fprintf(custData, "%s %s %s %.2f", custName, cardNumber, pin, balance);
	
	return 0;
}
