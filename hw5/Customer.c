#include<stdio.h>
typedef struct Customer
{
	char* name;
	int numberOfCreditCard;
};
 
int printName(struct Customer a) {
	printf("%s", *(a.name));
}