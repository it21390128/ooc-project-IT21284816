//it21288326
//U D S V Dharmasena

#include "Payment.h"
class Booking
{
private:
	Payment* pay;
	int BookingID;
public:
	Booking() {};
	Booking(int bid, int pid);
	void Displaypayments();
	~Booking();

};
