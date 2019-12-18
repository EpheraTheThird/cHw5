#include<stdio.h>
typedef struct Customer
{
	char* name;
	int numberOfCreditCard;
};
 
int printName() {
	printf("%s", name);
}