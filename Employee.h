//Sakunika.K.K
//IT21289002
#include"Feedback.h"
class Employee {
private:
	Feedback* reply;
	char Name[30];
	char Address[50];
	char email;
	int ContactNo;
	int EmployeeID;
public:
	Employee();
	Employee(const char empname, const char empaddress, const char empmail, int empcontactaNo, int empID);
	void addreply(Feedback);
	void DisplayEmployee();

};
