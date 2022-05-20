#include<iostream>
#include<cstring>
#include "Customer.h"
#include "RegisterdCustomer.h"
#include "GuestCustomer.h"
#include "Payment.h"
#include "Booking.h"
#include "Vehicle.h"
#include "Ownershinership.h"
#include "Feedback.h"
#include "Employee"

int main()
{
	RegisteredCustomer cus1;
	GuestCustomer cus2;

	Booking* myBooking;
	myBooking = new Booking(123456, 98765);
	myBooking->Display();
	delete myBooking;

	Customer* C1=new Customer("Chathura","Chathura.Kodithuwakku12@gmail.com","8913601070V");
	Customer* C2=new Customer("Ananda", "ananda.Palliyaguru169@gmail.com", "87549832V");

	Vehicle* ("CAR1234", C1);
	Vehicle* ("CAD1230", C2);

	C1->DisplayDetail();
	C2->DisplayDetail();

	Feedback f1;

	Employee emp1("Kasun Tharindu", "Kadawatha" , "Kasun1999@gmail.com", 077777777, 21-2332);

	return 0;

}