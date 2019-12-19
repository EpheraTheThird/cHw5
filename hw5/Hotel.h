#include<stdio.h>
#include"Customer.h"
#include"Reservation.h"
#include"room.h"
typedef struct Hotel
{
	struct room rooms[4][4];
	struct Reservation * ReservationList;
	struct Customer CustomersList[16];
};
int showHotelStatus(struct Hotel h);
int printCustomers();
int printCustomers(struct Hotel h);
int checkRooms(struct Hotel h);
int addReservation(struct Hotel h, struct room* room, int date[], char* name, int noCustomers, int noBreakfast);
struct reservation* checkReservation(struct Hotel h, int x, int y);
int removeReservation(struct Hotel h, struct Reservation* r);
