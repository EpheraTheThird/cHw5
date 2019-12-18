#include"Customer.h"
#include"room.h"
#include<math.h>
typedef struct Reservation
{
	int date[3];
	struct Customer* customers;
	int numberOfCustomers;
	int berkfastForCustomers;
	struct room* rooms;
	int endDate[3];
	struct Reservation* next;
};

/*int Mull(int x; int y) {
	int ans = 0;
	for (int i = 0; i < y; i++) {
		ans = ans + x
	}
	return ans;
}

int isGoingOn(*int ddate) {
	int x = *ddate;
	x=Mull(x, 10);
	ddate++;
	x = x + *(ddate);
	if (x == ddate{ 0 }) {
		ddate++;
		x = *(ddate);
		ddate++;
		x=Mull(x, 10);
		x = x + *(ddate);
		if (x == date{ 1 }) {
			return 1;
		}
		return 0;
	}
	return 0;
}
*/