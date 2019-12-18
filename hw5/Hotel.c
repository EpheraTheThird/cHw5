#include<stdio.h>
#include"Customer.h"
#include"Reservation.h"
#include"room.h"
typedef struct Hotel
{
	struct room rooms[4][4];
	struct Reservation * ReservationList;
	struct Customer CustomersList[16];
	int noOfReservasion
};

int printCustomers(struct Hotel h) {
	for (int x = 0; x < 16; x++) {
		h.CustomersList[x].printName();
	}
}

int checkRooms(struct Hotel h) {
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			if (h.rooms[x][y].isOcupied == 0) {
				struct room* room;
				room = &h.rooms[x][y];
				return room;
			}
		}
	}
	return 0;
}

int addReservation(struct Hotel h, struct room* room, int date[], char* name, int noCustomers, int noBreakfast) {
	struct Reservation new;
	for (int x = 0; x < 3; x++) {
		new.date[x] = date[x];
	}
	new.customers = &name;
	new.numberOfCustomers = noCustomers;
	new.berkfastForCustomers = noBreakfast;
	new.rooms = &room;
	struct Reservation* pr = &(h.ReservationList);
	for (int x = 0; x < 16; x++) {
		if (*(pr).next == 0) {
			*(pr).next = &new;
		}
		else {
			pr++;
		}
	}
}

struct reservation* checkReservation(struct Hotel h, int x, int y) {
	struct reservation* r=&(h.ReservationList);
	for (int i = 0; i < 16; i++) {
		if (*(r).room==h.rooms[x][y]) {
			return r;
		}
		r=&(*(r).next);
	}
}

int removeReservation(struct Hotel h, struct Reservation* r) {
	struct Resrvation * pr = &h.ReservationList;
	struct Resrvation* br = &h.ReservationList;
	for (int x = 0; x < 16; x++) {
		if (x==0 && *pr==*r) {
			h.ReservationList = &(r.next);
			return 1;
		}
		if (*pr == *r) {
			*(br).next == &(*r).next;
			return 1;
		}
		pr++;
		br++;
	}
	return 0;
}