#include<stdio.h>
typedef struct room
{
	int isOcupied;
	int guests;
	int brekfastGuests;
};

int printDeatails(struct room r) {
	if (r.isOcupied == 1) {
		printf("the room is ocupied, by %d guests and %d going to breakfast", r.guests, r.brekfastGuests);
	}
	else {
		printf("the room is unocupied");
	}
}