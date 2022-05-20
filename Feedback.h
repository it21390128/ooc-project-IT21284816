//Sakunika.K.K
//IT21289002
#include"Customer.h"
#include"Employee.h"
class Feedback
{
private:
	Customer* Cus;
	Employee* Emp;
	int feedbackID;
	char feedback[200];
	char reply[200];
public:
	Feedback(int feedID, const char feed[], const char repl[]);
	void Displayfeedback();

};

