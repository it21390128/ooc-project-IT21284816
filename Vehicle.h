//IT21284816
//M S DS De Silva

#include <Feedback>
#include <Vehicle>
#include <Booking>

class Vehicle
{
private:
	char vehicleType[20];
	char vehicleNo[7];
	char NIC[12];

public:
	Vehicle();
	Vehicle(const char aNIC[12], const char avehicleNo[]);
	void setVehicletype(char avehicleType[]);
	char getVehicletype();
	void displayDetails();
	~Vehicle();
}

Vehicle::Vehicle()
{
	strcpy(vehicleType, "");
	strcpy(vehicleNo, "");
}

Vehicle::Vehicle(const char aNIC[12], const char avehicleNo[])
{
	strcpy(NIC, aNIC);
	strcpy(vehicleNo, avehicleNo);
}
void Vehicle::setVehicletype(char avehicleType[])
{
	strcpy(vehicleType, avehicleType);
}

char Vehicle::getVehicletype()
{
	return vehicleType;
}

void Vehicle::displayDetails()
{

}

Vehicle::~Vehicle()
{
	//Destructor
}#pragma once
