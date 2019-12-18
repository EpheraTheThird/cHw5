#pragma once
struct Reservation
{
	int date[3];
	struct Customer* customers;
	int numberOfCustomers;
	int berkfastForCustomers;
	struct room* rooms;
	struct Reservation* next;
};
/*int isGoingOn(*int ddate);*/