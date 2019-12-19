#include <stdio.h>
#include "Customer.h"
#include "Hotel.h"
#include "Reservation.h"
#include "room.h"
struct Hotel California;
/*int showHotelStatus(struct Hotel h) {
	struct* Reservation = h.getReservationNumbers();
	

}
*/

int addCustomer(char* name, int creditCardNumber) {
	struct Customer a = { name,creditCardNumber };
	int x = California.numnerOfCustomers;
	California.CustomersList [x] = a;
	x++;
	California.numnerOfCustomers = x;
	return 1;
}
int checkIn() {
	printCustomers(California);
	char* name;
	printf("what is your name?");
	scanf_s("%s", *name);
	printf("how many guest you will be?");
	int noGuests,noBrekfast;
	scanf_s("%s", noGuests);
	printf("how many will eat breakfast?");
	scanf_s("%d", noBrekfast);
	if (checkRooms(California) =! 0) {
		addReservation(California,checkRooms(California),date,name,noGuests,noBrekfast);
	}
	else {
		printf("corantly there are no rooms available");
	}
}
int checkOut(int room[]) {
	struct reservation* r;
	r = &(checkReservaition(California,California.rooms[room[0]][room[1]);
	removeReservation(California,r);
}
int main() {
	California.numnerOfCustomers = 0;
	char name[26];
	scanf("%s",name);
	int x = addCustomer(name, 1234);
	printf("%d", x);
}